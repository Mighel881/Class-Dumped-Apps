//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPreSignupExperimentationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPreSignupExperimentationFeatureFlagsLoaderImplementation;
@protocol SPTDebugService, SPTNetworkService, SPTUserTrackingService;

@interface SPTPreSignupExperimentationServiceImplementation : NSObject <SPTPreSignupExperimentationService>
{
    id <SPTNetworkService> _networkService;
    id <SPTUserTrackingService> _userTrackingService;
    id <SPTDebugService> _debugService;
    SPTPreSignupExperimentationFeatureFlagsLoaderImplementation *_featureFlagsLoader;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTPreSignupExperimentationFeatureFlagsLoaderImplementation *featureFlagsLoader; // @synthesize featureFlagsLoader=_featureFlagsLoader;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTUserTrackingService> userTrackingService; // @synthesize userTrackingService=_userTrackingService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (id)provideFeatureFlagsLoader;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

