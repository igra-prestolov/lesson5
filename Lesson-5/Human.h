//
//  Human.h
//  Lesson-5
//
//  Created by Tetiana Galushko on 10/8/18.
//  Copyright © 2018 Tatiana Galushko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Human : NSObject
@property (strong, nonatomic) NSString *name;
@property (assign, nonatomic) float height;
@property (assign, nonatomic) float weight;
@property (strong, nonatomic) NSString *gender;

- (instancetype) initWithName: (NSString *)name andWithGender: (NSString *)gender andWithHeight: (float)height andWithWeight: (float)weight;
- (void) move;

@end
