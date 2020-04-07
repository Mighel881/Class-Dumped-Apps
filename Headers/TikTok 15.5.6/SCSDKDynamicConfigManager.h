//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, SCSDKDynamicConfigArchive;
@protocol OS_dispatch_queue;

@interface SCSDKDynamicConfigManager : NSObject
{
    SCSDKDynamicConfigArchive *_configArchive;
    NSMutableSet *_updateCallbacks;
    NSString *_kitVersion;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _wasFetchFromNetworkSuccessful;
    long long _state;
}

+ (id)_parseJsonConfig:(id)arg1;
+ (id)shared;
@property _Bool wasFetchFromNetworkSuccessful; // @synthesize wasFetchFromNetworkSuccessful=_wasFetchFromNetworkSuccessful;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_fetchLatestConfig:(CDUnknownBlockType)arg1;
- (void)_handleFetchCompletion:(id)arg1;
- (id)dynamicConfig:(id)arg1;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (id)initWithArchive:(id)arg1 kitVersion:(id)arg2;
- (id)init;

@end
