//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashReporterNavigationMonitoringService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCrashReporterNavigationMonitoringServiceTransport;
@protocol SPTCrashReporterService, SPTInstrumentationService;

@interface SPTCrashReporterNavigationMonitoringServiceImplementation : NSObject <SPTCrashReporterNavigationMonitoringService>
{
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTInstrumentationService> _instrumentationService;
    SPTCrashReporterNavigationMonitoringServiceTransport *_transport;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCrashReporterNavigationMonitoringServiceTransport *transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <SPTInstrumentationService> instrumentationService; // @synthesize instrumentationService=_instrumentationService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
- (void).cxx_destruct;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

