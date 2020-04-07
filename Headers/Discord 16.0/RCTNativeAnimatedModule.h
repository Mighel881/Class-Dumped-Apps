//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTBridgeModule-Protocol.h"
#import "RCTEventDispatcherObserver-Protocol.h"
#import "RCTSurfacePresenterObserver-Protocol.h"
#import "RCTUIManagerObserver-Protocol.h"
#import "RCTValueAnimatedNodeObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, RCTBridge, RCTNativeAnimatedNodesManager;
@protocol OS_dispatch_queue;

@interface RCTNativeAnimatedModule : RCTEventEmitter <RCTBridgeModule, RCTValueAnimatedNodeObserver, RCTEventDispatcherObserver, RCTUIManagerObserver, RCTSurfacePresenterObserver>
{
    RCTNativeAnimatedNodesManager *_nodesManager;
    NSMutableArray *_operations;
    NSMutableArray *_preOperations;
    NSMutableDictionary *_animIdIsManagedByFabric;
}

+ (const struct RCTMethodInfo *)__rct_export__19315;
+ (const struct RCTMethodInfo *)__rct_export__18414;
+ (const struct RCTMethodInfo *)__rct_export__17513;
+ (const struct RCTMethodInfo *)__rct_export__16712;
+ (const struct RCTMethodInfo *)__rct_export__16011;
+ (const struct RCTMethodInfo *)__rct_export__15010;
+ (const struct RCTMethodInfo *)__rct_export__1419;
+ (const struct RCTMethodInfo *)__rct_export__1338;
+ (const struct RCTMethodInfo *)__rct_export__1267;
+ (const struct RCTMethodInfo *)__rct_export__1196;
+ (const struct RCTMethodInfo *)__rct_export__1115;
+ (const struct RCTMethodInfo *)__rct_export__1004;
+ (const struct RCTMethodInfo *)__rct_export__853;
+ (const struct RCTMethodInfo *)__rct_export__752;
+ (const struct RCTMethodInfo *)__rct_export__671;
+ (const struct RCTMethodInfo *)__rct_export__590;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)eventDispatcherWillDispatchEvent:(id)arg1;
- (void)animatedNode:(id)arg1 didUpdateValue:(double)arg2;
- (id)supportedEvents;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)didMountComponentsWithRootTag:(long long)arg1;
- (void)willMountComponentsWithRootTag:(long long)arg1;
- (void)flushOperationQueues;
- (void)addPreOperationBlock:(CDUnknownBlockType)arg1;
- (void)addOperationBlock:(CDUnknownBlockType)arg1;
- (void)removeAnimatedEventFromView:(id)arg1 eventName:(id)arg2 animatedNodeTag:(id)arg3;
- (void)addAnimatedEventToView:(id)arg1 eventName:(id)arg2 eventMapping:(id)arg3;
- (void)stopListeningToAnimatedNodeValue:(id)arg1;
- (void)startListeningToAnimatedNodeValue:(id)arg1;
- (void)dropAnimatedNode:(id)arg1;
- (void)disconnectAnimatedNodeFromView:(id)arg1 viewTag:(id)arg2;
- (void)connectAnimatedNodeToView:(id)arg1 viewTag:(id)arg2;
- (void)extractAnimatedNodeOffset:(id)arg1;
- (void)flattenAnimatedNodeOffset:(id)arg1;
- (void)setAnimatedNodeOffset:(id)arg1 offset:(id)arg2;
- (void)setAnimatedNodeValue:(id)arg1 value:(id)arg2;
- (void)stopAnimation:(id)arg1;
- (void)startAnimatingNode:(id)arg1 nodeTag:(id)arg2 config:(id)arg3 endCallback:(CDUnknownBlockType)arg4;
- (void)disconnectAnimatedNodes:(id)arg1 childTag:(id)arg2;
- (void)connectAnimatedNodes:(id)arg1 childTag:(id)arg2;
- (void)createAnimatedNode:(id)arg1 config:(id)arg2;
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
