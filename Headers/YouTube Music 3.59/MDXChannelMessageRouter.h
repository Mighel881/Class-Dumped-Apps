//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXChannelObserver-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MDXChannelMessageRouter : NSObject <MDXChannelObserver>
{
    NSMutableDictionary *_actions;
}

- (void).cxx_destruct;
- (void)channel:(id)arg1 didEncounterError:(id)arg2;
- (void)channel:(id)arg1 didReceiveMessage:(id)arg2;
- (void)forMessagesNamed:(id)arg1 addTarget:(id)arg2 selector:(SEL)arg3;
- (void)forMessagesNamed:(id)arg1 addAction:(CDUnknownBlockType)arg2;
- (void)addCatchallAction:(CDUnknownBlockType)arg1;
- (void)addFallbackAction:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

