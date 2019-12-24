//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAnimatedButton, LOTAnimationView, UILabel;

@interface AWEFriendTabMaskGuideView : UIView
{
    UIView *_backgroundView;
    UILabel *_titleLabel;
    LOTAnimationView *_animationView;
    UILabel *_descriptionLabel;
    AWEAnimatedButton *_affirmButton;
}

@property(retain, nonatomic) AWEAnimatedButton *affirmButton; // @synthesize affirmButton=_affirmButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showOnView:(id)arg1 titleCenter:(struct CGPoint)arg2;
- (void)p_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
