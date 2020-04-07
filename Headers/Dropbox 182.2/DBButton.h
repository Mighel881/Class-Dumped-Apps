//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface DBButton : UIButton
{
    UIImageView *_logoImageView;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

+ (id)defaultFont;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setActivityIndicatorColor:(id)arg1;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)setLogoImage:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)db_setup;

@end
