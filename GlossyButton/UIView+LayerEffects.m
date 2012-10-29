//
//  UIView+LayerEffects.m
//
//  Created by Sarath Amirtha on 29/10/12.
//  Copyright (c) 2012 simpleDudes. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "UIView+LayerEffects.h"

@implementation UIView(LayerEffects)

/* simple setting using the layer */
- (void) setCornerRadius : (CGFloat) radius {
	self.layer.cornerRadius = radius;
}

- (void) setBorder : (UIColor *) color width : (CGFloat) width  {
	self.layer.borderColor = [color CGColor];
	self.layer.borderWidth = width;
}

- (void) setShadow : (UIColor *)color opacity:(CGFloat)opacity offset:(CGSize)offset blurRadius:(CGFloat)blurRadius {
	CALayer *l = self.layer;
	l.shadowColor = [color CGColor];
	l.shadowOpacity = opacity;
	l.shadowOffset = offset;
	l.shadowRadius = blurRadius;
}


@end
