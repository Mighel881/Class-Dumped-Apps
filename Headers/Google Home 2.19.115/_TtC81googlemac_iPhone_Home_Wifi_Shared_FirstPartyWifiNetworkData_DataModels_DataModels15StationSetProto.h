//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMESchedule, NSArray, NSDictionary, NSString, _TtC55googlemac_iPhone_Home_Wifi_Shared_DataModels_DataModels12PauseDetails, _TtC55googlemac_iPhone_Home_Wifi_Shared_DataModels_DataModels22ContentFilteringPolicy, _TtC55googlemac_iPhone_Home_Wifi_Shared_DataModels_DataModels26FamilyWifiStationSetPolicy;

@interface _TtC81googlemac_iPhone_Home_Wifi_Shared_FirstPartyWifiNetworkData_DataModels_DataModels15StationSetProto : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: members
    // Error parsing type: , name: name
    // Error parsing type: , name: stations
    // Error parsing type: , name: blockingSchedule
    // Error parsing type: , name: contentFilteringPolicy
    // Error parsing type: , name: stationSetPolicy
    // Error parsing type: , name: manuallyPausedSchedule
    // Error parsing type: , name: isPaused
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused;
- (_Bool)isSafeSearchOn;
@property(nonatomic, retain) _TtC55googlemac_iPhone_Home_Wifi_Shared_DataModels_DataModels12PauseDetails *manuallyPausedSchedule; // @synthesize manuallyPausedSchedule;
@property(nonatomic, retain) _TtC55googlemac_iPhone_Home_Wifi_Shared_DataModels_DataModels26FamilyWifiStationSetPolicy *stationSetPolicy; // @synthesize stationSetPolicy;
@property(nonatomic, retain) _TtC55googlemac_iPhone_Home_Wifi_Shared_DataModels_DataModels22ContentFilteringPolicy *contentFilteringPolicy; // @synthesize contentFilteringPolicy;
@property(nonatomic, retain) HMESchedule *blockingSchedule; // @synthesize blockingSchedule;
@property(nonatomic, copy) NSDictionary *stations;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray *members;
@property(nonatomic, readonly) NSString *identifier;

@end

