//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBDropboxPath, NSArray;
@protocol DBDropboxPathArray, DBFileMetadata, DBOfflineServing, DBOfflineServingAddObservingTuple, DBOfflineServingUpdateObservingTuple;

@protocol DBOfflineServingObserving <NSObject>
- (void)offlineService:(id <DBOfflineServing>)arg1 pathWillRename:(DBDropboxPath *)arg2 toPath:(DBDropboxPath *)arg3 updatedMetadata:(id <DBFileMetadata>)arg4;
- (void)offlineService:(id <DBOfflineServing>)arg1 pathsWillMove:(NSArray *)arg2 toPath:(DBDropboxPath *)arg3 withUpdatedMetadata:(NSArray *)arg4;
- (void)offlineService:(id <DBOfflineServing>)arg1 didAddMetadatas:(id <DBOfflineServingAddObservingTuple>)arg2;
- (void)offlineService:(id <DBOfflineServing>)arg1 didUpdateMetadatas:(id <DBOfflineServingUpdateObservingTuple>)arg2;
- (void)offlineService:(id <DBOfflineServing>)arg1 didDeleteFilePaths:(id <DBDropboxPathArray>)arg2;
- (void)offlineService:(id <DBOfflineServing>)arg1 didDeleteAndReaddFilePaths:(NSArray *)arg2;
@end
