//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, SQueue, TGPainting, TGPhotoEntitiesContainerView;

@interface TGPaintUndoManager : NSObject <NSCopying>
{
    SQueue *_queue;
    NSMutableArray *_operations;
    NSMutableDictionary *_uuidToOperationMap;
    TGPainting *_painting;
    TGPhotoEntitiesContainerView *_entitiesContainer;
    CDUnknownBlockType _historyChanged;
}

@property(copy, nonatomic) CDUnknownBlockType historyChanged; // @synthesize historyChanged=_historyChanged;
@property(nonatomic) __weak TGPhotoEntitiesContainerView *entitiesContainer; // @synthesize entitiesContainer=_entitiesContainer;
@property(nonatomic) __weak TGPainting *painting; // @synthesize painting=_painting;
- (void).cxx_destruct;
- (void)_notifyOfHistoryChanges;
- (void)reset;
- (void)_performBlock:(CDUnknownBlockType)arg1 uuid:(long long)arg2;
- (void)unregisterUndoWithUUID:(long long)arg1;
- (void)registerUndoWithUUID:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)undo;
@property(readonly, nonatomic) _Bool canUndo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
