//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSHashTable;
@protocol FBAREngineEffectLifecycleEffectDescriptor, OS_dispatch_queue;

@interface FBAREngineEffectLifecycleListenerAnnouncer : NSObject <NSSecureCoding>
{
    id <FBAREngineEffectLifecycleEffectDescriptor> _effectDescriptor;
    NSHashTable *_listeners;
    NSObject<OS_dispatch_queue> *_listenerQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithEffectDescriptor:(id)arg1 listenerQueue:(id)arg2;
- (void).cxx_destruct;
- (void)notifyDidChangeToDifferentEffectForEffectWithEffectID:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)notifyDidRenderFirstFullResolutionFrameForEffectWithEffectID:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)notifyDidRenderFirstFrameForEffectWithEffectID:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)notifyDidFailToLoadEffectWithFailureReason:(id)arg1 effectID:(id)arg2 analyticsIdentifier:(id)arg3 instanceAnalyticsIdentifier:(id)arg4;
- (void)notifyDidLoadEffectWithEffectID:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3 manifest:(shared_ptr_4a5c6119)arg4 effectAttribution:(shared_ptr_d51e6db3)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithEffectDescriptor:(id)arg1 listenerQueue:(id)arg2;

@end

