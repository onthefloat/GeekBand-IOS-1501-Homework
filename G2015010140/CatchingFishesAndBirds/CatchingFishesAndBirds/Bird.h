//
//  Bird.h
//  CatchingFishesAndBirds
//
//  Created by Turtleeeeeeeeee on 15/8/9.
//  Copyright © 2015年 SCNU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Animal.h"

@interface Bird : Animal

@property (nonatomic, strong)UIColor *color;

- (void)fly;

@end
