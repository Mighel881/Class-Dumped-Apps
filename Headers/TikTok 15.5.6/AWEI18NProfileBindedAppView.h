//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIStackView;

@interface AWEI18NProfileBindedAppView : UIView
{
    UILabel *_bindingAppHintLabel;
    UIImageView *_bindingAppArrowImageView;
    UIStackView *_socialLinkView;
    UIImageView *_youtubeImageView;
    UIImageView *_insImageView;
    UIImageView *_twitterImageView;
    UIImageView *_appleMusicImageView;
}

@property(retain, nonatomic) UIImageView *appleMusicImageView; // @synthesize appleMusicImageView=_appleMusicImageView;
@property(retain, nonatomic) UIImageView *twitterImageView; // @synthesize twitterImageView=_twitterImageView;
@property(retain, nonatomic) UIImageView *insImageView; // @synthesize insImageView=_insImageView;
@property(retain, nonatomic) UIImageView *youtubeImageView; // @synthesize youtubeImageView=_youtubeImageView;
@property(retain, nonatomic) UIStackView *socialLinkView; // @synthesize socialLinkView=_socialLinkView;
@property(retain, nonatomic) UIImageView *bindingAppArrowImageView; // @synthesize bindingAppArrowImageView=_bindingAppArrowImageView;
@property(retain, nonatomic) UILabel *bindingAppHintLabel; // @synthesize bindingAppHintLabel=_bindingAppHintLabel;
- (void).cxx_destruct;
- (id)createStackView:(id)arg1;
- (double)socialLinkIconImageViewWidth;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setupUIWithUser:(id)arg1;
- (id)initWithUser:(id)arg1;

@end

