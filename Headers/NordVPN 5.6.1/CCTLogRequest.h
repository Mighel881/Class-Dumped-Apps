//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <protobuf/GPBMessage.h>

@class CCTClientInfo, CCTCollectForDebug, NSMutableArray, NSString;

@interface CCTLogRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int appMobilespecId; // @dynamic appMobilespecId;
@property(retain, nonatomic) CCTClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) CCTCollectForDebug *collectForDebug; // @dynamic collectForDebug;
@property(nonatomic) _Bool hasAppMobilespecId; // @dynamic hasAppMobilespecId;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasCollectForDebug; // @dynamic hasCollectForDebug;
@property(nonatomic) _Bool hasLogEventDroppedCount; // @dynamic hasLogEventDroppedCount;
@property(nonatomic) _Bool hasLogSource; // @dynamic hasLogSource;
@property(nonatomic) _Bool hasLogSourceName; // @dynamic hasLogSourceName;
@property(nonatomic) _Bool hasQosTier; // @dynamic hasQosTier;
@property(nonatomic) _Bool hasRequestTimeMs; // @dynamic hasRequestTimeMs;
@property(nonatomic) _Bool hasRequestUptimeMs; // @dynamic hasRequestUptimeMs;
@property(nonatomic) _Bool hasZwiebackCookie; // @dynamic hasZwiebackCookie;
@property(retain, nonatomic) NSMutableArray *logEventArray; // @dynamic logEventArray;
@property(readonly, nonatomic) unsigned long long logEventArray_Count; // @dynamic logEventArray_Count;
@property(nonatomic) long long logEventDroppedCount; // @dynamic logEventDroppedCount;
@property(nonatomic) int logSource; // @dynamic logSource;
@property(copy, nonatomic) NSString *logSourceName; // @dynamic logSourceName;
@property(nonatomic) int qosTier; // @dynamic qosTier;
@property(nonatomic) long long requestTimeMs; // @dynamic requestTimeMs;
@property(nonatomic) long long requestUptimeMs; // @dynamic requestUptimeMs;
@property(retain, nonatomic) NSMutableArray *serializedLogEventsArray; // @dynamic serializedLogEventsArray;
@property(readonly, nonatomic) unsigned long long serializedLogEventsArray_Count; // @dynamic serializedLogEventsArray_Count;
@property(copy, nonatomic) NSString *zwiebackCookie; // @dynamic zwiebackCookie;

@end

