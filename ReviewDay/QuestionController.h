//
//  QuestionController.h
//  ReviewDay
//
//  Created by Caleb Hicks on 3/19/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Question.h"
#import "User.h"

typedef NS_ENUM(NSUInteger, QuestionStatus) {
    StatusActive,
    StatusAnswered,
    StatusDeleted,
};

typedef NS_ENUM(NSUInteger, UserRole) {
    RoleStudent,
    RoleMentor,
};

@interface QuestionController : NSObject

@property (strong, nonatomic, readonly) NSArray *questions;
@property (strong, nonatomic, readonly) User *currentUser;

- (Question *)createQuestionWithTitle:(NSString *)title details:(NSString *)details;

- (void)removeQuestion:(Question *)question;

- (void)save;

@end
