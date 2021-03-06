//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState;

@interface ComGoogleCommonUtilConcurrentServiceManager : NSObject
{
    ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState *state_;
    ComGoogleCommonCollectImmutableList *services_;
}

+ (void)initialize;
- (void)dealloc;
- (id)description;
- (id)startupTimes;
- (id)servicesByState;
- (_Bool)isHealthy;
- (void)awaitStoppedWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (void)awaitStoppedWithJavaTimeDuration:(id)arg1;
- (void)awaitStopped;
- (id)stopAsync;
- (void)awaitHealthyWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (void)awaitHealthyWithJavaTimeDuration:(id)arg1;
- (void)awaitHealthy;
- (id)startAsync;
- (void)addListenerWithComGoogleCommonUtilConcurrentServiceManager_Listener:(id)arg1;
- (void)addListenerWithComGoogleCommonUtilConcurrentServiceManager_Listener:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;
- (id)initWithJavaLangIterable:(id)arg1;

@end

