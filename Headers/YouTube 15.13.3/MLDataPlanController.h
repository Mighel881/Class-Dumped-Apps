//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/CTTelephonyNetworkInfoDelegate-Protocol.h>
#import <Module_Framework/YTHotConfigObserver-Protocol.h>
#import <Module_Framework/YTReachabilityObserver-Protocol.h>

@class CTTelephonyNetworkInfo, GIMMe, NSMutableDictionary, NSString, YTBaseNetworkService;
@protocol HAMClock, YTEventLogger;

@interface MLDataPlanController : NSObject <YTReachabilityObserver, YTHotConfigObserver, CTTelephonyNetworkInfoDelegate>
{
    int _previousConnectionType;
    YTBaseNetworkService *_networkService;
    CTTelephonyNetworkInfo *_carrierNetworkInfo;
    NSMutableDictionary *_mccMncToCpidEndpoint;
    id <YTEventLogger> _eventLogger;
    id <HAMClock> _clock;
    _Bool _hasStarted;
    _Bool _usePASConfig;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (void)logCPIDRequestWithFinishReason:(int)arg1 timeToResponseCompletedMs:(int)arg2;
- (void)createMccMncToCpidEndpointMap:(id)arg1;
- (id)currentCarrier;
- (id)currentCarrierMccMnc;
- (_Bool)isOnCellularNetwork:(int)arg1;
- (void)registerCpid:(id)arg1 carrierId:(long long)arg2;
- (void)getCpidWithUrlRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCpidWithUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCpidFromEndpointUrls:(id)arg1 currentEndpointUrlsIndex:(unsigned long long)arg2 carrierId:(long long)arg3;
- (void)getCpidEndpointsForCarrierMccMnc:(id)arg1;
- (void)receivedMobileDataPlanApiConfigResponse:(id)arg1;
- (void)requestCpidConfigWithConnectionType:(int)arg1;
- (void)dataServiceIdentifierDidChange:(id)arg1;
- (void)reachabilityDidChange;
- (void)stop;
- (void)start;
- (void)maybeStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

