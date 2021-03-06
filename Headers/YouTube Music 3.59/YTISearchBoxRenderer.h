//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTISearchBoxClearButtonSupportedRenderers, YTISearchBoxSearchButtonSupportedRenderers;

@interface YTISearchBoxRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTISearchBoxClearButtonSupportedRenderers *clearButton; // @dynamic clearButton;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasClearButton; // @dynamic hasClearButton;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasPlaceholderText; // @dynamic hasPlaceholderText;
@property(nonatomic) _Bool hasSearchButton; // @dynamic hasSearchButton;
@property(nonatomic) _Bool hasSearchText; // @dynamic hasSearchText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *placeholderText; // @dynamic placeholderText;
@property(retain, nonatomic) YTISearchBoxSearchButtonSupportedRenderers *searchButton; // @dynamic searchButton;
@property(retain, nonatomic) YTIFormattedString *searchText; // @dynamic searchText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

