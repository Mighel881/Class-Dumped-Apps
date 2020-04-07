//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMNotifierProtocol-Protocol.h"

@class NSString, TIMMulticastDelegate;

@interface TIMNotifier : NSObject <TIMNotifierProtocol>
{
    TIMMulticastDelegate *_observerMulticast;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TIMMulticastDelegate *observerMulticast; // @synthesize observerMulticast=_observerMulticast;
- (void).cxx_destruct;
- (void)removeDelegateWithIdentifier:(id)arg1;
- (id)addWeakDelegate:(id)arg1 onQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
