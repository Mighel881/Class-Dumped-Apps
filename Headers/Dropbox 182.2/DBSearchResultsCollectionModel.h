//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCollectionModel-Protocol.h"
#import "DBCollectionModelEnumerable-Protocol.h"

@class DBCollatedFileListDataProvider, DBObserverHandle, DBWeakObserverMap, NSArray, NSEnumerator, NSError, NSString;
@protocol DBModelContext, DBSearchResultsFullDataProviderProtocol;

@interface DBSearchResultsCollectionModel : NSObject <DBCollectionModel, DBCollectionModelEnumerable>
{
    id <DBSearchResultsFullDataProviderProtocol> _searchProvider;
    NSString *_modelID;
    DBObserverHandle *_providerDataObserverHandle;
    DBObserverHandle *_providerErrorObserverHandle;
    DBWeakObserverMap *_observers;
    NSArray *_entries;
    id <DBModelContext> _collectionContext;
    NSError *_lastError;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
- (void).cxx_destruct;
- (void)db_moveToState:(long long)arg1;
- (void)db_moveToLoadedStateForProvider:(id)arg1;
- (void)db_notifyObserversOfCollectionModelRefresh;
- (void)db_observedFullRefreshOnProvider:(id)arg1;
- (id)db_createUpdateObserverOnProvider:(id)arg1;
- (void)db_didUpdateWithError:(id)arg1;
- (id)db_createErrorObserverOnProvider:(id)arg1;
@property(readonly, nonatomic) NSEnumerator *enumerator;
- (void)enumerateCollectionWithBlock:(CDUnknownBlockType)arg1;
- (void)reloadCollection;
- (id)registerCollectionObserver:(id)arg1;
@property(readonly, nonatomic) id <DBModelContext> collectionContext;
- (id)modelObjectForSection:(long long)arg1 kind:(id)arg2;
- (long long)numberOfModelObjectsInSection:(long long)arg1;
@property(readonly, nonatomic) long long collectionModelSectionCount;
- (id)modelObjectAtIndexPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *modelObjectId;
- (_Bool)isLoading;
- (void)refresh;
- (void)updateToAnalyticsSession:(id)arg1;
@property(readonly, nonatomic) DBCollatedFileListDataProvider *collatedDataProvider;
- (void)updateToSearch:(id)arg1;
- (void)dealloc;
- (id)initWithSearchProvider:(id)arg1 collectionContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
