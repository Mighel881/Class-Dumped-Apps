//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, Protocol, RACDisposable;

@protocol IESActionDispatcher <NSObject>
- (RACDisposable *)addSubscriber:(id)arg1 forActions:(NSArray *)arg2;
- (RACDisposable *)addSubscriber:(id)arg1 forAction:(Protocol *)arg2;
- (id)dispactherForAction:(Protocol *)arg1;
@end
