//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdSettings : NSObject
{
}

+ (_Bool)assertionsEnabled;
+ (id)routingToken;
+ (id)bidderToken;
+ (void)setLoggingDelegate:(id)arg1;
+ (id)loggingDelegate;
+ (void)setTestAdType:(long long)arg1;
+ (long long)testAdType;
+ (void)setMediaViewRenderingMethod:(long long)arg1;
+ (long long)mediaViewRenderingMethod;
+ (void)resetSessionID;
+ (id)sessionID;
+ (void)setLogLevel:(long long)arg1;
+ (long long)getLogLevel;
+ (id)synchronizationEndpointURL;
+ (id)baseURL;
+ (id)baseBiddingURL;
+ (id)baseEventURL;
+ (id)baseURLWithDefault:(id)arg1 withFormat:(id)arg2;
+ (id)webviewBaseURL;
+ (id)deliveryEndpointURL;
+ (void)setUrlPrefix:(id)arg1;
+ (id)urlPrefix;
+ (id)getMediationService;
+ (void)setMediationService:(id)arg1;
+ (void)setBackgroundVideoPlaybackAllowed:(_Bool)arg1;
+ (_Bool)isBackgroundVideoPlaybackAllowed;
+ (_Bool)isChildDirected;
+ (_Bool)isTestMode;
+ (void)setIsChildDirected:(_Bool)arg1;
+ (void)clearTestDevice:(id)arg1;
+ (void)clearTestDevices;
+ (void)addTestDevices:(id)arg1;
+ (void)addTestDevice:(id)arg1;
+ (void)persistTestDevices;
+ (id)testDevices;
+ (id)testDeviceHash;
+ (void)initialize;

@end
