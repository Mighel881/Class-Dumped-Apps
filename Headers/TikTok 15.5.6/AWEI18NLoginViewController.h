//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEI18NOnboardingContainer-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWEI18NOnboardingButton, NSArray, NSDictionary, NSString, TTTAttributedLabel, UILabel, UIScrollView, UIStackView, UIView;
@protocol AWEI18NOnboardingController;

@interface AWEI18NLoginViewController : UIViewController <UIScrollViewDelegate, AWEI18NOnboardingContainer>
{
    NSDictionary *_trackerInformation;
    id <AWEI18NOnboardingController> _controlDelegate;
    UIView *_backgroundView;
    UIScrollView *_scrollView;
    UIView *_contentViewForScroll;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIStackView *_stackView;
    AWEI18NOnboardingButton *_phoneEmailButton;
    NSArray *_thirdPartyButtons;
    UIView *_signUpView;
    UIView *_signUpViewSeperationLineView;
    TTTAttributedLabel *_signUpLabel;
}

@property(retain, nonatomic) TTTAttributedLabel *signUpLabel; // @synthesize signUpLabel=_signUpLabel;
@property(retain, nonatomic) UIView *signUpViewSeperationLineView; // @synthesize signUpViewSeperationLineView=_signUpViewSeperationLineView;
@property(retain, nonatomic) UIView *signUpView; // @synthesize signUpView=_signUpView;
@property(retain, nonatomic) NSArray *thirdPartyButtons; // @synthesize thirdPartyButtons=_thirdPartyButtons;
@property(retain, nonatomic) AWEI18NOnboardingButton *phoneEmailButton; // @synthesize phoneEmailButton=_phoneEmailButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentViewForScroll; // @synthesize contentViewForScroll=_contentViewForScroll;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <AWEI18NOnboardingController> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(copy, nonatomic) NSDictionary *trackerInformation; // @synthesize trackerInformation=_trackerInformation;
- (void).cxx_destruct;
- (id)scrollViewInside;
- (long long)platformsShowCount;
- (id)availablePlatforms;
- (void)trackBackToSignupWithMethod:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)signUpTouchAction;
- (void)thirdPartyLogin:(id)arg1;
- (void)phoneEmailButtonTouchAction:(id)arg1;
- (void)p_updateAppleSigninButton:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)p_setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
