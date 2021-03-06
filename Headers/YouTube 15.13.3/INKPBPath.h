//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBDoubleArray, GPBEnumArray, GPBUInt32Array;

@interface INKPBPath : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int endCap; // @dynamic endCap;
@property(nonatomic) unsigned int fillRgba; // @dynamic fillRgba;
@property(nonatomic) _Bool hasEndCap; // @dynamic hasEndCap;
@property(nonatomic) _Bool hasFillRgba; // @dynamic hasFillRgba;
@property(nonatomic) _Bool hasRadius; // @dynamic hasRadius;
@property(nonatomic) _Bool hasRgba; // @dynamic hasRgba;
@property(nonatomic) double radius; // @dynamic radius;
@property(nonatomic) unsigned int rgba; // @dynamic rgba;
@property(retain, nonatomic) GPBDoubleArray *segmentArgsArray; // @dynamic segmentArgsArray;
@property(readonly, nonatomic) unsigned long long segmentArgsArray_Count; // @dynamic segmentArgsArray_Count;
@property(retain, nonatomic) GPBUInt32Array *segmentCountsArray; // @dynamic segmentCountsArray;
@property(readonly, nonatomic) unsigned long long segmentCountsArray_Count; // @dynamic segmentCountsArray_Count;
@property(retain, nonatomic) GPBEnumArray *segmentTypesArray; // @dynamic segmentTypesArray;
@property(readonly, nonatomic) unsigned long long segmentTypesArray_Count; // @dynamic segmentTypesArray_Count;

@end

