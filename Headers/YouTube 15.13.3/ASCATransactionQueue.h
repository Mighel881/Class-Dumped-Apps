//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASAbstractRunLoopQueue.h>

@class NSObject;
@protocol OS_os_activity;

@interface ASCATransactionQueue : ASAbstractRunLoopQueue
{
    struct __CFRunLoopSource *_runLoopSource;
    struct __CFRunLoopObserver *_preTransactionObserver;
    struct __CFRunLoopObserver *_postTransactionObserver;
    struct vector<id<ASCATransactionQueueObserving>, std::__1::allocator<id<ASCATransactionQueueObserving>>> _internalQueue;
    struct __CFSet *_internalQueueHashSet;
    struct vector<id<ASCATransactionQueueObserving>, std::__1::allocator<id<ASCATransactionQueueObserving>>> _batchBuffer;
    // Error parsing type: {Mutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: _internalQueueLock
    NSObject<OS_os_activity> *_rootActivity;
    int _transactionDepth;
}

+ (id)sharedQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) _Bool isEmpty;
- (void)enqueue:(id)arg1;
- (void)processQueue;
- (void)dealloc;
- (id)init;

@end
