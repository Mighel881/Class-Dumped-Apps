//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/_TtC22TelegramBaseController22TelegramBaseController.h>

#import <TelegramUI/UIDropInteractionDelegate-Protocol.h>

@class NSArray;

@interface _TtC10TelegramUI18ChatControllerImpl : _TtC22TelegramBaseController22TelegramBaseController <UIDropInteractionDelegate>
{
    // Error parsing type: , name: validLayout
    // Error parsing type: , name: parentController
    // Error parsing type: , name: peekActions
    // Error parsing type: , name: didSetup3dTouch
    // Error parsing type: , name: context
    // Error parsing type: , name: chatLocation
    // Error parsing type: , name: subject
    // Error parsing type: , name: botStart
    // Error parsing type: , name: peerDisposable
    // Error parsing type: , name: navigationActionDisposable
    // Error parsing type: , name: networkStateDisposable
    // Error parsing type: , name: messageIndexDisposable
    // Error parsing type: , name: _chatLocationInfoReady
    // Error parsing type: , name: didSetChatLocationInfoReady
    // Error parsing type: , name: chatLocationInfoData
    // Error parsing type: , name: presentationInterfaceState
    // Error parsing type: , name: chatTitleView
    // Error parsing type: , name: leftNavigationButton
    // Error parsing type: , name: rightNavigationButton
    // Error parsing type: , name: chatInfoNavigationButton
    // Error parsing type: , name: peerView
    // Error parsing type: , name: historyStateDisposable
    // Error parsing type: , name: galleryHiddenMesageAndMediaDisposable
    // Error parsing type: , name: temporaryHiddenGalleryMediaDisposable
    // Error parsing type: , name: controllerInteraction
    // Error parsing type: , name: interfaceInteraction
    // Error parsing type: , name: messageContextDisposable
    // Error parsing type: , name: controllerNavigationDisposable
    // Error parsing type: , name: sentMessageEventsDisposable
    // Error parsing type: , name: failedMessageEventsDisposable
    // Error parsing type: , name: currentFailedMessagesAlertController
    // Error parsing type: , name: messageActionCallbackDisposable
    // Error parsing type: , name: messageActionUrlAuthDisposable
    // Error parsing type: , name: editMessageDisposable
    // Error parsing type: , name: editMessageErrorsDisposable
    // Error parsing type: , name: enqueueMediaMessageDisposable
    // Error parsing type: , name: resolvePeerByNameDisposable
    // Error parsing type: , name: shareStatusDisposable
    // Error parsing type: , name: clearCacheDisposable
    // Error parsing type: , name: bankCardDisposable
    // Error parsing type: , name: editingMessage
    // Error parsing type: , name: startingBot
    // Error parsing type: , name: unblockingPeer
    // Error parsing type: , name: searching
    // Error parsing type: , name: searchResult
    // Error parsing type: , name: loadingMessage
    // Error parsing type: , name: preloadHistoryPeerId
    // Error parsing type: , name: preloadHistoryPeerIdDisposable
    // Error parsing type: , name: botCallbackAlertMessage
    // Error parsing type: , name: botCallbackAlertMessageDisposable
    // Error parsing type: , name: selectMessagePollOptionDisposables
    // Error parsing type: , name: selectPollOptionFeedback
    // Error parsing type: , name: resolveUrlDisposable
    // Error parsing type: , name: contextQueryStates
    // Error parsing type: , name: searchQuerySuggestionState
    // Error parsing type: , name: urlPreviewQueryState
    // Error parsing type: , name: editingUrlPreviewQueryState
    // Error parsing type: , name: searchState
    // Error parsing type: , name: recordingModeFeedback
    // Error parsing type: , name: recorderFeedback
    // Error parsing type: , name: audioRecorderValue
    // Error parsing type: , name: audioRecorder
    // Error parsing type: , name: audioRecorderDisposable
    // Error parsing type: , name: audioRecorderStatusDisposable
    // Error parsing type: , name: videoRecorderValue
    // Error parsing type: , name: tempVideoRecorderValue
    // Error parsing type: , name: videoRecorder
    // Error parsing type: , name: videoRecorderDisposable
    // Error parsing type: , name: buttonKeyboardMessageDisposable
    // Error parsing type: , name: cachedDataDisposable
    // Error parsing type: , name: chatUnreadCountDisposable
    // Error parsing type: , name: chatUnreadMentionCountDisposable
    // Error parsing type: , name: peerInputActivitiesDisposable
    // Error parsing type: , name: recentlyUsedInlineBotsValue
    // Error parsing type: , name: recentlyUsedInlineBotsDisposable
    // Error parsing type: , name: unpinMessageDisposable
    // Error parsing type: , name: typingActivityPromise
    // Error parsing type: , name: inputActivityDisposable
    // Error parsing type: , name: recordingActivityValue
    // Error parsing type: , name: recordingActivityPromise
    // Error parsing type: , name: recordingActivityDisposable
    // Error parsing type: , name: acquiredRecordingActivityDisposable
    // Error parsing type: , name: searchDisposable
    // Error parsing type: , name: historyNavigationStack
    // Error parsing type: , name: canReadHistory
    // Error parsing type: , name: reminderActivity
    // Error parsing type: , name: isReminderActivityEnabled
    // Error parsing type: , name: canReadHistoryValue
    // Error parsing type: , name: canReadHistoryDisposable
    // Error parsing type: , name: presentationData
    // Error parsing type: , name: presentationDataDisposable
    // Error parsing type: , name: automaticMediaDownloadSettings
    // Error parsing type: , name: automaticMediaDownloadSettingsDisposable
    // Error parsing type: , name: stickerSettings
    // Error parsing type: , name: stickerSettingsDisposable
    // Error parsing type: , name: applicationInForegroundDisposable
    // Error parsing type: , name: checkedPeerChatServiceActions
    // Error parsing type: , name: raiseToListen
    // Error parsing type: , name: voicePlaylistDidEndTimestamp
    // Error parsing type: , name: sendingOptionsTooltipController
    // Error parsing type: , name: searchResultsTooltipController
    // Error parsing type: , name: messageTooltipController
    // Error parsing type: , name: videoUnmuteTooltipController
    // Error parsing type: , name: silentPostTooltipController
    // Error parsing type: , name: mediaRecordingModeTooltipController
    // Error parsing type: , name: mediaRestrictedTooltipController
    // Error parsing type: , name: mediaRestrictedTooltipControllerMode
    // Error parsing type: , name: slowmodeTooltipController
    // Error parsing type: , name: currentContextController
    // Error parsing type: , name: sendMessageActionsController
    // Error parsing type: , name: searchResultsController
    // Error parsing type: , name: screenCaptureManager
    // Error parsing type: , name: chatAdditionalDataDisposable
    // Error parsing type: , name: reportIrrelvantGeoNoticePromise
    // Error parsing type: , name: reportIrrelvantGeoNotice
    // Error parsing type: , name: reportIrrelvantGeoDisposable
    // Error parsing type: , name: hasScheduledMessages
    // Error parsing type: , name: volumeButtonsListener
    // Error parsing type: , name: beginMediaRecordingRequestId
    // Error parsing type: , name: lockMediaRecordingRequestId
    // Error parsing type: , name: updateSlowmodeStatusDisposable
    // Error parsing type: , name: updateSlowmodeStatusTimerValue
    // Error parsing type: , name: isDismissed
    // Error parsing type: , name: focusOnSearchAfterAppearance
    // Error parsing type: , name: keepPeerInfoScreenDataHotDisposable
    // Error parsing type: , name: purposefulAction
    // Error parsing type: , name: raiseToListenActivateRecordingTimer
}

- (void).cxx_destruct;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
@property(nonatomic, readonly) NSArray *previewActionItems;
- (void)rightNavigationButtonAction;
- (void)leftNavigationButtonAction;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
