//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1OnboardingWaitable-Protocol.h>

@class NSString, T1OnboardingFlexibleSpaceItemRefreshAssistant, TFNFormField;
@protocol T1OnboardingFooterViewModel, T1OnboardingHeaderViewModel;

@interface T1OnboardingFormViewController : TFNFormViewController <T1OnboardingWaitable>
{
    _Bool _allowWaitSpinner;
    T1OnboardingFlexibleSpaceItemRefreshAssistant *_refreshAssistant;
    TFNFormField *_savedFocusedFormField;
    id <T1OnboardingHeaderViewModel> _headerViewModel;
    id <T1OnboardingFooterViewModel> _footerViewModel;
}

@property(readonly, nonatomic) id <T1OnboardingFooterViewModel> footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(readonly, nonatomic) id <T1OnboardingHeaderViewModel> headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void).cxx_destruct;
- (void)private_skipTapped:(id)arg1;
- (void)private_nextTapped:(id)arg1;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (_Bool)tfn_logoTitleViewShown;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)setSections:(id)arg1;
- (id)submitButton;
- (_Bool)includesSubmitButtonAsItem;
- (id)doneBarButtonItem;
- (_Bool)addsDoneBarButtonButtonItemToNavigationBar;
- (struct CGRect)additionalGutterFrame;
- (id)updatedSections:(id)arg1;
- (void)submitForm;
- (void)abandonForm;
- (id)initWithForm:(id)arg1 appearance:(id)arg2 headerViewModel:(id)arg3 footerViewModel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
