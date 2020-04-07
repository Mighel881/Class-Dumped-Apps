//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MtProtoKit/MTDisposable-Protocol.h>

@class MTSubscriber, NSString;
@protocol MTDisposable;

@interface MTSubscriberDisposable : NSObject <MTDisposable>
{
    MTSubscriber *_subscriber;
    id <MTDisposable> _disposable;
}

- (void).cxx_destruct;
- (void)dispose;
- (id)initWithSubscriber:(id)arg1 disposable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
