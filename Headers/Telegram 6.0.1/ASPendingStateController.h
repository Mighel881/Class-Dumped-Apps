//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASWeakSet;

@interface ASPendingStateController : NSObject
{
    // Error parsing type: {Mutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})"_owner"{__thread_id="__id_"^{_opaque_pthread_t}}"_count"i}, name: _lock
    struct ASPendingStateControllerFlags _flags;
    _Bool _hasChanges;
    ASWeakSet *_dirtyNodes;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) ASWeakSet *dirtyNodes; // @synthesize dirtyNodes=_dirtyNodes;
@property(readonly, nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)scheduleFlushIfNeeded;
- (void)flush;
- (void)registerNode:(id)arg1;
- (id)init;
- (_Bool)test_isFlushScheduled;

@end
