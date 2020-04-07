//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface STimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _timeout;
    double _timeoutDate;
    _Bool _repeat;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_nativeQueue;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)fireAndInvalidate;
- (void)start;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 repeat:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 nativeQueue:(id)arg4;
- (id)initWithTimeout:(double)arg1 repeat:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;

@end
