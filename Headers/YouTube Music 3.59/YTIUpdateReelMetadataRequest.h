//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSString, YTIInnerTubeContext, YTIReelMetadata;

@interface YTIUpdateReelMetadataRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) GPBEnumArray *fieldsArray; // @dynamic fieldsArray;
@property(readonly, nonatomic) unsigned long long fieldsArray_Count; // @dynamic fieldsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(retain, nonatomic) YTIReelMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;

@end

