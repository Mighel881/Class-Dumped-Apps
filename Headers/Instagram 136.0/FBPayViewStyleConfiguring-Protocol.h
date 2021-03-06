//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSArray, NSString, UIActivityIndicatorView, UIColor, UIFont;

@protocol FBPayViewStyleConfiguring <NSObject>
- (void)showAlertViewWithTitle:(NSString *)arg1 description:(NSString *)arg2 actions:(NSArray *)arg3;
- (UIActivityIndicatorView *)loadingIndicatorView;
- (UIFont *)boldFontWithSize:(double)arg1;
- (UIFont *)mediumFontWithSize:(double)arg1;
- (UIFont *)regularFontWithSize:(double)arg1;
- (UIColor *)footerButtonTextColor;
- (UIColor *)footerButtonSeparatorColor;
- (UIColor *)footerButtonBackgroundColor;
- (UIColor *)primaryButtonColor;
- (UIColor *)errorColor;
- (UIColor *)disabledTextColor;
- (UIColor *)highlightTextColor;
- (UIColor *)secondaryTextColor;
- (UIColor *)primaryTextColor;
- (UIColor *)backgroundColor;
- (long long)identifier;
@end

