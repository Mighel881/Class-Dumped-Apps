//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UITextView, UIWindow;

@interface AWEIMXBannerAlertView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _dismissWhenTappedInBlankArea;
    NSArray *_actions;
    NSString *_title;
    NSString *_message;
    UIView *_animationView;
    UIImage *_headerImage;
    UIWindow *_windowToShowAlert;
    UIView *_backgroundView;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UITextView *_descriptionTextView;
    UITapGestureRecognizer *_tapToDismissGes;
    NSArray *_buttons;
    NSArray *_buttonTitles;
}

@property(copy, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UITapGestureRecognizer *tapToDismissGes; // @synthesize tapToDismissGes=_tapToDismissGes;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool dismissWhenTappedInBlankArea; // @synthesize dismissWhenTappedInBlankArea=_dismissWhenTappedInBlankArea;
@property(nonatomic) __weak UIWindow *windowToShowAlert; // @synthesize windowToShowAlert=_windowToShowAlert;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)p_findCancelActionAndExecute;
- (void)p_dismissSelfDefineAlertWithAnimation;
- (void)p_dismissSelfDefineAlert;
- (void)dismiss:(_Bool)arg1;
- (void)p_showSelfDefineAlertWithAnimation;
- (void)didTapAlertView:(id)arg1;
- (void)p_loadSubviews;
- (void)show;
- (void)addAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
