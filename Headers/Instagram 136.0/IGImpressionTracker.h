//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGTimestampContainer, NSString;

@interface IGImpressionTracker : NSObject <IGUserSessionEndingObject>
{
    NSString *_cachePath;
    IGTimestampContainer *_impressionTimestamps;
    IGTimestampContainer *_impressionViewedTimestamps;
    IGTimestampContainer *_viewingStartTimestamps;
}

+ (double)timeIntervalSinceLastUpdateForKey:(id)arg1 withContainer:(id)arg2;
+ (id)cacheKeyFormatForStoryAdSegmentUnit:(id)arg1 sponsoredSupportConfiguration:(id)arg2 segmentIndex:(long long)arg3;
+ (id)cacheKeyFormatForNetegoUnit:(id)arg1;
+ (id)cacheKeyFormatForFeedItem:(id)arg1 sponsoredInfoProvider:(id)arg2 trackingID:(id)arg3;
+ (id)impressionCacheKeyForFeedItem:(id)arg1 sponsoredInfoProvider:(id)arg2 index:(long long)arg3;
+ (long long)impressionEventWithKey:(id)arg1 container:(id)arg2;
- (void).cxx_destruct;
- (void)_writeImpressionTimestampsToDisk;
- (void)userSessionWillEnd;
- (void)removeTimestampForKey:(id)arg1 withType:(long long)arg2;
- (double)timeIntervalSinceLastUpdateForKey:(id)arg1 withType:(long long)arg2;
- (id)timestampContainerForType:(long long)arg1;
- (double)timestampForKey:(id)arg1 withType:(long long)arg2;
- (void)updateTimestampForKey:(id)arg1 withType:(long long)arg2 date:(id)arg3;
- (void)updateTimestampForKey:(id)arg1 withType:(long long)arg2;
- (void)reset;
- (void)_applicationDidEnterBackground:(id)arg1;
- (long long)impressionEventTypeWithTimestampType:(long long)arg1 cacheKey:(id)arg2;
- (id)initWithCacheFilePrefix:(id)arg1;
- (id)initWithCacheFileName:(id)arg1 forUserSession:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

