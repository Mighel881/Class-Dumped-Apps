//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTCorrectedQuery-Protocol.h>

@class NSData, NSString, YTICommand, YTIFormattedString;

@interface YTIIncludingResultsForRenderer : GPBMessage <YTCorrectedQuery>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) struct _NSRange correctedQuerySubheadingEndpointRange;
@property(readonly, nonatomic) YTICommand *correctedQuerySubheadingEndpoint;
@property(readonly, nonatomic) YTIFormattedString *correctedQuerySubheading;
@property(readonly, nonatomic) struct _NSRange correctedQueryHeadingEndpointRange;
@property(readonly, nonatomic) YTICommand *correctedQueryHeadingEndpoint;
@property(readonly, nonatomic) YTIFormattedString *correctedQueryHeading;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *correctedQuery; // @dynamic correctedQuery;
@property(retain, nonatomic) YTICommand *correctedQueryEndpoint; // @dynamic correctedQueryEndpoint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasCorrectedQuery; // @dynamic hasCorrectedQuery;
@property(nonatomic) _Bool hasCorrectedQueryEndpoint; // @dynamic hasCorrectedQueryEndpoint;
@property(nonatomic) _Bool hasIncludingResultsFor; // @dynamic hasIncludingResultsFor;
@property(nonatomic) _Bool hasOriginalQuery; // @dynamic hasOriginalQuery;
@property(nonatomic) _Bool hasOriginalQueryEndpoint; // @dynamic hasOriginalQueryEndpoint;
@property(nonatomic) _Bool hasSearchOnlyFor; // @dynamic hasSearchOnlyFor;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIFormattedString *includingResultsFor; // @dynamic includingResultsFor;
@property(retain, nonatomic) YTIFormattedString *originalQuery; // @dynamic originalQuery;
@property(retain, nonatomic) YTICommand *originalQueryEndpoint; // @dynamic originalQueryEndpoint;
@property(retain, nonatomic) YTIFormattedString *searchOnlyFor; // @dynamic searchOnlyFor;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
