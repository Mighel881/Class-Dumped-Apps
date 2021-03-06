//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGDropsProductStickerViewConsumptionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFNFVideoPlayerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListWorkingRangeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselMediaCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGZoomLoggerProtocol-Protocol.h>

@class IGFNFVideoPlayer, IGFeedItem, IGMediaPreloader, IGSessionTracker, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPHeroCarouselMediaZoomController, IGShoppingPDPHeroCarouselReelViewModel, IGUserSession, IGZoomViewPresenter, NSString;
@protocol IGShoppingPDPHeroCarouselReelSectionControllerDelegate, IGShoppingPDPHeroCarouselSectionMediaTransitioningDelegate;

@interface IGShoppingPDPHeroCarouselReelSectionController : IGListSectionController <IGDropsProductStickerViewConsumptionDelegate, IGFNFVideoPlayerDelegate, IGListWorkingRangeDelegate, IGShoppingPDPHeroCarouselMediaCellDelegate, IGZoomLoggerProtocol>
{
    IGUserSession *_userSession;
    NSString *_productItemPk;
    NSString *_merchantId;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGShoppingPDPHeroCarouselReelViewModel *_viewModel;
    IGFeedItem *_feedItem;
    IGMediaPreloader *_mediaPreloader;
    long long _animationStyle;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingPDPHeroCarouselMediaZoomController *_heroCarouselZoomController;
    IGZoomViewPresenter *_zoomViewPresenter;
    _Bool _isLightboxEnabled;
    id <IGShoppingPDPHeroCarouselReelSectionControllerDelegate> _delegate;
    id <IGShoppingPDPHeroCarouselSectionMediaTransitioningDelegate> _mediaTransitioningDelegate;
    IGFNFVideoPlayer *_videoPlayer;
}

@property(nonatomic) _Bool isLightboxEnabled; // @synthesize isLightboxEnabled=_isLightboxEnabled;
@property(retain, nonatomic) IGFNFVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselSectionMediaTransitioningDelegate> mediaTransitioningDelegate; // @synthesize mediaTransitioningDelegate=_mediaTransitioningDelegate;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselReelSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_preloadMedia;
- (void)_finishPlayingVideoIfNeeded;
- (void)_loadVideoIfNeeded;
- (id)_visibleCell;
- (void)_addProductStickerToCell:(id)arg1;
- (void)dropStickerViewDidRequestSave:(id)arg1 productItem:(id)arg2;
- (void)dropStickerViewDidReachLaunchDate:(id)arg1;
- (void)logZoomWillEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
- (void)shoppingPDPHeroCarouselMediaCell:(id)arg1 didComputeGradientColors:(id)arg2;
- (_Bool)shoppingPDPHeroCarouselMediaCellCanPerformAnimatedImageTransition:(id)arg1;
- (void)shoppingPDPHeroCarouselMediaCellAttributionWasTapped:(id)arg1;
- (void)shoppingPDPHeroCarouselMediaCellWasTapped:(id)arg1;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)addProductSticker;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 productItemPk:(id)arg2 merchantId:(id)arg3 animationStyle:(long long)arg4 logger:(id)arg5 shoppingSessionTracker:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

