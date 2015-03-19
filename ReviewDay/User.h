//
//  User.h
//  ReviewDay
//
//  Created by Caleb Hicks on 3/19/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface User : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * role;
@property (nonatomic, retain) NSOrderedSet *questionsAsked;
@property (nonatomic, retain) NSOrderedSet *questionsAnswered;
@end

@interface User (CoreDataGeneratedAccessors)

- (void)insertObject:(NSManagedObject *)value inQuestionsAskedAtIndex:(NSUInteger)idx;
- (void)removeObjectFromQuestionsAskedAtIndex:(NSUInteger)idx;
- (void)insertQuestionsAsked:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeQuestionsAskedAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInQuestionsAskedAtIndex:(NSUInteger)idx withObject:(NSManagedObject *)value;
- (void)replaceQuestionsAskedAtIndexes:(NSIndexSet *)indexes withQuestionsAsked:(NSArray *)values;
- (void)addQuestionsAskedObject:(NSManagedObject *)value;
- (void)removeQuestionsAskedObject:(NSManagedObject *)value;
- (void)addQuestionsAsked:(NSOrderedSet *)values;
- (void)removeQuestionsAsked:(NSOrderedSet *)values;
- (void)insertObject:(NSManagedObject *)value inQuestionsAnsweredAtIndex:(NSUInteger)idx;
- (void)removeObjectFromQuestionsAnsweredAtIndex:(NSUInteger)idx;
- (void)insertQuestionsAnswered:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeQuestionsAnsweredAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInQuestionsAnsweredAtIndex:(NSUInteger)idx withObject:(NSManagedObject *)value;
- (void)replaceQuestionsAnsweredAtIndexes:(NSIndexSet *)indexes withQuestionsAnswered:(NSArray *)values;
- (void)addQuestionsAnsweredObject:(NSManagedObject *)value;
- (void)removeQuestionsAnsweredObject:(NSManagedObject *)value;
- (void)addQuestionsAnswered:(NSOrderedSet *)values;
- (void)removeQuestionsAnswered:(NSOrderedSet *)values;
@end
