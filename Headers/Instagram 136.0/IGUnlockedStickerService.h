//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>

@class IGAnnouncer, NSMutableDictionary, NSMutableSet, NSString;
@protocol IGAPIClient;

@interface IGUnlockedStickerService : NSObject <IGUserSessionObject>
{
    id <IGAPIClient> _networker;
    IGAnnouncer *_announcer;
    NSMutableDictionary *_unlockedStickerModelById;
    NSMutableSet *_optimisticallyUnlockedStickerIds;
}

- (void).cxx_destruct;
- (void)_addStickerModel:(id)arg1 forStickerId:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)optimisticallyUnlockStickerId:(id)arg1;
- (_Bool)hasUnlockedStickerId:(id)arg1;
- (id)unlockedStickerViewForStickerId:(id)arg1;
- (void)fetchStickerNuxWithAnalyticsModule:(id)arg1;
- (void)fetchWithStickerId:(id)arg1 actionSourceType:(long long)arg2 analyticsModule:(id)arg3;
- (id)initWithNetworker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

