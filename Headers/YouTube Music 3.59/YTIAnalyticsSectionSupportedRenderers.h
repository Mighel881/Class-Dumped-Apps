//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAnalyticsActionableMessageCardRenderer, YTIAnalyticsAnomalyRenderer, YTIAnalyticsAudienceRetentionCardRenderer, YTIAnalyticsChartCardRenderer, YTIAnalyticsErrorRenderer, YTIAnalyticsLikesDislikesCardRenderer, YTIAnalyticsSimpleTableCardRenderer, YTIAnalyticsSparklineCardRenderer, YTIAnalyticsTimeSeriesCardRenderer;

@interface YTIAnalyticsSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAnalyticsActionableMessageCardRenderer *actionableMessage; // @dynamic actionableMessage;
@property(retain, nonatomic) YTIAnalyticsAnomalyRenderer *anomaly; // @dynamic anomaly;
@property(retain, nonatomic) YTIAnalyticsChartCardRenderer *chart; // @dynamic chart;
@property(retain, nonatomic) YTIAnalyticsErrorRenderer *error; // @dynamic error;
@property(nonatomic) _Bool hasActionableMessage; // @dynamic hasActionableMessage;
@property(nonatomic) _Bool hasAnomaly; // @dynamic hasAnomaly;
@property(nonatomic) _Bool hasChart; // @dynamic hasChart;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasLikesDislikes; // @dynamic hasLikesDislikes;
@property(nonatomic) _Bool hasRetention; // @dynamic hasRetention;
@property(nonatomic) _Bool hasSimpleTable; // @dynamic hasSimpleTable;
@property(nonatomic) _Bool hasSparkline; // @dynamic hasSparkline;
@property(nonatomic) _Bool hasTimeSeries; // @dynamic hasTimeSeries;
@property(retain, nonatomic) YTIAnalyticsLikesDislikesCardRenderer *likesDislikes; // @dynamic likesDislikes;
@property(retain, nonatomic) YTIAnalyticsAudienceRetentionCardRenderer *retention; // @dynamic retention;
@property(retain, nonatomic) YTIAnalyticsSimpleTableCardRenderer *simpleTable; // @dynamic simpleTable;
@property(retain, nonatomic) YTIAnalyticsSparklineCardRenderer *sparkline; // @dynamic sparkline;
@property(retain, nonatomic) YTIAnalyticsTimeSeriesCardRenderer *timeSeries; // @dynamic timeSeries;

@end

