//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBModelObjectBinding-Protocol.h"
#import "DBSearchResultEntryWithUserState-Protocol.h"

@class DBSearchResultInfo, NSString;
@protocol DBFileEntry><DBWithUserState;

@interface DBSearchResultFileEntry : NSObject <DBModelObjectBinding, DBSearchResultEntryWithUserState>
{
    id <DBFileEntry><DBWithUserState> _userFileEntry;
    DBSearchResultInfo *_searchResultInfo;
}

@property(readonly, nonatomic) DBSearchResultInfo *searchResultInfo; // @synthesize searchResultInfo=_searchResultInfo;
- (void).cxx_destruct;
- (_Bool)isSameFileEntryAs:(id)arg1;
- (id)userID;
- (id)userState;
- (void)removeLinkedObserver:(id)arg1;
- (id)addLinkedObserver:(CDUnknownBlockType)arg1;
- (_Bool)isLinked;
@property(readonly, nonatomic) _Bool isNoAccess;
@property(readonly, nonatomic) _Bool canBeExported;
- (id)currentUploadManager;
- (_Bool)isCompatibleWithPrefetcher:(id)arg1;
- (id)localThumbnailProvider;
- (id)singleFileEntryDataProvider;
- (id)manualUploadManager;
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
- (unsigned long long)itemSourceType;
- (unsigned long long)fileType;
- (id)filePath;
@property(readonly, nonatomic) unsigned long long searchEntryType;
- (id)entryWithUpdatedSearchResultInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rootDisplayName;
@property(readonly, copy, nonatomic) NSString *parentFolderName;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithUserFileEntry:(id)arg1 searchResultInfo:(id)arg2;
- (id)contentViewObjectWithModelContext:(id)arg1;
@property(readonly, copy, nonatomic) NSString *modelObjectId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
