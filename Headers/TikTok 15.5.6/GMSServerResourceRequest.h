//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GMSServerResourceRequest : NSObject
{
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
    GMSServerResourceRequest *_nextRequest;
}

- (void).cxx_destruct;
- (void)invokeCallbacksWithResource:(id)arg1;
- (void)addDuplicate:(id)arg1;
- (id)initWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
