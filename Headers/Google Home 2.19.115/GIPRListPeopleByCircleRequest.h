//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPRMergedPersonSourceOptions, GIPRPeopleContext, NSString;

@interface GIPRListPeopleByCircleRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *circleId; // @dynamic circleId;
@property(retain, nonatomic) GIPRPeopleContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasMergedPersonSourceOptions; // @dynamic hasMergedPersonSourceOptions;
@property(retain, nonatomic) GIPRMergedPersonSourceOptions *mergedPersonSourceOptions; // @dynamic mergedPersonSourceOptions;
@property(nonatomic) int orderBy; // @dynamic orderBy;
@property(nonatomic) unsigned int pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;

@end

