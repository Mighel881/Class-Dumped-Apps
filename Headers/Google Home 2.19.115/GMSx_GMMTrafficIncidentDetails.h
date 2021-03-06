//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMMapPointProto, GMSx_GMTTDDuration, GMSx_GMTTDNoticeAttribution, NSString;

@interface GMSx_GMMTrafficIncidentDetails : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTDDuration *age; // @dynamic age;
@property(retain, nonatomic) GMSx_GMMMapPointProto *alongTheRouteIconLocation; // @dynamic alongTheRouteIconLocation;
@property(nonatomic) int alongTheRouteOffsetMeters; // @dynamic alongTheRouteOffsetMeters;
@property(nonatomic) int alongTheRouteStretchMeters; // @dynamic alongTheRouteStretchMeters;
@property(retain, nonatomic) GMSx_GMTTDNoticeAttribution *attribution; // @dynamic attribution;
@property(nonatomic) float averageSpeedMetersPerSecond; // @dynamic averageSpeedMetersPerSecond;
@property(copy, nonatomic) NSString *captionText; // @dynamic captionText;
@property(nonatomic) long long confirmCount; // @dynamic confirmCount;
@property(nonatomic) long long denyCount; // @dynamic denyCount;
@property(copy, nonatomic) NSString *eventMid; // @dynamic eventMid;
@property(copy, nonatomic) NSString *freetext; // @dynamic freetext;
@property(nonatomic) _Bool hasAge; // @dynamic hasAge;
@property(nonatomic) _Bool hasAlongTheRouteIconLocation; // @dynamic hasAlongTheRouteIconLocation;
@property(nonatomic) _Bool hasAlongTheRouteOffsetMeters; // @dynamic hasAlongTheRouteOffsetMeters;
@property(nonatomic) _Bool hasAlongTheRouteStretchMeters; // @dynamic hasAlongTheRouteStretchMeters;
@property(nonatomic) _Bool hasAttribution; // @dynamic hasAttribution;
@property(nonatomic) _Bool hasAverageSpeedMetersPerSecond; // @dynamic hasAverageSpeedMetersPerSecond;
@property(nonatomic) _Bool hasCaptionText; // @dynamic hasCaptionText;
@property(nonatomic) _Bool hasConfirmCount; // @dynamic hasConfirmCount;
@property(nonatomic) _Bool hasDenyCount; // @dynamic hasDenyCount;
@property(nonatomic) _Bool hasEventMid; // @dynamic hasEventMid;
@property(nonatomic) _Bool hasFreetext; // @dynamic hasFreetext;
@property(nonatomic) _Bool hasIconLocation; // @dynamic hasIconLocation;
@property(nonatomic) _Bool hasIncidentId; // @dynamic hasIncidentId;
@property(nonatomic) _Bool hasInfoSheetIconURL; // @dynamic hasInfoSheetIconURL;
@property(nonatomic) _Bool hasLastReported; // @dynamic hasLastReported;
@property(nonatomic) _Bool hasLastUpdated; // @dynamic hasLastUpdated;
@property(nonatomic) _Bool hasMapIconURL; // @dynamic hasMapIconURL;
@property(nonatomic) _Bool hasReportProblemButtonText; // @dynamic hasReportProblemButtonText;
@property(nonatomic) _Bool hasReportProblemSentText; // @dynamic hasReportProblemSentText;
@property(nonatomic) _Bool hasScheduleText; // @dynamic hasScheduleText;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUserModerationText; // @dynamic hasUserModerationText;
@property(retain, nonatomic) GMSx_GMMMapPointProto *iconLocation; // @dynamic iconLocation;
@property(nonatomic) unsigned long long incidentId; // @dynamic incidentId;
@property(copy, nonatomic) NSString *infoSheetIconURL; // @dynamic infoSheetIconURL;
@property(retain, nonatomic) GMSx_GMTTDDuration *lastReported; // @dynamic lastReported;
@property(retain, nonatomic) GMSx_GMTTDDuration *lastUpdated; // @dynamic lastUpdated;
@property(copy, nonatomic) NSString *mapIconURL; // @dynamic mapIconURL;
@property(copy, nonatomic) NSString *reportProblemButtonText; // @dynamic reportProblemButtonText;
@property(copy, nonatomic) NSString *reportProblemSentText; // @dynamic reportProblemSentText;
@property(copy, nonatomic) NSString *scheduleText; // @dynamic scheduleText;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *userModerationText; // @dynamic userModerationText;

@end

