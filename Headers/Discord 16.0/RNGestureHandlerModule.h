//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTBridgeModule-Protocol.h"
#import "RCTUIManagerObserver-Protocol.h"

@class NSMutableArray, NSObject, NSString, RCTBridge, RNGestureHandlerManager;
@protocol OS_dispatch_queue;

@interface RNGestureHandlerModule : RCTEventEmitter <RCTUIManagerObserver, RCTBridgeModule>
{
    RNGestureHandlerManager *_manager;
    NSMutableArray *_operations;
}

+ (const struct RCTMethodInfo *)__rct_export__1335;
+ (const struct RCTMethodInfo *)__rct_export__1264;
+ (const struct RCTMethodInfo *)__rct_export__1193;
+ (const struct RCTMethodInfo *)__rct_export__1122;
+ (const struct RCTMethodInfo *)__rct_export__1051;
+ (const struct RCTMethodInfo *)__rct_export__980;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (id)constantsToExport;
- (id)supportedEvents;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)uiManagerWillFlushUIBlocks:(id)arg1;
- (void)addOperationBlock:(CDUnknownBlockType)arg1;
- (void)handleClearJSResponder;
- (void)handleSetJSResponder:(id)arg1 blockNativeResponder:(id)arg2;
- (void)dropGestureHandler:(id)arg1;
- (void)updateGestureHandler:(id)arg1 config:(id)arg2;
- (void)attachGestureHandler:(id)arg1 toViewWithTag:(id)arg2;
- (void)createGestureHandler:(id)arg1 tag:(id)arg2 config:(id)arg3;
- (void)setBridge:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)invalidate;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
