//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    void *_queueSpecific;
    _Bool _specialIsMainQueue;
}

+ (id)wrapConcurrentNativeQueue:(id)arg1;
+ (id)concurrentBackgroundQueue;
+ (id)concurrentDefaultQueue;
+ (id)mainQueue;
- (void).cxx_destruct;
- (_Bool)isCurrentQueue;
- (void)dispatch:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatch:(CDUnknownBlockType)arg1;
- (id)_dispatch_queue;
- (id)initWithNativeQueue:(id)arg1 queueSpecific:(void *)arg2;
- (id)init;

@end
