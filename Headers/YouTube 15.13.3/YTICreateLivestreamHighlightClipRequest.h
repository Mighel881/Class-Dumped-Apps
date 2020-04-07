//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIHighlightVideoMetadata, YTIInnerTubeContext, YTILivestreamId;

@interface YTICreateLivestreamHighlightClipRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clipRangesArray; // @dynamic clipRangesArray;
@property(readonly, nonatomic) unsigned long long clipRangesArray_Count; // @dynamic clipRangesArray_Count;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *externalVideoId; // @dynamic externalVideoId;
@property(copy, nonatomic) NSString *frontendUploadId; // @dynamic frontendUploadId;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasExternalVideoId; // @dynamic hasExternalVideoId;
@property(nonatomic) _Bool hasFrontendUploadId; // @dynamic hasFrontendUploadId;
@property(nonatomic) _Bool hasHighlightVideoMetadata; // @dynamic hasHighlightVideoMetadata;
@property(nonatomic) _Bool hasLivestreamId; // @dynamic hasLivestreamId;
@property(retain, nonatomic) YTIHighlightVideoMetadata *highlightVideoMetadata; // @dynamic highlightVideoMetadata;
@property(retain, nonatomic) YTILivestreamId *livestreamId; // @dynamic livestreamId;

@end
