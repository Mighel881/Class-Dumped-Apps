//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture.h"

#import "JavaLangRunnable-Protocol.h"

@class IOSClass, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@interface ComGoogleCommonUtilConcurrentAbstractCatchingFuture : ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture <JavaLangRunnable>
{
    id <ComGoogleCommonUtilConcurrentListenableFuture> inputFuture_;
    IOSClass *exceptionType_;
    id fallback_;
}

+ (id)createWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withIOSClass:(id)arg2 withComGoogleCommonUtilConcurrentAsyncFunction:(id)arg3 withJavaUtilConcurrentExecutor:(id)arg4;
+ (id)createWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withIOSClass:(id)arg2 withComGoogleCommonBaseFunction:(id)arg3 withJavaUtilConcurrentExecutor:(id)arg4;
- (void)dealloc;
- (void)afterDone;
- (id)pendingToString;
- (void)run;
- (id)initPackagePrivateWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withIOSClass:(id)arg2 withId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

