//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol IGDirectOutgoingPermanentMediaLocalCacheListenerAnnouncer;

@interface IGDirectOutgoingPermanentMediaLocalCache : NSObject <IGUserSessionObject>
{
    id <IGDirectOutgoingPermanentMediaLocalCacheListenerAnnouncer> _announcer;
    NSMutableDictionary *_clientContextCacheKeyMap;
}

- (void).cxx_destruct;
- (void)_announceUpdateWithClientContext:(id)arg1;
- (id)clientContextMap;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)imageForClientContext:(id)arg1;
- (void)setImageData:(id)arg1 forClientContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

