//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class SLESPeopleKitError, SLESSendKitMetricsCount, SLESSendKitMetricsDataDisplay, SLESSendKitMetricsError, SLESSendKitMetricsLatency, SLESSendKitMetricsSharedDimension, SLESSendKitMetricsUserEvent;

@interface SLESSendKitMetricsDataEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SLESSendKitMetricsCount *count; // @dynamic count;
@property(retain, nonatomic) SLESSendKitMetricsDataDisplay *dataDisplay; // @dynamic dataDisplay;
@property(nonatomic) int entryType; // @dynamic entryType;
@property(retain, nonatomic) SLESSendKitMetricsError *error; // @dynamic error;
@property(nonatomic) _Bool hasCount; // @dynamic hasCount;
@property(nonatomic) _Bool hasDataDisplay; // @dynamic hasDataDisplay;
@property(nonatomic) _Bool hasEntryType; // @dynamic hasEntryType;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasLatency; // @dynamic hasLatency;
@property(nonatomic) _Bool hasPeoplekitError; // @dynamic hasPeoplekitError;
@property(nonatomic) _Bool hasSharedDimension; // @dynamic hasSharedDimension;
@property(nonatomic) _Bool hasUserEvent; // @dynamic hasUserEvent;
@property(retain, nonatomic) SLESSendKitMetricsLatency *latency; // @dynamic latency;
@property(retain, nonatomic) SLESPeopleKitError *peoplekitError; // @dynamic peoplekitError;
@property(retain, nonatomic) SLESSendKitMetricsSharedDimension *sharedDimension; // @dynamic sharedDimension;
@property(retain, nonatomic) SLESSendKitMetricsUserEvent *userEvent; // @dynamic userEvent;

@end
