//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBStarredStatusObserver-Protocol.h"
#import "DBStarredTracker-Protocol.h"

@class DBDropboxPath, DBObserverBlockMap, DBUserFileStarredManager, NSString;

@interface DBFileStarredTracker : NSObject <DBStarredStatusObserver, DBStarredTracker>
{
    DBDropboxPath *_filePath;
    long long _fileType;
    DBUserFileStarredManager *_userStarredManager;
    long long _cachedStatus;
    DBObserverBlockMap *_statusObservers;
    NSString *_starredModelDatabaseUniqueIdentifier;
}

- (void).cxx_destruct;
- (void)db_notifyObserversOfChangeToStatus;
- (void)db_setCachedStatus:(_Bool)arg1;
- (void)db_setStarred:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusManager:(id)arg1 didUpdateIsStarredStatus:(_Bool)arg2 forItemWithStarredDatabaseIdentifier:(id)arg3;
- (id)addStatusObserver:(CDUnknownBlockType)arg1;
- (void)setStarred:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long cachedStatus;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 isDirectory:(_Bool)arg2 userStarredManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
