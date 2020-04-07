//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "RCTInvalidating-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, RCTBridge, RCTLayoutAnimationGroup, RCTUIManagerObserverCoordinator;
@protocol OS_dispatch_queue;

@interface RCTUIManager : NSObject <RCTBridgeModule, RCTInvalidating>
{
    NSMutableSet *_rootViewTags;
    NSMutableArray *_pendingUIBlocks;
    RCTLayoutAnimationGroup *_layoutAnimationGroup;
    NSMutableDictionary *_shadowViewRegistry;
    NSMutableDictionary *_viewRegistry;
    NSMapTable *_nativeIDRegistry;
    NSMapTable *_shadowViewsWithUpdatedProps;
    NSHashTable *_shadowViewsWithUpdatedChildren;
    NSMutableDictionary *_componentDataByName;
    RCTBridge *_bridge;
    RCTUIManagerObserverCoordinator *_observerCoordinator;
}

+ (id)JSResponder;
+ (const struct RCTMethodInfo *)__rct_export__155119;
+ (const struct RCTMethodInfo *)__rct_export__150418;
+ (const struct RCTMethodInfo *)__rct_export__142117;
+ (const struct RCTMethodInfo *)__rct_export__141116;
+ (const struct RCTMethodInfo *)__rct_export__139915;
+ (const struct RCTMethodInfo *)__rct_export__138314;
+ (const struct RCTMethodInfo *)__rct_export__133213;
+ (const struct RCTMethodInfo *)__rct_export__130412;
+ (const struct RCTMethodInfo *)__rct_export__127011;
+ (const struct RCTMethodInfo *)__rct_export__106610;
+ (const struct RCTMethodInfo *)__rct_export__10439;
+ (const struct RCTMethodInfo *)__rct_export__10358;
+ (const struct RCTMethodInfo *)__rct_export__10277;
+ (const struct RCTMethodInfo *)__rct_export__10036;
+ (const struct RCTMethodInfo *)__rct_export__9455;
+ (const struct RCTMethodInfo *)__rct_export__8684;
+ (const struct RCTMethodInfo *)__rct_export__8353;
+ (const struct RCTMethodInfo *)__rct_export__8102;
+ (const struct RCTMethodInfo *)__rct_export__7911;
+ (const struct RCTMethodInfo *)__rct_export__6710;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
@property(readonly, retain) RCTUIManagerObserverCoordinator *observerCoordinator; // @synthesize observerCoordinator=_observerCoordinator;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)rootViewForReactTag:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)configureNextLayoutAnimation:(id)arg1 withCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (id)lazilyLoadView:(id)arg1;
- (id)getConstants;
- (id)constantsToExport;
- (void)clearJSResponder;
- (void)setJSResponder:(id)arg1 blockNativeResponder:(_Bool)arg2;
- (void)measureLayoutRelativeToParent:(id)arg1 errorCallback:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)measureLayout:(id)arg1 relativeTo:(id)arg2 errorCallback:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (void)viewIsDescendantOf:(id)arg1 ancestor:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)measureInWindow:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)measure:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_dispatchPropsDidChangeEvents;
- (void)_dispatchChildrenDidChangeEvents;
- (void)_shadowViewDidReceiveUpdatedChildren:(id)arg1;
- (void)_shadowView:(id)arg1 didReceiveUpdatedProps:(id)arg2;
- (void)setNeedsLayout;
- (void)flushUIBlocksWithCompletion:(CDUnknownBlockType)arg1;
- (void)_layoutAndMount;
- (void)batchDidComplete;
- (void)dispatchViewManagerCommand:(id)arg1 commandID:(id)arg2 commandArgs:(id)arg3;
- (void)findSubviewIn:(id)arg1 atPoint:(struct CGPoint)arg2 callback:(CDUnknownBlockType)arg3;
- (void)blur:(id)arg1;
- (void)focus:(id)arg1;
- (void)synchronouslyUpdateViewOnUIThread:(id)arg1 viewName:(id)arg2 props:(id)arg3;
- (void)updateView:(id)arg1 viewName:(id)arg2 props:(id)arg3;
- (void)createView:(id)arg1 viewName:(id)arg2 rootTag:(id)arg3 props:(id)arg4;
- (void)_manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6 registry:(id)arg7;
- (void)manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6;
- (void)setChildren:(id)arg1 reactTags:(id)arg2;
- (void)replaceExistingNonRootView:(id)arg1 withView:(id)arg2;
- (void)removeRootView:(id)arg1;
- (void)_removeChildren:(id)arg1 fromContainer:(id)arg2 withAnimation:(id)arg3;
- (void)_removeChildren:(id)arg1 fromContainer:(id)arg2;
- (id)_childrenToRemoveFromContainer:(id)arg1 atIndices:(id)arg2;
- (void)removeSubviewsFromContainerWithID:(id)arg1;
- (CDUnknownBlockType)uiBlockWithLayoutUpdateForRootView:(id)arg1;
- (void)setNextLayoutAnimationGroup:(id)arg1;
- (void)prependUIBlock:(CDUnknownBlockType)arg1;
- (void)addUIBlock:(CDUnknownBlockType)arg1;
- (void)_purgeChildren:(id)arg1 fromRegistry:(id)arg2;
- (void)setIntrinsicContentSize:(struct CGSize)arg1 forView:(id)arg2;
- (void)setSize:(struct CGSize)arg1 forView:(id)arg2;
- (void)setNativeID:(id)arg1 forView:(id)arg2;
- (id)viewForNativeID:(id)arg1 withRootTag:(id)arg2;
- (void)setLocalData:(id)arg1 forView:(id)arg2;
- (void)setAvailableSize:(struct CGSize)arg1 forRootView:(id)arg2;
- (void)_executeBlockWithShadowView:(CDUnknownBlockType)arg1 forTag:(id)arg2;
- (id)shadowViewForReactTag:(id)arg1;
- (id)viewForReactTag:(id)arg1;
- (id)viewNameForReactTag:(id)arg1;
- (void)registerRootView:(id)arg1;
- (void)registerRootViewTag:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)namedOrientationDidChange;
- (void)didReceiveNewContentSizeMultiplier;
- (void)setBridge:(id)arg1;
- (id)nativeIDRegistry;
- (id)viewRegistry;
- (id)shadowViewRegistry;
- (void)invalidate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
