//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface Orientation : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__2166;
+ (const struct RCTMethodInfo *)__rct_export__2025;
+ (const struct RCTMethodInfo *)__rct_export__1894;
+ (const struct RCTMethodInfo *)__rct_export__1673;
+ (const struct RCTMethodInfo *)__rct_export__1542;
+ (const struct RCTMethodInfo *)__rct_export__1471;
+ (const struct RCTMethodInfo *)__rct_export__1400;
+ (void)load;
+ (id)moduleName;
+ (_Bool)requiresMainQueueSetup;
+ (unsigned long long)getOrientation;
+ (void)setOrientation:(unsigned long long)arg1;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)constantsToExport;
- (void)unlockAllOrientations;
- (void)lockToLandscapeRight;
- (void)lockToLandscapeLeft;
- (void)lockToLandscape;
- (void)lockToPortrait;
- (void)getSpecificOrientation:(CDUnknownBlockType)arg1;
- (void)getOrientation:(CDUnknownBlockType)arg1;
- (id)getSpecificOrientationStr:(long long)arg1;
- (id)getOrientationStr:(long long)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

