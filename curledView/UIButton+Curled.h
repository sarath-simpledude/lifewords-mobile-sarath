//
//  UIButton+Curled.h
//  curledViews
//
//  Created by Sarath Amirtha on 2/11/12.
//  Copyright (c) 2012 simpleDudes. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIButton (Curled)
-(void)setImage:(UIImage*)image borderWidth:(CGFloat)borderWidth shadowDepth:(CGFloat)shadowHeight controlPointXOffset:(CGFloat)controlPointXOffset controlPointYOffset:(CGFloat)controlPointYOffset forState:(UIControlState)controlState;
@end
