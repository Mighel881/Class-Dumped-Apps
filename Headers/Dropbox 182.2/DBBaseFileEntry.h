//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileEntry-Protocol.h"

@class NSString;

@interface DBBaseFileEntry : NSObject <DBFileEntry>
{
}

- (void)removeLinkedObserver:(id)arg1;
- (id)addLinkedObserver:(CDUnknownBlockType)arg1;
- (unsigned long long)itemSourceType;
- (unsigned long long)fileType;
- (_Bool)isLinked;
@property(readonly, nonatomic) _Bool isNoAccess;
@property(readonly, nonatomic) _Bool canBeExported;
- (_Bool)isSameFileEntryAs:(id)arg1;
- (_Bool)isCompatibleWithPrefetcher:(id)arg1;
- (id)currentUploadManager;
- (id)localThumbnailProvider;
- (id)manualUploadManager;
- (id)singleFileEntryDataProvider;
- (id)sharedFolderManager;
- (id)sharedContentManager;
- (id)commentsRouter;
- (id)userStormcrow;
- (id)analyticsLogger;
- (id)stateRestorationManager;
- (id)operationsManager;
- (id)shareActionManager;
- (id)openWithManager;
- (id)offlineTracker;
- (id)starredTracker;
- (id)viewTracker;
- (id)linkFileLoader;
- (id)contentLoader;
- (id)metadataLoader;
- (id)title;
- (id)filePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
