//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAActionManager.h"

#import "WAUpgradeCallback-Protocol.h"

@class NSArray, NSString, WACloudStatus, WADownloadBackupOperation_Documents;

@interface WAMediaRestore : WAActionManager <WAUpgradeCallback>
{
    unsigned long long _backgroundTask;
    NSArray *_extractionOperations;
    WADownloadBackupOperation_Documents *_downloadOperation;
}

+ (id)setByRemovingDownloadedFilesFrom:(id)arg1;
+ (id)loadPreviousExtractionProgress;
+ (id)loadPreviousExtractionProgress_internal;
+ (void)mergeCurrentExtractionProgress:(id)arg1;
+ (id)previousProgressFilePath;
+ (void)ignoreNetworkStatus;
+ (_Bool)canStartFileDownload;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (void)performCleanup;
+ (_Bool)filteredBadgeValueWithBase:(_Bool)arg1;
+ (void)submitFieldStatsWithResult:(long long)arg1;
+ (_Bool)isFailureStatus:(unsigned long long)arg1;
+ (void)updateCloudStatusFilesToInclude;
+ (void)previousBackupChanged:(id)arg1;
+ (void)setCurrentStatus:(unsigned long long)arg1;
+ (void)checkForRequiredMediaRestore;
+ (void)handleApplicationDidFinishLaunching;
+ (unsigned long long)calculateCurrentStatus;
+ (unsigned long long)currentStatus;
+ (id)cloudStatusForMetadata;
+ (_Bool)needsMediaRestore;
+ (void)cancelMediaRestore;
+ (void)clearMediaRestore;
+ (void)restoreMediaAtNextOpportunity;
+ (void)updateMediaRestoreListeners;
+ (void)prepareForMediaRestore;
+ (id)currentRestore;
@property(retain, nonatomic) WADownloadBackupOperation_Documents *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
- (void).cxx_destruct;
- (void)saveCurrentExtractionProgress;
@property(readonly, nonatomic) WACloudStatus *downloadCloudStatus;
- (void)extractRelevantFiles:(id)arg1;
- (void)downloadRelevantFiles:(id)arg1 inDirectory:(id)arg2;
- (void)start;
- (unsigned long long)maximumPhase;
- (id)errorDomain;
- (id)initWithOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
