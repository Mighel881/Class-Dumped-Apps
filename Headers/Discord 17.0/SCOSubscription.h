//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSString, SCOAccessKey, SCODistanceAccessPolicy, SCOFetchScanningHintsParams, SCOMessageFilter, SCOMessageType, SCOOptInStateFilter, SCOTokenExchangeStrategy, SCOUnconfirmedCopresence;

@interface SCOSubscription : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;
- (id)initWithSubscriptionParams:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SCOAccessKey *accessKey; // @dynamic accessKey;
@property(retain, nonatomic) SCODistanceAccessPolicy *distanceAccessPolicy; // @dynamic distanceAccessPolicy;
@property(retain, nonatomic) SCOFetchScanningHintsParams *fetchScanningHintsParams; // @dynamic fetchScanningHintsParams;
@property(nonatomic) _Bool hasAccessKey; // @dynamic hasAccessKey;
@property(nonatomic) _Bool hasDistanceAccessPolicy; // @dynamic hasDistanceAccessPolicy;
@property(nonatomic) _Bool hasFetchScanningHintsParams; // @dynamic hasFetchScanningHintsParams;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMessageFilter; // @dynamic hasMessageFilter;
@property(nonatomic) _Bool hasMessageType; // @dynamic hasMessageType;
@property(nonatomic) _Bool hasOptInStateFilter; // @dynamic hasOptInStateFilter;
@property(nonatomic) _Bool hasProjectId; // @dynamic hasProjectId;
@property(nonatomic) _Bool hasTokenExchangeStrategy; // @dynamic hasTokenExchangeStrategy;
@property(nonatomic) _Bool hasTtlMillis; // @dynamic hasTtlMillis;
@property(nonatomic) _Bool hasUnconfirmedCopresence; // @dynamic hasUnconfirmedCopresence;
@property(retain, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCOMessageFilter *messageFilter; // @dynamic messageFilter;
@property(retain, nonatomic) SCOMessageType *messageType; // @dynamic messageType;
@property(retain, nonatomic) SCOOptInStateFilter *optInStateFilter; // @dynamic optInStateFilter;
@property(nonatomic) long long projectId; // @dynamic projectId;
@property(retain, nonatomic) SCOTokenExchangeStrategy *tokenExchangeStrategy; // @dynamic tokenExchangeStrategy;
@property(nonatomic) long long ttlMillis; // @dynamic ttlMillis;
@property(retain, nonatomic) SCOUnconfirmedCopresence *unconfirmedCopresence; // @dynamic unconfirmedCopresence;

@end

