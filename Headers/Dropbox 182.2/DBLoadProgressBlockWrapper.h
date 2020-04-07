//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBLoadProgress, DBObserverHandle;

@interface DBLoadProgressBlockWrapper : NSObject
{
    DBLoadProgress *_loadProgressReference;
    DBObserverHandle *_observerHandle;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _readyBlock;
    CDUnknownBlockType _cleanupBlock;
    _Bool _isInProgress;
}

@property(readonly, nonatomic) _Bool isInProgress; // @synthesize isInProgress=_isInProgress;
- (void).cxx_destruct;
- (void)db_progressObserverDidUpdate;
- (void)dealloc;
- (id)initWithLoadProgress:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3 readyBlock:(CDUnknownBlockType)arg4 cleanupBlock:(CDUnknownBlockType)arg5;

@end
