//
//  CurledViewBase.h
//  curledViews
//
//  Created by Sarath Amirtha on 2/11/12.
//  Copyright (c) 2012 simpleDudes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CurledViewBase : NSObject

+(UIImage*)rescaleImage:(UIImage*)image forView:(UIView*)view;
+(UIBezierPath*)curlShadowPathWithShadowDepth:(CGFloat)shadowDepth controlPointXOffset:(CGFloat)controlPointXOffset controlPointYOffset:(CGFloat)controlPointYOffset forView:(UIView*)view;
@end
