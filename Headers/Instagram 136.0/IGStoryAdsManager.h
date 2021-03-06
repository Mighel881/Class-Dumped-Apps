//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryFullscreenPoliticalAdFooterViewDelegate-Protocol.h>

@class IGStoryFullscreenSectionLoggingContext, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUserSession, NSString, UIViewController, UIVisualEffectView;
@protocol IGStoryItemType><IGUnitItemInformationProviding;

@interface IGStoryAdsManager : NSObject <IGStoryFullscreenPoliticalAdFooterViewDelegate>
{
    IGStoryViewerViewModel *_viewModel;
    id <IGStoryItemType><IGUnitItemInformationProviding> _storyItem;
    unsigned long long _currentItemIndex;
    IGStoryFullscreenSectionLoggingContext *_sectionLoggingContext;
    UIVisualEffectView *_blurEffectView;
    UIViewController *_viewController;
    IGUserSession *_userSession;
    IGStoryViewerLoggingContext *_storyViewerLoggingContext;
    unsigned long long _expandStatus;
    unsigned long long _currentStoryAdsOptInState;
    long long _currentAdVideoSegmentIndex;
}

@property(nonatomic) long long currentAdVideoSegmentIndex; // @synthesize currentAdVideoSegmentIndex=_currentAdVideoSegmentIndex;
@property(nonatomic) unsigned long long currentStoryAdsOptInState; // @synthesize currentStoryAdsOptInState=_currentStoryAdsOptInState;
- (void).cxx_destruct;
- (id)_currentVisibleSponsoredStoryId;
- (unsigned long long)getToTypeForStoryAdsOptInTextViewWithFromType:(unsigned long long)arg1;
- (_Bool)isExpandableAd;
- (_Bool)isUnexpandedLongVideoAd;
- (_Bool)isExpandedLongVideoAd;
- (_Bool)isStoryAdLongerVideo;
- (_Bool)isUnexpandedCarouselOptInAd;
- (_Bool)isOptInAdExpanded;
- (void)setOptInAdExpanded;
- (_Bool)shouldShowOptInButtonWithCurrentStoryItem;
- (void)storyFullscreenPoliticalAdFooterViewDidTap:(id)arg1;
- (void)didHideSponsoredPostWithReason:(id)arg1 extra:(id)arg2;
- (void)hideSponsoredPostWithEventName:(id)arg1;
- (_Bool)isCanvasAd;
- (id)sponsoredAdTitleForUser:(id)arg1 shouldForceDisplayFBPageName:(_Bool)arg2;
- (void)updateCurrentAdIdForRageShakeLogs;
- (void)configureWithStoryItem:(id)arg1 currentItemIndex:(unsigned long long)arg2 viewModel:(id)arg3;
- (id)initWithUserSession:(id)arg1 storyViewerLoggingContext:(id)arg2 storyFullscreenSectionLoggingContext:(id)arg3 viewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

