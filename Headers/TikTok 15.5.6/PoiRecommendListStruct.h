//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PoiRecommendListStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long cursor; // @dynamic cursor;
@property(nonatomic) _Bool hasCursor; // @dynamic hasCursor;
@property(nonatomic) _Bool hasHasMore_p; // @dynamic hasHasMore_p;
@property(nonatomic) int hasMore_p; // @dynamic hasMore_p;
@property(nonatomic) _Bool hasRecommendType; // @dynamic hasRecommendType;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) NSMutableArray *poiInfoListArray; // @dynamic poiInfoListArray;
@property(readonly, nonatomic) unsigned long long poiInfoListArray_Count; // @dynamic poiInfoListArray_Count;
@property(nonatomic) int recommendType; // @dynamic recommendType;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
