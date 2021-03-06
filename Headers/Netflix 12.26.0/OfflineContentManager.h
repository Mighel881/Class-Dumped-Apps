//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/AVAssetDownloadDelegate-Protocol.h>
#import <Nbp/NfOfflineContentManagerInternal-Protocol.h>
#import <Nbp/PlatformLoggerEventCompletionDelegate-Protocol.h>

@class AVAssetDownloadURLSession, NSConditionLock, NSDate, NSMutableArray, NSMutableDictionary, NSOperation, NSOperationQueue, NSString, NSURLSession, NetflixReachability, NflxTimer, OfflineMetadataManager, SecureInvalidationQueue;
@protocol NfOfflineContentManagerDelegate, NfOfflineDownloader;

@interface OfflineContentManager : NSObject <AVAssetDownloadDelegate, PlatformLoggerEventCompletionDelegate, NfOfflineContentManagerInternal>
{
    _Bool _downloadOverWifiOnly;
    _Bool _waitForBGToResume;
    _Bool _queueStarted;
    _Bool _wasStartedForBackgroundEvents;
    _Bool _autoLicenseRefreshDisabled;
    _Bool _avAssetDownloadingDisabled;
    _Bool _urlSessionInvalidated;
    _Bool _backgroundTasksInitialized;
    _Bool _lastExpectedDownloadWorking;
    _Bool _establishingNewSession;
    _Bool _isDoingNewWifiChangeLogic;
    _Bool _neverDownloadedBefore;
    float _nextTaskPriority;
    id <NfOfflineContentManagerDelegate> _delegate;
    AVAssetDownloadURLSession *_avAssetdownloadUrlSession;
    AVAssetDownloadURLSession *_smartDownloadSession;
    NSURLSession *_urlSession;
    unsigned long long _parallelizedBGIdentifier;
    double _lastTimeSomethingInterestingHappened;
    long long _maxTaskRetries;
    CDUnknownBlockType _downloadFinished;
    CDUnknownBlockType _resumeHandler;
    NSMutableDictionary *_offlineEpisodes;
    OfflineMetadataManager *_metadataManager;
    NSOperation *_pendingTasksInitializeOperation;
    long long _maxConcurrentDownloadCount;
    unsigned long long _bgTask;
    NSConditionLock *_waitForNextTask;
    NSMutableArray *_downloadQueue;
    id <NfOfflineDownloader> _currentDownloader;
    id <NfOfflineDownloader> _cancellingDownloader;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_downloadersById;
    NetflixReachability *_reachability;
    double _minimumSafeBackgroundTime;
    long long _freeSpaceMargin;
    long long _totalExpectedDownloadDiskConsumption;
    NSDate *_lastWindowRefresh;
    long long _maxInflightDownloads;
    long long _currentInflightDownloads;
    NSMutableDictionary *_recoverableDownloaders;
    NSURLSession *_networkSession;
    double _downloaderStuckTime;
    double _downloaderCheckTime;
    NflxTimer *_downloaderStuckTimer;
    NSOperation *_stuckCheckOperation;
    long long _downloaderErrorCount;
    long long _urlSessionErrorThreshold;
    NSString *_currentSessionName;
    double _foregroundMinimumTime;
    double _lastDownloaderInitiatedTime;
    double _lastEnteredForegroundTime;
    double _lastEnteredBackgroundTime;
    NSDate *_lastEnqueueTime;
    NSDate *_lastReachabilityTypeErrorTime;
    NSDate *_lastDownloadReadyTime;
    NSDate *_lastSyncLicenseStartTime;
    NSDate *_lastQueueStopTime;
    SecureInvalidationQueue *_secureInvalidationQueue;
}

+ (_Bool)alwaysUseSecureInvalidationQueue;
+ (_Bool)shouldUseSecureInvalidation;
+ (_Bool)_canUseSecureInvalidation;
+ (_Bool)hasDownloads;
@property _Bool neverDownloadedBefore; // @synthesize neverDownloadedBefore=_neverDownloadedBefore;
@property(retain) SecureInvalidationQueue *secureInvalidationQueue; // @synthesize secureInvalidationQueue=_secureInvalidationQueue;
@property(retain) NSDate *lastQueueStopTime; // @synthesize lastQueueStopTime=_lastQueueStopTime;
@property(retain) NSDate *lastSyncLicenseStartTime; // @synthesize lastSyncLicenseStartTime=_lastSyncLicenseStartTime;
@property(retain) NSDate *lastDownloadReadyTime; // @synthesize lastDownloadReadyTime=_lastDownloadReadyTime;
@property(retain) NSDate *lastReachabilityTypeErrorTime; // @synthesize lastReachabilityTypeErrorTime=_lastReachabilityTypeErrorTime;
@property(retain) NSDate *lastEnqueueTime; // @synthesize lastEnqueueTime=_lastEnqueueTime;
@property(nonatomic) _Bool isDoingNewWifiChangeLogic; // @synthesize isDoingNewWifiChangeLogic=_isDoingNewWifiChangeLogic;
@property(nonatomic) double lastEnteredBackgroundTime; // @synthesize lastEnteredBackgroundTime=_lastEnteredBackgroundTime;
@property(nonatomic) double lastEnteredForegroundTime; // @synthesize lastEnteredForegroundTime=_lastEnteredForegroundTime;
@property(nonatomic) double lastDownloaderInitiatedTime; // @synthesize lastDownloaderInitiatedTime=_lastDownloaderInitiatedTime;
@property(nonatomic) double foregroundMinimumTime; // @synthesize foregroundMinimumTime=_foregroundMinimumTime;
@property(nonatomic) _Bool establishingNewSession; // @synthesize establishingNewSession=_establishingNewSession;
@property(retain, nonatomic) NSString *currentSessionName; // @synthesize currentSessionName=_currentSessionName;
@property(nonatomic) long long urlSessionErrorThreshold; // @synthesize urlSessionErrorThreshold=_urlSessionErrorThreshold;
@property(nonatomic) long long downloaderErrorCount; // @synthesize downloaderErrorCount=_downloaderErrorCount;
@property(retain) NSOperation *stuckCheckOperation; // @synthesize stuckCheckOperation=_stuckCheckOperation;
@property(retain, nonatomic) NflxTimer *downloaderStuckTimer; // @synthesize downloaderStuckTimer=_downloaderStuckTimer;
@property(nonatomic) double downloaderCheckTime; // @synthesize downloaderCheckTime=_downloaderCheckTime;
@property(nonatomic) double downloaderStuckTime; // @synthesize downloaderStuckTime=_downloaderStuckTime;
@property(retain, nonatomic) NSURLSession *networkSession; // @synthesize networkSession=_networkSession;
@property(retain, nonatomic) NSMutableDictionary *recoverableDownloaders; // @synthesize recoverableDownloaders=_recoverableDownloaders;
@property(nonatomic) long long currentInflightDownloads; // @synthesize currentInflightDownloads=_currentInflightDownloads;
@property(nonatomic) long long maxInflightDownloads; // @synthesize maxInflightDownloads=_maxInflightDownloads;
@property(retain, nonatomic) NSDate *lastWindowRefresh; // @synthesize lastWindowRefresh=_lastWindowRefresh;
@property(nonatomic) long long totalExpectedDownloadDiskConsumption; // @synthesize totalExpectedDownloadDiskConsumption=_totalExpectedDownloadDiskConsumption;
@property(nonatomic) long long freeSpaceMargin; // @synthesize freeSpaceMargin=_freeSpaceMargin;
@property(nonatomic) double minimumSafeBackgroundTime; // @synthesize minimumSafeBackgroundTime=_minimumSafeBackgroundTime;
@property(nonatomic) _Bool lastExpectedDownloadWorking; // @synthesize lastExpectedDownloadWorking=_lastExpectedDownloadWorking;
@property(retain, nonatomic) NetflixReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSMutableDictionary *downloadersById; // @synthesize downloadersById=_downloadersById;
@property(nonatomic) float nextTaskPriority; // @synthesize nextTaskPriority=_nextTaskPriority;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property __weak id <NfOfflineDownloader> cancellingDownloader; // @synthesize cancellingDownloader=_cancellingDownloader;
@property(retain, nonatomic) id <NfOfflineDownloader> currentDownloader; // @synthesize currentDownloader=_currentDownloader;
@property(retain, nonatomic) NSMutableArray *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSConditionLock *waitForNextTask; // @synthesize waitForNextTask=_waitForNextTask;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(nonatomic) long long maxConcurrentDownloadCount; // @synthesize maxConcurrentDownloadCount=_maxConcurrentDownloadCount;
@property(retain, nonatomic) NSOperation *pendingTasksInitializeOperation; // @synthesize pendingTasksInitializeOperation=_pendingTasksInitializeOperation;
@property(nonatomic) _Bool backgroundTasksInitialized; // @synthesize backgroundTasksInitialized=_backgroundTasksInitialized;
@property(retain, nonatomic) OfflineMetadataManager *metadataManager; // @synthesize metadataManager=_metadataManager;
@property(retain, nonatomic) NSMutableDictionary *offlineEpisodes; // @synthesize offlineEpisodes=_offlineEpisodes;
@property(nonatomic) _Bool urlSessionInvalidated; // @synthesize urlSessionInvalidated=_urlSessionInvalidated;
@property(copy, nonatomic) CDUnknownBlockType resumeHandler; // @synthesize resumeHandler=_resumeHandler;
@property(copy, nonatomic) CDUnknownBlockType downloadFinished; // @synthesize downloadFinished=_downloadFinished;
@property(nonatomic) _Bool avAssetDownloadingDisabled; // @synthesize avAssetDownloadingDisabled=_avAssetDownloadingDisabled;
@property _Bool autoLicenseRefreshDisabled; // @synthesize autoLicenseRefreshDisabled=_autoLicenseRefreshDisabled;
@property(nonatomic) long long maxTaskRetries; // @synthesize maxTaskRetries=_maxTaskRetries;
@property double lastTimeSomethingInterestingHappened; // @synthesize lastTimeSomethingInterestingHappened=_lastTimeSomethingInterestingHappened;
@property(nonatomic) unsigned long long parallelizedBGIdentifier; // @synthesize parallelizedBGIdentifier=_parallelizedBGIdentifier;
@property(nonatomic) _Bool wasStartedForBackgroundEvents; // @synthesize wasStartedForBackgroundEvents=_wasStartedForBackgroundEvents;
@property(nonatomic) _Bool queueStarted; // @synthesize queueStarted=_queueStarted;
@property(nonatomic) _Bool waitForBGToResume; // @synthesize waitForBGToResume=_waitForBGToResume;
@property(nonatomic) _Bool downloadOverWifiOnly; // @synthesize downloadOverWifiOnly=_downloadOverWifiOnly;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) AVAssetDownloadURLSession *smartDownloadSession; // @synthesize smartDownloadSession=_smartDownloadSession;
@property(retain, nonatomic) AVAssetDownloadURLSession *avAssetdownloadUrlSession; // @synthesize avAssetdownloadUrlSession=_avAssetdownloadUrlSession;
@property(nonatomic) __weak id <NfOfflineContentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resumeDownload:(id)arg1;
- (void)suspendDownload:(id)arg1;
- (void)resumeAllDownloads;
- (void)suspendAllDownloads;
- (void)platformLogger:(id)arg1 didFailSendingEvent:(id)arg2 error:(id)arg3;
- (void)platformLogger:(id)arg1 didFinishSendingEvent:(id)arg2 responsePayload:(id)arg3;
- (void)notifyDelegate:(id)arg1 resumed:(id)arg2;
- (void)notifyDelegate:(id)arg1 suspended:(id)arg2;
- (void)notifyDelegate:(id)arg1 updatedLicense:(id)arg2;
- (void)notifyDelegate:(id)arg1 updatedProgress:(double)arg2;
- (void)notifyDelegate:(id)arg1 ended:(id)arg2;
- (void)notifyDelegate:(id)arg1 stateChanged:(id)arg2;
- (void)notifyDelegate:(id)arg1 opened:(id)arg2;
- (id)webVTTPlist;
- (void)updateWebVTTPlist:(id)arg1;
- (id)deactivateLinksV2;
- (id)deactivateLinks;
- (void)refreshWindowsAndCycle:(int)arg1;
- (void)refreshPlayWindows;
@property(retain, nonatomic) NSDate *lastReachability;
- (void)deleteDebugState;
- (void)updateDebugState:(id)arg1;
- (_Bool)shouldSaveBumblebeeLogs;
- (id)debugState;
- (_Bool)isTerminalError:(id)arg1;
- (float)calculateTaskPriority;
- (void)updateDebugStateForId:(id)arg1 append:(id)arg2;
- (id)taggedString:(id)arg1;
- (id)debugStateForId:(id)arg1;
- (_Bool)expectedDownloadSizeWillIncreaseBy:(long long)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)downloaderExperiencedError:(id)arg1 error:(id)arg2;
- (void)considerRetryingRecoverableDownloads;
- (_Bool)downloaderReadyForNext:(id)arg1 error:(id)arg2;
- (_Bool)requeueDownloader:(id)arg1 fromError:(id)arg2;
- (_Bool)looksLikeARecoverableError:(id)arg1;
- (_Bool)looksLikeAReachabilityError:(id)arg1;
- (void)stopQueue;
- (void)setQueueRunning:(_Bool)arg1;
- (void)startQueue;
- (_Bool)isQueueRunning;
- (void)downloadWillQueueHint:(id)arg1 downloadQuality:(id)arg2 trackingInfo:(id)arg3 attemptNumber:(long long)arg4 callback:(CDUnknownBlockType)arg5;
- (id)trackingInfoFromBackingInfoForIdentifier:(id)arg1 attemptNumberOut:(long long *)arg2;
- (void)ensureBackingInfoIsOnDisk:(id)arg1 quality:(id)arg2 trackingInfo:(id)arg3 attemptNumber:(long long)arg4;
- (void)attemptDequeueAndInitiateForNextDownload;
- (void)refreshLicenseForId:(id)arg1;
- (void)initiateDownloadForId:(id)arg1 quality:(id)arg2 trackingInfo:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)replaceOxidInTrackingInfo:(id)arg1;
- (void)initiateDownload:(id)arg1 quality:(id)arg2 trackingInfo:(id)arg3;
- (void)endBackgroundTask;
- (void)startBackgroundTask;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)handleInvalidatedSession:(id)arg1;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didResolveMediaSelection:(id)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_5c5366e1)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_5c5366e1)arg5;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_5c5366e1)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_5c5366e1)arg5 forMediaSelection:(id)arg6;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (id)getDownloadDelegateForTask:(id)arg1;
- (_Bool)isDownloaderAndTaskInOrder:(id)arg1 watchableInfo:(id *)arg2;
- (id)extractTaskDescriptionFromAggregateTask:(id)arg1;
- (void)seeAboutAVAggregateDownloaderRecovery:(id)arg1 task:(id)arg2;
- (id)createOfflineDownloaderForInfo:(id)arg1;
- (void)downloadResumed;
- (void)downloadInitiated;
- (void)downloadCompleted:(id)arg1;
- (id)findPersistentBlobForPlaybackId:(id)arg1;
- (id)findOfflinePlaybackForPlaybackId:(id)arg1;
- (id)findOfflineDownloaderForPlaybackId:(id)arg1;
- (id)getWatchableInfoForLinksKey:(id)arg1;
- (void)removeAllDataForId:(id)arg1;
- (_Bool)hasId:(id)arg1;
- (id)getAllIds;
- (id)getOfflineDownloadInfoForId:(id)arg1;
- (id)getOfflinePlaybackForId:(id)arg1 offlineTransactionId:(id)arg2 fetchOptions:(unsigned long long)arg3;
- (id)getOfflinePlaybackForId:(id)arg1 offlineTransactionId:(id)arg2;
- (_Bool)shouldRespondToEventsForBackgroundURLSessionIdentifier:(id)arg1;
- (id)getOrCreateWatchableInfo:(id)arg1;
- (void)removeWatchableInfo:(id)arg1;
- (id)getWatchableInfo:(id)arg1;
- (void)respondToNextTaskResuming:(CDUnknownBlockType)arg1;
- (void)respondToDownloadFinished:(CDUnknownBlockType)arg1;
- (void)initializeBackgroundUrlTasks;
- (void)finishBackgroundRecoveryWithDownloaders:(id)arg1;
- (void)recoverDownloaderForTask:(id)arg1 into:(id)arg2;
- (void)attemptRecoveryForId:(id)arg1;
- (long long)checkRecoveryAttemptCount:(id)arg1;
- (void)updateExpectedDiskConsumptionForFoundDownloader:(id)arg1;
- (void)initializeUrlSession;
- (void)parseTaskDescription:(id)arg1 watchableId:(id *)arg2 logicalName:(id *)arg3;
- (void)initializeBackgroundTasks:(CDUnknownBlockType)arg1;
- (void)initializeWatchableInfo;
- (_Bool)useAVAggregateOfflineDownloader;
- (id)createDownloaderWithWatchableInfo:(id)arg1 andTask:(id)arg2;
- (_Bool)useAVAggregateOfflineDownloader:(id)arg1;
- (_Bool)supportsAVAggregate;
- (void)userDefaultsDidChangeChange:(id)arg1;
- (void)handleDownloadOverWifiSettingsChange:(_Bool)arg1;
- (void)resetDownloadOverWifiSetting;
- (_Bool)isSessionCurrentlyInvalidated;
- (void)syncDeactivateLinksResponseDirect:(id)arg1 didIncludeSPC:(_Bool)arg2;
- (void)platformConfigurationDidChange:(id)arg1;
- (void)reachabilityStatusChange:(id)arg1;
- (_Bool)shouldSuspendDownloadsOnNetworkChange;
- (_Bool)doesReachabilityIndicateDownloadsWillWork;
- (_Bool)_queueDeactivateLinkForWatchable:(id)arg1;
- (_Bool)queueDeactivateLinkForWatchable:(id)arg1;
- (void)_actuallySendSyncLicenseEvent:(id)arg1 SPC:(id)arg2;
- (void)updateReachabilityForLicense;
- (void)checkForStuckDownloaders:(id)arg1;
- (void)stuckDownloaderCheckOnQueue;
- (_Bool)isSecureInvalidationReady;
- (void)seeAboutLicenseAutoRefresh:(id)arg1;
- (void)submitLicenseRefreshRequest:(id)arg1 isAutoRefresh:(_Bool)arg2;
- (void)establishNewSession;
- (void)unsubscribeToPlatformConfigChanges;
- (void)subscribeToPlatformConfigChanges;
- (_Bool)isApplicationActive;
- (id)init;
- (unsigned long long)spaceAvailableForDownloads;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

