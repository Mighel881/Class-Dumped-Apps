//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCollectionModel-Protocol.h"
#import "DBCollectionModelEnumerable-Protocol.h"
#import "DBModelObjectBinding-Protocol.h"

@class DBFileActionsController, NSArray, NSEnumerator, NSError, NSString;
@protocol DBCollatedEntriesProtocol, DBModelContext;

@interface DBFileActionSheetCollectionModel : NSObject <DBCollectionModel, DBCollectionModelEnumerable, DBModelObjectBinding>
{
    NSString *_modelID;
    DBFileActionsController *_fileActionsController;
    id <DBCollatedEntriesProtocol> _collatedEntries;
    long long _state;
    NSError *_lastError;
}

+ (id)db_sectionTitlesForNumSections:(unsigned long long)arg1;
+ (long long)db_sectionForAction:(id)arg1 inActionsDict:(id)arg2;
+ (id)db_sortedActionIdsBySection;
+ (id)db_actionsFromFileActionsController:(id)arg1 forLocation:(long long)arg2;
@property(readonly, copy, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)contentViewObjectWithModelContext:(id)arg1;
@property(readonly, nonatomic) NSEnumerator *enumerator;
- (void)enumerateCollectionWithBlock:(CDUnknownBlockType)arg1;
- (void)reloadCollection;
- (id)registerCollectionObserver:(id)arg1;
@property(readonly, nonatomic) id <DBModelContext> collectionContext;
- (id)modelObjectForSection:(long long)arg1 kind:(id)arg2;
- (id)modelObjectAtIndexPath:(id)arg1;
- (long long)numberOfModelObjectsInSection:(long long)arg1;
@property(readonly, nonatomic) long long collectionModelSectionCount;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *modelObjectId;
@property(readonly, nonatomic) NSArray *fileEntries;
- (id)initWithFileActionsController:(id)arg1 location:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
