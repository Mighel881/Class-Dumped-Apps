//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBDisplayAdAdapter.h"

#import "FBAdChooseYourOwnAdViewControllerDelegate-Protocol.h"
#import "FBAdEndCardViewControllerDelegate-Protocol.h"
#import "FBAdPlayableViewControllerDelegate-Protocol.h"
#import "FBAdVideoAdViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class FBAdChooseYourOwnAdDataModel, FBAdChooseYourOwnAdViewController, FBAdCommandProcessor, FBAdEndCardViewController, FBAdExtraHint, FBAdPlacementDefinition, FBAdPlayableViewController, FBAdVideoAdViewController, FBRewardedVideoAdDataModel, FBRewardedVideoRewardData, NSString, UINavigationController;

@interface FBANRewardedVideoAdAdapter : FBDisplayAdAdapter <FBAdChooseYourOwnAdViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, FBAdVideoAdViewControllerDelegate, FBAdEndCardViewControllerDelegate, FBAdPlayableViewControllerDelegate>
{
    _Bool _shouldProcessCommandOnSkippableOrEnd;
    NSString *_placementID;
    FBRewardedVideoRewardData *_internalRewardData;
    UINavigationController *_navigationController;
    FBAdChooseYourOwnAdViewController *_chooseYourOwnAdViewController;
    FBAdVideoAdViewController *_videoAdViewController;
    FBAdEndCardViewController *_endCardViewController;
    FBAdPlayableViewController *_playableController;
    FBAdPlacementDefinition *_placementDefinition;
    NSString *_dataModelType;
    FBRewardedVideoAdDataModel *_rewardedVideoDataModel;
    FBAdChooseYourOwnAdDataModel *_chooseYourOwnAdDataModel;
    FBAdExtraHint *_extraHint;
    FBAdCommandProcessor *_commandProcessor;
    double _firstImpressionTime;
    NSString *_requestId;
}

@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) _Bool shouldProcessCommandOnSkippableOrEnd; // @synthesize shouldProcessCommandOnSkippableOrEnd=_shouldProcessCommandOnSkippableOrEnd;
@property(nonatomic) double firstImpressionTime; // @synthesize firstImpressionTime=_firstImpressionTime;
@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(retain, nonatomic) FBAdExtraHint *extraHint; // @synthesize extraHint=_extraHint;
@property(retain, nonatomic) FBAdChooseYourOwnAdDataModel *chooseYourOwnAdDataModel; // @synthesize chooseYourOwnAdDataModel=_chooseYourOwnAdDataModel;
@property(retain, nonatomic) FBRewardedVideoAdDataModel *rewardedVideoDataModel; // @synthesize rewardedVideoDataModel=_rewardedVideoDataModel;
@property(copy, nonatomic) NSString *dataModelType; // @synthesize dataModelType=_dataModelType;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBAdPlayableViewController *playableController; // @synthesize playableController=_playableController;
@property(retain, nonatomic) FBAdEndCardViewController *endCardViewController; // @synthesize endCardViewController=_endCardViewController;
@property(retain, nonatomic) FBAdVideoAdViewController *videoAdViewController; // @synthesize videoAdViewController=_videoAdViewController;
@property(retain, nonatomic) FBAdChooseYourOwnAdViewController *chooseYourOwnAdViewController; // @synthesize chooseYourOwnAdViewController=_chooseYourOwnAdViewController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) FBRewardedVideoRewardData *internalRewardData; // @synthesize internalRewardData=_internalRewardData;
@property(readonly, copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)chooseYourOwnAdViewController:(id)arg1 offTargetTouch:(id)arg2 forModel:(id)arg3;
- (void)chooseYourOwnAdViewController:(id)arg1 wantsToFirePreviewImpressionForDataModel:(id)arg2 cardIndex:(long long)arg3;
- (void)chooseYourOwnAdViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)chooseYourOwnAdViewController:(id)arg1 didSelectAd:(id)arg2 touchData:(id)arg3;
- (void)chooseYourOwnAdViewControllerDidLoad:(id)arg1;
- (void)endCardViewControllerDidTerminate:(id)arg1;
- (void)endCardViewControllerWillClose:(id)arg1;
- (void)endCardViewControllerDidClick:(id)arg1;
- (void)playableViewControllerDidTerminate:(id)arg1;
- (void)playableViewControllerWillClose:(id)arg1;
- (void)playableViewControllerComplete:(id)arg1;
- (void)playableViewControllerDidClick:(id)arg1;
- (void)playableViewControllerWillLogImpression:(id)arg1;
- (void)playableViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)playableViewControllerDidLoad:(id)arg1;
- (void)videoAdViewControllerDidBecomeSkippable:(id)arg1;
- (void)videoAdViewControllerWantsToProcessCTA:(id)arg1 withEvent:(id)arg2 isDoneOrSkippable:(_Bool)arg3;
- (void)videoAdViewControllerWillClose:(id)arg1;
- (void)videoAdViewControllerWantsToLogImpression:(id)arg1;
- (void)videoAdViewControllerSkipped:(id)arg1;
- (void)videoAdViewControllerComplete:(id)arg1;
- (void)videoAdViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoAdViewControllerDidLoad:(id)arg1;
- (void)processCommandURLIfWeShouldAtSkipOrEnd;
- (void)processCommandURLfromDataModelExtraData:(id)arg1 openLinksFromDataModel:(_Bool)arg2;
- (id)currentEndCardController;
- (id)currentVideoController;
- (void)dismissControllerWithAdSuccess:(_Bool)arg1;
- (void)loadEndCard;
- (void)checkServerSideReward;
- (_Bool)isAdValid;
- (_Bool)isChooseYourOwnAd;
- (void)setupViewControllerForDataModel:(id)arg1;
- (void)rewardedVideoAdServerFailed;
- (void)rewardedVideoAdServerSuccess;
- (void)rewardedVideoAdVideoComplete;
- (void)rewardedVideoAdWillLogImpression;
- (void)rewardedVideoAdDidFailWithError:(id)arg1;
- (void)rewardedVideoAdDidLoad;
- (void)rewardedVideoAdWillClose;
- (void)rewardedVideoAdDidClose;
- (void)rewardedVideoAdDidClick;
- (void)logAdapterLoaded;
- (CDStruct_1b6d18a9)duration;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1;
- (_Bool)setRewardData:(id)arg1;
- (id)adDataModel;
- (void)mapCacheKeys:(id)arg1;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 placementDefinition:(id)arg5 dataModelType:(id)arg6 rewardData:(id)arg7 extraHint:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
