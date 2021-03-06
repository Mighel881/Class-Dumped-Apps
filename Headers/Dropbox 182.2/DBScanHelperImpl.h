//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileActionOptionsObserver-Protocol.h"
#import "DBScanHelper-Protocol.h"

@class DBDocScannerConfig, DBDocscannerAnalyticsLogger, DBDropboxPath, DBFileActionOptionsDestinationHelper, DBMostRecentlyUsedTableViewDataSource, DBObserverHandle, DBScanActionOptions, DBScanFilenameSuggester, DBWeakObserverMap, NSString;
@protocol DBCameraRollSelectionHelper, DBModalManaging, DBScanUploader;

@interface DBScanHelperImpl : NSObject <DBScanHelper, DBFileActionOptionsObserver>
{
    DBObserverHandle *_observerHandle;
    DBWeakObserverMap *_observers;
    DBScanActionOptions *_scanActionOptions;
    DBFileActionOptionsDestinationHelper *_destinationHelper;
    id <DBModalManaging> _modalManager;
    DBDocscannerAnalyticsLogger *_analyticsLogger;
}

- (void).cxx_destruct;
- (void)fileActionOptionsDidUpdateOptions:(id)arg1;
- (void)refreshSectionsInTableView:(id)arg1 exceptSection:(long long)arg2;
- (id)destinationCellForRow:(long long)arg1;
- (long long)numberOfRowsInDestinationSection;
- (void)presentDestinationFolderChooserWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)addUpdateObserver:(id)arg1;
- (_Bool)willDefinitelyShowFsw;
@property(readonly, nonatomic) NSString *userID;
@property(readonly, nonatomic) DBDropboxPath *filePath;
@property(readonly, nonatomic) DBScanFilenameSuggester *filenameSuggester;
@property(readonly, nonatomic) _Bool changedOutputFolderPath;
@property(readonly, nonatomic) DBDocScannerConfig *config;
@property(readonly, nonatomic) DBMostRecentlyUsedTableViewDataSource *mostRecentDataSource;
@property(readonly, nonatomic) id <DBCameraRollSelectionHelper> cameraRollSelectionHelper;
@property(readonly, nonatomic) id <DBScanUploader> scanUploader;
@property(readonly, nonatomic) DBDocscannerAnalyticsLogger *analyticsLogger;
@property(readonly, nonatomic) id <DBModalManaging> modalManager;
@property(readonly, nonatomic) NSString *imageStoragePath;
@property(readonly, nonatomic) _Bool supportsSaveLocation;
- (void)dealloc;
- (id)initWithScanActionOptions:(id)arg1 modalManager:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

