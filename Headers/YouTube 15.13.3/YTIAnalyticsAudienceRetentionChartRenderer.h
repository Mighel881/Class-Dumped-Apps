//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBDoubleArray, YTIFormattedString;

@interface YTIAnalyticsAudienceRetentionChartRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int areaColor; // @dynamic areaColor;
@property(nonatomic) long long durationMillis; // @dynamic durationMillis;
@property(nonatomic) _Bool hasAreaColor; // @dynamic hasAreaColor;
@property(nonatomic) _Bool hasDurationMillis; // @dynamic hasDurationMillis;
@property(nonatomic) _Bool hasLabelXEnd; // @dynamic hasLabelXEnd;
@property(nonatomic) _Bool hasLabelXStart; // @dynamic hasLabelXStart;
@property(retain, nonatomic) YTIFormattedString *labelXEnd; // @dynamic labelXEnd;
@property(retain, nonatomic) YTIFormattedString *labelXStart; // @dynamic labelXStart;
@property(retain, nonatomic) GPBDoubleArray *valuesArray; // @dynamic valuesArray;
@property(readonly, nonatomic) unsigned long long valuesArray_Count; // @dynamic valuesArray_Count;

@end
