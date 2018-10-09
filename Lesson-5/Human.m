//
//  Human.m
//  Lesson-5
//
//  Created by Tetiana Galushko on 10/8/18.
//  Copyright © 2018 Tatiana Galushko. All rights reserved.
//

#import "Human.h"

@implementation Human

- (instancetype) initWithName:(NSString *)name andWithGender:(NSString *)gender andWithHeight:(float)height andWithWeight:(float)weight {
    self = [super init];
    if (self) {
        _name = name;
        _gender = gender;
        _height = height;
        _weight = weight;
    }
    return self;
}

- (void) move {
    NSLog(@"%@ is moved", self.name);
}

@end
