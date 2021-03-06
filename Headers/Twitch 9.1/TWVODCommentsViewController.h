//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseViewController.h>

#import "TWVODCommentSyncManagerDelegate-Protocol.h"
#import "TWVODCommentsListViewControllerFilteringDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "_TtP6Twitch21ChatInputViewDelegate_-Protocol.h"
#import "_TtP6Twitch30TheaterAccessoryViewController_-Protocol.h"
#import "_TtP6Twitch45TheaterPlaybackUpdatesAccessoryViewController_-Protocol.h"
#import "_TtP6Twitch59TheaterOptionsTableViewControllerAccessoryOptionsDataSource_-Protocol.h"

@class NSDate, NSMutableArray, NSString, TKVODComment, TKVideo, TWVODCommentLinkMetadata, TWVODCommentSyncManager, TWVODCommentsDetailViewController, TWVODCommentsListViewController, UIView, _TtC12TwitchCoreUI14StandardButton, _TtC6Twitch13ChatInputView;
@protocol TWStandardAnalyticsDataSource, TheaterAccessoryViewControllerDelegate, _TtP6Twitch38TheaterAccessoryViewControllerDelegate_, _TtP6Twitch39TheaterAccessoryPlaybackControlDelegate_;

__attribute__((visibility("hidden")))
@interface TWVODCommentsViewController : TWBaseViewController <UITextFieldDelegate, TWVODCommentSyncManagerDelegate, _TtP6Twitch21ChatInputViewDelegate_, TWVODCommentsListViewControllerFilteringDelegate, _TtP6Twitch30TheaterAccessoryViewController_, _TtP6Twitch45TheaterPlaybackUpdatesAccessoryViewController_, _TtP6Twitch59TheaterOptionsTableViewControllerAccessoryOptionsDataSource_>
{
    _Bool _readOnlyModeOverride;
    _Bool _chatReplayFilteringDisabledOverride;
    id <_TtP6Twitch39TheaterAccessoryPlaybackControlDelegate_> _theaterAccessoryPlaybackControlDelegate;
    id <_TtP6Twitch38TheaterAccessoryViewControllerDelegate_> _theaterAccessoryViewControllerDelegate;
    _Bool _isTranslucent;
    _Bool _extensionsAvailable;
    _Bool _useVerticallyConstrainedLayout;
    _Bool _hasActiveWatchParty;
    _Bool _prefersWiderLandscapeLayout;
    _Bool _isFetchingLinkedComment;
    _Bool _isAutoScrolling;
    _Bool _shouldHideHeaderLabel;
    _Bool _shouldShowResumeAutoScrollButton;
    id <TWStandardAnalyticsDataSource> _standardAnalyticsDataSource;
    TKVideo *_video;
    TWVODCommentSyncManager *_syncManager;
    TWVODCommentsListViewController *_commentsListController;
    TWVODCommentsDetailViewController *_detailViewController;
    UIView *_commentReplyContainerView;
    _TtC6Twitch13ChatInputView *_commentReplyView;
    _TtC12TwitchCoreUI14StandardButton *_resumeAutoScrollButton;
    TWVODCommentLinkMetadata *_linkedCommentMetadata;
    TKVODComment *_linkedComment;
    NSMutableArray *_commentsPendingLinkedCommentDisplay;
    double _currentVideoTime;
    double _currentVideoScrubTimeTarget;
    double _currentDistanceToVideoScrubTimeTarget;
    NSDate *_lastCommentOrReplyPostedDate;
    long long _moderationStatus;
    long long _availabilityStatus;
    long long _currentChatReplayModeOption;
    CDStruct_1b6d18a9 _vodSyncOffset;
}

+ (_Bool)videoTypeSupportsV2VODComments:(unsigned long long)arg1;
+ (_Bool)videoTypeSupportsV1VODComments:(unsigned long long)arg1;
+ (id)localizedGenericBanningErrorMessageStringForUser:(id)arg1;
+ (id)localizedGenericDeletionErrorMessageString;
+ (id)localizedGenericPostingErrorMessageString;
+ (id)messageDeletedSuccessString;
+ (id)localizedFollowerDurationFromFollowersOnlyFailure:(id)arg1;
+ (id)localizedErrorMessageForVODCommentsFailure:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowResumeAutoScrollButton; // @synthesize shouldShowResumeAutoScrollButton=_shouldShowResumeAutoScrollButton;
@property(readonly, nonatomic) _Bool shouldHideHeaderLabel; // @synthesize shouldHideHeaderLabel=_shouldHideHeaderLabel;
@property(nonatomic) long long currentChatReplayModeOption; // @synthesize currentChatReplayModeOption=_currentChatReplayModeOption;
@property(nonatomic) long long availabilityStatus; // @synthesize availabilityStatus=_availabilityStatus;
@property(nonatomic) long long moderationStatus; // @synthesize moderationStatus=_moderationStatus;
@property(retain, nonatomic) NSDate *lastCommentOrReplyPostedDate; // @synthesize lastCommentOrReplyPostedDate=_lastCommentOrReplyPostedDate;
@property(nonatomic) double currentDistanceToVideoScrubTimeTarget; // @synthesize currentDistanceToVideoScrubTimeTarget=_currentDistanceToVideoScrubTimeTarget;
@property(nonatomic) double currentVideoScrubTimeTarget; // @synthesize currentVideoScrubTimeTarget=_currentVideoScrubTimeTarget;
@property(nonatomic) double currentVideoTime; // @synthesize currentVideoTime=_currentVideoTime;
@property(nonatomic) _Bool isAutoScrolling; // @synthesize isAutoScrolling=_isAutoScrolling;
@property(nonatomic) _Bool isFetchingLinkedComment; // @synthesize isFetchingLinkedComment=_isFetchingLinkedComment;
@property(retain, nonatomic) NSMutableArray *commentsPendingLinkedCommentDisplay; // @synthesize commentsPendingLinkedCommentDisplay=_commentsPendingLinkedCommentDisplay;
@property(retain, nonatomic) TKVODComment *linkedComment; // @synthesize linkedComment=_linkedComment;
@property(nonatomic) CDStruct_1b6d18a9 vodSyncOffset; // @synthesize vodSyncOffset=_vodSyncOffset;
@property(retain, nonatomic) TWVODCommentLinkMetadata *linkedCommentMetadata; // @synthesize linkedCommentMetadata=_linkedCommentMetadata;
@property(retain, nonatomic) _TtC12TwitchCoreUI14StandardButton *resumeAutoScrollButton; // @synthesize resumeAutoScrollButton=_resumeAutoScrollButton;
@property(retain, nonatomic) _TtC6Twitch13ChatInputView *commentReplyView; // @synthesize commentReplyView=_commentReplyView;
@property(retain, nonatomic) UIView *commentReplyContainerView; // @synthesize commentReplyContainerView=_commentReplyContainerView;
@property(retain, nonatomic) TWVODCommentsDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) TWVODCommentsListViewController *commentsListController; // @synthesize commentsListController=_commentsListController;
@property(retain, nonatomic) TWVODCommentSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(nonatomic) _Bool prefersWiderLandscapeLayout; // @synthesize prefersWiderLandscapeLayout=_prefersWiderLandscapeLayout;
@property(retain, nonatomic) TKVideo *video; // @synthesize video=_video;
@property(nonatomic) _Bool hasActiveWatchParty; // @synthesize hasActiveWatchParty=_hasActiveWatchParty;
@property(nonatomic) _Bool useVerticallyConstrainedLayout; // @synthesize useVerticallyConstrainedLayout=_useVerticallyConstrainedLayout;
@property(nonatomic) __weak id <TWStandardAnalyticsDataSource> standardAnalyticsDataSource; // @synthesize standardAnalyticsDataSource=_standardAnalyticsDataSource;
@property(readonly, nonatomic) _Bool extensionsAvailable; // @synthesize extensionsAvailable=_extensionsAvailable;
@property(nonatomic) __weak id <TheaterAccessoryViewControllerDelegate> theaterAccessoryViewControllerDelegate; // @synthesize theaterAccessoryViewControllerDelegate=_theaterAccessoryViewControllerDelegate;
@property(nonatomic) __weak id <_TtP6Twitch39TheaterAccessoryPlaybackControlDelegate_> theaterAccessoryPlaybackControlDelegate; // @synthesize theaterAccessoryPlaybackControlDelegate=_theaterAccessoryPlaybackControlDelegate;
@property(nonatomic) _Bool isTranslucent; // @synthesize isTranslucent=_isTranslucent;
- (void)populateListViewControllerWithVODDebugInfo:(id)arg1;
- (void)updateBackgroundColor;
- (void)applyTheme:(id)arg1;
@property(readonly, nonatomic) _Bool isReadOnlyMode;
- (_Bool)vodCommentsListViewController:(id)arg1 commentPassesFilteringRules:(id)arg2;
@property(readonly, nonatomic) _Bool theaterOptionsTableViewControllerShouldDisplayChatOnlyOption;
@property(readonly, nonatomic) _Bool theaterOptionsTableViewControllerShouldDisplayVODCommentChatReplayOption;
- (void)verifyUserCanModerate:(CDUnknownBlockType)arg1 unavailableBlock:(CDUnknownBlockType)arg2;
- (void)chatInputViewRequestsSubscription:(id)arg1;
- (void)chatInputView:(id)arg1 wantsToPresentChannelRewardsOnboardingForStreamerName:(id)arg2 withPointsName:(id)arg3 getStartedAction:(CDUnknownBlockType)arg4;
- (void)chatInputViewOpenedChannelRewardsPicker:(id)arg1;
- (void)chatInputView:(id)arg1 wantsToPresentChannelRewardsReportMenuFor:(id)arg2;
- (_Bool)chatInputViewShouldDismissBitsMenuForDidEndEditing:(id)arg1;
- (void)chatInputView:(id)arg1 requestedBuyBitsWithIAPBitsProductCatalog:(id)arg2;
- (void)chatInputView:(id)arg1 bitsButtonSelected:(_Bool)arg2;
- (void)chatInputViewCancelButtonPressed:(id)arg1;
- (void)chatInputView:(id)arg1 selectedBitWithName:(id)arg2 tierIndex:(long long)arg3;
- (void)chatInputViewUserDismissedBitsCheermotePalette:(id)arg1;
- (void)chatInputViewUserPresentedBitsCheermotePalette:(id)arg1;
- (void)chatInputView:(id)arg1 selectedEmote:(id)arg2 fromFrequentlyUsed:(_Bool)arg3;
- (void)chatInputViewUserPresentedEmotePalette:(id)arg1;
- (_Bool)chatInputView:(id)arg1 shouldCompleteTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)chatInputView:(id)arg1 textDidChange:(id)arg2;
- (void)chatInputViewWantsToAnimateSizeChange:(id)arg1;
- (void)chatInputViewDidChangeSelection:(id)arg1;
- (void)chatInputViewDidEndEditing:(id)arg1;
- (void)chatInputViewDidBeginEditing:(id)arg1;
- (long long)chatInputViewEndEditingCommand:(id)arg1;
- (_Bool)chatInputViewShouldBeginEditing:(id)arg1;
- (void)vodCommentSyncManagerDidReceiveFirstSuccessfulResponse;
- (void)vodCommentSyncManagerDidFailWithError:(id)arg1 willRetry:(_Bool)arg2;
- (void)vodCommentSyncManager:(id)arg1 commentsAvailable:(id)arg2 forTimestamp:(double)arg3;
- (void)accessoryParentTheaterViewControllerNotifiedVideoOnlyAvailableToSubscribers:(id)arg1;
- (void)accessoryParentTheaterViewControllerVideoDidComplete:(id)arg1;
- (void)accessoryParentTheaterViewControllerVideoDidStopPlaying:(id)arg1;
- (void)accessoryParentTheaterViewController:(id)arg1 updatedPlaybackTime:(CDStruct_1b6d18a9)arg2 isTracking:(_Bool)arg3;
- (void)accessoryParentTheaterViewControllerVideoDidFinishScrubbing:(id)arg1 toPlaybackTime:(CDStruct_1b6d18a9)arg2;
- (void)accessoryParentTheaterViewControllerVideoDidBeginPlaying:(id)arg1;
@property(readonly, nonatomic) _Bool supportsLandscapeSideLayout;
- (id)stringFromTimeIntervalByUsingBestFormatter:(double)arg1;
- (_Bool)currentUserIsCommenterOfComment:(id)arg1;
- (_Bool)currentUserIsBroadcasterOfVideo;
- (id)attributedStringByInsertingClockIconInto:(id)arg1 beforeSubstring:(id)arg2;
- (id)replyPlaceholderStringWithClockIconAttachmentForTime:(double)arg1 userName:(id)arg2;
- (id)topLevelCommentPlaceholderStringWithClockIconAttachment:(double)arg1 userName:(id)arg2;
- (void)updateChatTopLevelCommentPlaceholderStringForTime:(double)arg1;
- (void)updateChatReplyPlaceholderStringForPostingReplyToComment:(id)arg1;
- (void)showModerationSheetForComment:(id)arg1;
- (void)moderationSheetSelectedDeleteComment:(id)arg1;
- (void)moderationSheetSelectedJumpToTimestamp:(id)arg1;
- (void)moderationSheetSelectedReportUserOfComment:(id)arg1;
- (void)moderationSheetSelectedBlockUserOfComment:(id)arg1;
- (void)performDeletionOfComment:(id)arg1;
- (void)requestDeletionOfComment:(id)arg1;
- (void)performBanOfUserOfComment:(id)arg1;
- (void)moderationSheetSelectedBanPosterOfComment:(id)arg1;
- (void)reloadListControllersForChangeInFiltering;
- (void)chatReplayModeDidChange:(id)arg1;
- (void)blockedUsersListDidChange:(id)arg1;
- (_Bool)currentVideoTimeIsAtEndOfVideo;
- (void)clearAllCommentsForVideoScrubbingChange;
- (void)handleVideoWasScrubbedToTime:(id)arg1;
- (void)clearCurrentVideoScrubTimeTarget;
- (void)didReceiveVideoPlaybackUpdateForTargetScrubTime;
- (_Bool)scrubTimeTargetIsProximateToPlaybackTime:(double)arg1;
- (_Bool)videoHasBeenScrubbedToNewTime;
- (void)updateCurrentVideoScrubTimeTargetTo:(double)arg1;
- (void)commentsListControllerAutoScrollDidChange:(_Bool)arg1;
- (void)handleCommentDetailViewFailure:(id)arg1;
- (void)presentUserWithErrorMessageAlert:(id)arg1;
- (void)presentUserWithErrorMessageAlertForFailure:(id)arg1;
- (void)trackEventForPostCommentFailure:(id)arg1;
- (void)updateLastCommentOrReplyPostedDate;
- (_Bool)canPostCommentOrReplyWithinRateLimit;
- (void)attemptCommentOrReplyPostIfWithinRateLimiting:(CDUnknownBlockType)arg1;
- (void)postCommentWithMessage:(id)arg1 atTime:(double)arg2;
- (void)postReply:(id)arg1 toComment:(id)arg2;
- (void)postCommentOrReplyWithMessage:(id)arg1;
- (void)dismissChatInputViewKeyboard;
- (struct CGRect)frameForDetailViewControllerView;
- (void)presentDetailViewForComment:(id)arg1 highlightedReplyID:(id)arg2;
- (void)presentDetailViewForComment:(id)arg1;
- (void)configureNewDetailViewController;
- (_Bool)isPresentingDetailViewController;
- (void)dismissDetailViewController;
- (_Bool)isDisplayingDetailView;
- (void)presentDeepLinkedComment;
- (void)handleDeepLinkedCommentMetadataServiceFailure:(id)arg1;
- (void)handleDeepLinkedCommentMetadataServiceSuccess:(id)arg1;
- (void)prefetchDeepLinkedCommentIfNeeded;
- (id)deepLinkedCommentReplyID;
- (id)deepLinkedCommentID;
- (_Bool)deepLinkedCommentIsReply;
- (_Bool)isPresentingDeepLinkedComment;
- (void)resetDeepLinkedComment;
- (void)removeAnyPendingCommentsPriorToLinkedComment;
- (id)arrayByRemovingAnyPendingCommentsPriorToLinkedCommentFromArrayOfComments:(id)arg1;
- (void)updateDisplayedCommentsWithNewlyAvailableComments:(id)arg1;
- (void)vodCommentChatReplayModeOptionDidChange:(id)arg1;
- (void)updateForChangeInChatReplayModeOption:(long long)arg1;
- (void)jumpToTimestampForComment:(id)arg1;
- (void)listController:(id)arg1 timestampTapped:(id)arg2;
- (void)listController:(id)arg1 commentOverspillTapped:(id)arg2;
- (void)listController:(id)arg1 commentWasSelected:(id)arg2;
- (_Bool)listController:(id)arg1 shouldAllowSelectionOfComment:(id)arg2;
- (void)userTappedResumeAutoScrollButton:(id)arg1;
- (void)configureListControllerActionHandlers:(id)arg1;
- (void)configureCommentReplyView;
- (void)configureCommentsListController;
- (_Bool)prefersStatusBarHidden;
- (struct UIEdgeInsets)tw_floatingViewLayoutInsets;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)wantsNavigationBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithVideo:(id)arg1 linkedToComment:(id)arg2 linkedToOffset:(CDStruct_1b6d18a9)arg3 themeManager:(id)arg4 shouldShowResumeAutoScrollButton:(_Bool)arg5 readOnlyMode:(_Bool)arg6 chatReplayFilteringDisabled:(_Bool)arg7 shouldHideHeaderLabel:(_Bool)arg8;
- (void)trackEventVODCommentUIAction:(long long)arg1 affectingComment:(id)arg2 affectingUser:(id)arg3;
- (void)trackEventVODCommentTabActionForVisibilityChangedTo:(_Bool)arg1;
- (void)trackEventVODCommentDeleted:(id)arg1;
- (void)trackEventVODCommentPosted:(id)arg1;
- (void)populateVODCommentTrackingEventStandardFields:(id)arg1;
- (_Bool)applyStandardAnalyticDelegateEventPropertiesToDetails:(id)arg1;
- (id)theaterAccessoryStandardAnalyticDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

