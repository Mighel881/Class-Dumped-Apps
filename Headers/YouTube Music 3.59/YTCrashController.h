//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALLogWriter, GIMMe, GoogleBreakpadController, NSDate, NSFileManager, YTCrashContextController, YTCrashRestoreVideoController, YTUserDefaults;
@protocol YTCrashControllerDelegate, YTInnerTubeSharedData;

@interface YTCrashController : NSObject
{
    YTUserDefaults *_userDefaults;
    GoogleBreakpadController *_breakpadController;
    CALLogWriter *_crossAppLogger;
    NSDate *_waitingForUploadsSinceDate;
    NSObject<YTInnerTubeSharedData> *_innerTubeSharedData;
    _Bool _dSYMsAvailable;
    _Bool _countAllCrashes;
    NSFileManager *_fileManager;
    id <YTCrashControllerDelegate> _delegate;
    YTCrashContextController *_contextController;
    _Bool _displayCrashReportsPrompt;
    _Bool _alwaysSendReportsOnDistributedBuild;
    YTCrashRestoreVideoController *_crashRestoreVideoController;
    _Bool _breakpadHasStarted;
    _Bool _useStagingServer;
    GIMMe *_gimme;
}

@property(nonatomic) _Bool useStagingServer; // @synthesize useStagingServer=_useStagingServer;
@property(nonatomic) _Bool breakpadHasStarted; // @synthesize breakpadHasStarted=_breakpadHasStarted;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)addCrashInfo;
- (void)createCrossAppLogger;
- (id)fetchCrashURLs;
- (id)breakpadFolder;
- (id)crashLinkForReportID:(id)arg1;
- (void)waitForCrashReportsToUploadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendECatcherEventsWithCrashURLs:(id)arg1;
- (id)fetchCrashIDs;
- (void)reportCrashURLs;
- (void)sendCrashReports;
- (void)didCancel;
- (void)didConfirm;
- (void)sendCrashInfoIfPermittedWithBreakpadCrashReportCount:(int)arg1;
- (_Bool)shouldBreakpadStart;
- (void)didDeleteMiniDumpsWithCreationDates:(id)arg1 breakpadCrashReportCount:(long long)arg2;
- (_Bool)isMiniDumpFilename:(id)arg1;
- (void)cleanupReportsWithBreakpadCrashReportCount:(int)arg1;
- (void)oneTimeStartupWithStaticParameters:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)shouldSendCrashReports;
- (void)startWithStaticParameters:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithCountAllCrashes:(_Bool)arg1;
- (id)initWithCountAllCrashes:(_Bool)arg1 displayCrashReportsPrompt:(_Bool)arg2 alwaysSendReportsOnDistributedBuild:(_Bool)arg3;
- (id)initWithDSYMsAvailable:(_Bool)arg1 countAllCrashes:(_Bool)arg2 fileManager:(id)arg3 displayCrashReportsPrompt:(_Bool)arg4 alwaysSendReportsOnDistributedBuild:(_Bool)arg5;

@end

