//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CaptionInfoStructV2, NSMutableArray;

@interface LinkMatchStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CaptionInfoStructV2 *captionInfo; // @dynamic captionInfo;
@property(nonatomic) _Bool hasCaptionInfo; // @dynamic hasCaptionInfo;
@property(nonatomic) _Bool hasQueryLimit; // @dynamic hasQueryLimit;
@property(nonatomic) _Bool hasTotalLimit; // @dynamic hasTotalLimit;
@property(retain, nonatomic) NSMutableArray *matchInfoArray; // @dynamic matchInfoArray;
@property(readonly, nonatomic) unsigned long long matchInfoArray_Count; // @dynamic matchInfoArray_Count;
@property(nonatomic) int queryLimit; // @dynamic queryLimit;
@property(nonatomic) int totalLimit; // @dynamic totalLimit;

@end
