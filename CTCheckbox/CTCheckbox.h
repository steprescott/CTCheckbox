//
//  CTCheckbox.h
//  CTCheckbox
//
//  Created by 和泉田 領一 on 2013/03/06.
//  Copyright (c) 2013年 CAPH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CTCheckbox : UIControl

@property (nonatomic, assign) BOOL checked;
@property (nonatomic, strong) UIColor *checkboxColor;
@property (nonatomic, assign) CGFloat checkboxSideLength;
@property (nonatomic, strong) UILabel *textLabel;
@property (nonatomic, assign) CGFloat checkboxBorderWidth;
@property (nonatomic, assign) CGFloat checkboxCornerRadius;

- (void)setColor:(UIColor *)color forControlState:(UIControlState)state;

- (void)setBackgroundColor:(UIColor *)backgroundColor forControlState:(UIControlState)state;

@end
