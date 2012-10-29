//
//  UIView+ExtraAnimation.h
//
//  Created by Sarath Amirtha on 29/10/12.
//  Copyright (c) 2012 simpleDudes. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIView(LayerEffects)

// set round corner
- (void) setCornerRadius : (CGFloat) radius;
// set inner border
- (void) setBorder : (UIColor *) color width : (CGFloat) width;
// set the shadow
// Example: [view setShadow:[UIColor blackColor] opacity:0.5 offset:CGSizeMake(1.0, 1.0) blueRadius:3.0];
- (void) setShadow : (UIColor *)color opacity:(CGFloat)opacity offset:(CGSize) offset blurRadius:(CGFloat)blurRadius;

@end
