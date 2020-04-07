//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdCardToFullscreenTransitionable-Protocol.h"
#import "FBAdGoToEndcardTransitionable-Protocol.h"
#import "FBAdIntroCardTransitionable-Protocol.h"
#import "FBAdReportingCoordinatorDelegate-Protocol.h"
#import "FBAdVideoAdViewDelegate-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class FBAdDetailsAndCTAButtonContainerView, FBAdFunnelLogger, FBAdPlacementDefinition, FBAdReportingCoordinator, FBAdVideoAdView, FBAdViewabilityValidator, FBInterstitialAdToolbarView, NSString, UIImage, UIView;
@protocol FBAdVideoAdViewControllerDelegate;

@interface FBAdVideoAdViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdViewabilityValidatorDelegate, FBAdVideoAdViewDelegate, FBAdGoToEndcardTransitionable, FBAdCardToFullscreenTransitionable, FBAdIntroCardTransitionable>
{
    _Bool _isAutoRotateEnabled;
    _Bool _isLoaded;
    _Bool _hasAppearedBefore;
    _Bool _processCommandOnVideoDoneOrBecomingSkippable;
    _Bool _autoplay;
    _Bool _toldDelegateToLogImpression;
    _Bool _videoReadyToDisplay;
    _Bool _loggedShowOrFailure;
    id <FBAdVideoAdViewControllerDelegate> _delegate;
    FBAdVideoAdView *_videoAdView;
    FBAdReportingCoordinator *_reportingCoordinator;
    FBAdPlacementDefinition *_placementDefinition;
    FBAdViewabilityValidator *_viewabilityValidator;
    NSString *_token;
    FBAdFunnelLogger *_funnelLogger;
}

@property(nonatomic, getter=isLoggedShowOrFailure) _Bool loggedShowOrFailure; // @synthesize loggedShowOrFailure=_loggedShowOrFailure;
@property(nonatomic) __weak FBAdFunnelLogger *funnelLogger; // @synthesize funnelLogger=_funnelLogger;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property _Bool videoReadyToDisplay; // @synthesize videoReadyToDisplay=_videoReadyToDisplay;
@property(nonatomic) _Bool toldDelegateToLogImpression; // @synthesize toldDelegateToLogImpression=_toldDelegateToLogImpression;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool processCommandOnVideoDoneOrBecomingSkippable; // @synthesize processCommandOnVideoDoneOrBecomingSkippable=_processCommandOnVideoDoneOrBecomingSkippable;
@property(nonatomic) _Bool hasAppearedBefore; // @synthesize hasAppearedBefore=_hasAppearedBefore;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isAutoRotateEnabled; // @synthesize isAutoRotateEnabled=_isAutoRotateEnabled;
@property(nonatomic) __weak FBAdVideoAdView *videoAdView; // @synthesize videoAdView=_videoAdView;
@property(nonatomic) __weak id <FBAdVideoAdViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
@property(readonly, nonatomic) __weak FBInterstitialAdToolbarView *toolbarView;
@property(readonly, nonatomic) struct CGRect targetFrame;
@property(readonly, nonatomic) UIView *targetView;
@property(readonly, nonatomic) UIImage *targetImage;
@property(readonly, nonatomic) UIView *mainView;
@property(readonly, nonatomic) __weak FBAdDetailsAndCTAButtonContainerView *adDetailsAndCTAButtonContainerView;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)videoAdViewIsSkippable:(id)arg1;
- (void)videoAdView:(id)arg1 didTouchCTAWithEvent:(id)arg2;
- (void)videoAdView:(id)arg1 skippedWithTouchData:(id)arg2;
- (void)videoAdView:(id)arg1 didEndWithError:(id)arg2;
- (void)videoAdViewDidLoad:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)showWaitingToast;
- (_Bool)criteriasForLoggingImpressionForVideoIsMet;
- (void)tellDelegateToLogImpressionIfCriteriasAreMet;
- (void)stopViewabilityValidation;
- (void)setupViewabilityValidation;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 adDataModel:(id)arg2 placementDefinition:(id)arg3 useNewLayout:(_Bool)arg4 useNewToolbar:(_Bool)arg5 showCta:(_Bool)arg6 autoplay:(_Bool)arg7 isRewardedAd:(_Bool)arg8 forcedViewTime:(CDStruct_1b6d18a9)arg9 rootViewController:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
