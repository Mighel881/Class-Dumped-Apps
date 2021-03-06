//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectRecipientListViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectShareSheetContainerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectShareSheetControlling-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectShareSheetToastHelperDelegate-Protocol.h>

@class IGDirectShareSheetContainerViewController, IGDirectShareSheetToastHelper, IGDirectThreadService, IGFeedItem, IGPartialModalSheetViewController, IGPostItem, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUserSession, IGViewController, NSOrderedSet, NSString, UIViewController;
@protocol IGDirectShareSheetControllerDelegate, IGDirectShareSheetWarningMessageDataSource, IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate, IGStoryItemType><IGUnitItemInformationProviding;

@interface IGDirectShareSheetController : NSObject <IGDirectRecipientListViewControllerDelegate, IGDirectShareSheetContainerDelegate, IGDirectShareSheetToastHelperDelegate, IGAnalyticsModule, IGDirectShareSheetControlling>
{
    IGUserSession *_userSession;
    IGDirectThreadService *_threadService;
    NSOrderedSet *_selectedRecipients;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGDirectShareSheetContainerViewController *_containerViewController;
    IGDirectShareSheetToastHelper *_toastHelper;
    _Bool _hasShared;
    UIViewController *_hostingViewController;
    IGViewController *_sourceViewController;
    NSString *_shareSheetSessionId;
    IGPostItem *_selectedPost;
    id <IGStoryItemType><IGUnitItemInformationProviding> _currentStoryItem;
    IGStoryViewerLoggingContext *_storyViewerLoggingContext;
    IGStoryViewerViewModel *_storyViewerViewModel;
    IGFeedItem *_feedItem;
    id <IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate> _loggingProvider;
    id <IGDirectShareSheetControllerDelegate> _delegate;
    id <IGDirectShareSheetWarningMessageDataSource> _warningMessageDataSource;
}

@property(nonatomic) __weak id <IGDirectShareSheetWarningMessageDataSource> warningMessageDataSource; // @synthesize warningMessageDataSource=_warningMessageDataSource;
@property(nonatomic) __weak id <IGDirectShareSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setupToastHelperIfNecessary;
- (void)_setFullscreen:(_Bool)arg1;
- (void)_dismissShareSheetAnimated:(_Bool)arg1 animationDuration:(double)arg2 logCancellation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissShareSheetAnimated:(_Bool)arg1 logCancellation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)toastHelperDidDismissConfirmationToast:(id)arg1;
- (void)shareSheetContainerDidPresentKeyboard:(id)arg1;
- (_Bool)isFullscreen;
- (void)shareSheetContainerDidDismiss:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 wantsToToggleFullScreen:(_Bool)arg2;
- (id)selectedRecipientsSoFarFromOneTapping:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToGroupStoriesRecipient:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToGroupStories:(id)arg2;
- (void)selectRecipientViewControllerDidTapSendToFeed:(id)arg1;
- (void)selectRecipientViewControllerDidTapAddToHighlight:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToBlastList:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToDirectRecipient:(id)arg2 messageText:(id)arg3;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToExternalService:(long long)arg2 willShareToFbWithYourStoryButton:(_Bool)arg3;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToStoryTarget:(long long)arg2 willShareToFbWithYourStoryButton:(_Bool)arg3 blacklistedUserIDs:(id)arg4;
- (void)selectRecipientViewControllerDidPresentFullscreen:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)selectRecipientViewController:(id)arg1 didUpdateSelectedRecipients:(id)arg2;
- (void)selectRecipientViewControllerDidTapBackButton:(id)arg1;
- (void)selectRecipientViewControllerDidDismissRecipientList:(id)arg1 recipientsFromSearch:(id)arg2 bumpedRecipients:(id)arg3;
- (void)selectRecipientViewControllerDidTapFinishButton:(id)arg1 storySendTarget:(long long)arg2 sender:(id)arg3 directRecipients:(id)arg4 externalServices:(id)arg5 text:(id)arg6 fromOneTap:(_Bool)arg7 storyViewerViewModel:(id)arg8 storyViewerLoggingContext:(id)arg9 currentStoryItem:(id)arg10 loggingProvider:(id)arg11 feedItem:(id)arg12 selectedPost:(id)arg13;
- (id)analyticsModule;
- (void)_shareSheetDidDismissWithLoggedCancellation:(_Bool)arg1;
- (void)_dismissShareSheetFromCancellation;
- (void)updateToastContainerView:(id)arg1 bottomInset:(double)arg2;
- (void)dismissShareSheetWithAnimationDuration:(double)arg1 logCancellation:(_Bool)arg2;
- (void)dismissShareSheetAnimated:(_Bool)arg1 logCancellation:(_Bool)arg2;
- (_Bool)isDirectShareSheetOnScreen;
- (void)presentShareSheetWithOverlayView:(_Bool)arg1 directRecipientConfiguration:(id)arg2 feedItem:(id)arg3 selectedPost:(id)arg4 reshareToStoryValue:(id)arg5 storyViewModel:(id)arg6 prioritizedShareRecipient:(id)arg7 excludedRecipients:(id)arg8 storyViewerLoggingContext:(id)arg9 currentStoryItem:(id)arg10 commentModel:(id)arg11 hostingViewController:(id)arg12 loggingProvider:(id)arg13;
- (id)initWithUserSession:(id)arg1 sourceViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

