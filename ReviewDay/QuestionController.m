//
//  QuestionController.m
//  ReviewDay
//
//  Created by Caleb Hicks on 3/19/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import "QuestionController.h"
#import "Stack.h"

@implementation QuestionController

- (NSArray *)questions {
    NSFetchRequest *request = [NSFetchRequest fetchRequestWithEntityName:@"Question"];
    
    return [[Stack sharedInstance].managedObjectContext executeFetchRequest:request error:nil];
}

- (User *)currentUser {

    NSFetchRequest *request = [NSFetchRequest fetchRequestWithEntityName:@"User"];
    
    NSArray *users = [[Stack sharedInstance].managedObjectContext executeFetchRequest:request error:nil];
    
    User *user;
    
    if (users.firstObject) {
        user = users.firstObject;
    } else {
        user = [NSEntityDescription insertNewObjectForEntityForName:@"User" inManagedObjectContext:[Stack sharedInstance].managedObjectContext];
        
        user.name = @"Current User";
        user.role = [NSNumber numberWithInteger:RoleStudent];
        
        [self save];
    }
    
    return user;
}

- (Question *)createQuestionWithTitle:(NSString *)title details:(NSString *)details {
    Question *question = [NSEntityDescription insertNewObjectForEntityForName:@"Entry" inManagedObjectContext:[Stack sharedInstance].managedObjectContext];
    
    question.title = title;
    question.details = details;
    question.dateSubmitted = [NSDate date];
    question.status = [NSNumber numberWithInteger:StatusActive];
    question.submittedBy = [self currentUser];
    
    [self save];
    
    return question;
}

- (void)removeQuestion:(Question *)question {
    [question.managedObjectContext deleteObject:question];
    [self save];
}

- (void)save {
    [[Stack sharedInstance].managedObjectContext save:nil];
}

@end
