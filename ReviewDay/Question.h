//
//  Question.h
//  ReviewDay
//
//  Created by Caleb Hicks on 3/19/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class User;

@interface Question : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * details;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSDate * dateSubmitted;
@property (nonatomic, retain) NSDate * dateAnswered;
@property (nonatomic, retain) User *submittedBy;
@property (nonatomic, retain) User *answeredBy;

@end
