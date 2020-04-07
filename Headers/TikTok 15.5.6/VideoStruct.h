//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, PlayTokenAuthStruct, UrlStruct, VideoTag;

@interface VideoStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UrlStruct *aiCover; // @dynamic aiCover;
@property(retain, nonatomic) UrlStruct *animatedCover; // @dynamic animatedCover;
@property(retain, nonatomic) NSMutableArray *bitRateArray; // @dynamic bitRateArray;
@property(readonly, nonatomic) unsigned long long bitRateArray_Count; // @dynamic bitRateArray_Count;
@property(retain, nonatomic) UrlStruct *captionDownloadAddr; // @dynamic captionDownloadAddr;
@property(nonatomic) long long cdnURLExpired; // @dynamic cdnURLExpired;
@property(retain, nonatomic) UrlStruct *cover; // @dynamic cover;
@property(nonatomic) double coverTsp; // @dynamic coverTsp;
@property(retain, nonatomic) UrlStruct *downloadAddr; // @dynamic downloadAddr;
@property(retain, nonatomic) UrlStruct *downloadSuffixLogoAddr; // @dynamic downloadSuffixLogoAddr;
@property(nonatomic) int duration; // @dynamic duration;
@property(retain, nonatomic) UrlStruct *dynamicCover; // @dynamic dynamicCover;
@property(nonatomic) _Bool hasAiCover; // @dynamic hasAiCover;
@property(nonatomic) _Bool hasAnimatedCover; // @dynamic hasAnimatedCover;
@property(nonatomic) _Bool hasCaptionDownloadAddr; // @dynamic hasCaptionDownloadAddr;
@property(nonatomic) _Bool hasCdnURLExpired; // @dynamic hasCdnURLExpired;
@property(nonatomic) _Bool hasCover; // @dynamic hasCover;
@property(nonatomic) _Bool hasCoverTsp; // @dynamic hasCoverTsp;
@property(nonatomic) _Bool hasDownloadAddr; // @dynamic hasDownloadAddr;
@property(nonatomic) _Bool hasDownloadSuffixLogoAddr; // @dynamic hasDownloadSuffixLogoAddr;
@property(nonatomic) _Bool hasDownloadSuffixLogoAddr_p; // @dynamic hasDownloadSuffixLogoAddr_p;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasDynamicCover; // @dynamic hasDynamicCover;
@property(nonatomic) _Bool hasHasDownloadSuffixLogoAddr_p; // @dynamic hasHasDownloadSuffixLogoAddr_p;
@property(nonatomic) _Bool hasHasWatermark_p; // @dynamic hasHasWatermark_p;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasIsH265; // @dynamic hasIsH265;
@property(nonatomic) _Bool hasIsLongVideo; // @dynamic hasIsLongVideo;
@property(nonatomic) _Bool hasMiscDownloadAddrs; // @dynamic hasMiscDownloadAddrs;
@property(nonatomic) _Bool hasNeedSetToken; // @dynamic hasNeedSetToken;
@property(nonatomic) _Bool hasNewDownloadAddr; // @dynamic hasNewDownloadAddr;
@property(nonatomic) _Bool hasOriginCover; // @dynamic hasOriginCover;
@property(nonatomic) _Bool hasPlayAddr; // @dynamic hasPlayAddr;
@property(nonatomic) _Bool hasPlayAddr265; // @dynamic hasPlayAddr265;
@property(nonatomic) _Bool hasPlayAddrH264; // @dynamic hasPlayAddrH264;
@property(nonatomic) _Bool hasPlayAddrLowbr; // @dynamic hasPlayAddrLowbr;
@property(nonatomic) _Bool hasRatio; // @dynamic hasRatio;
@property(nonatomic) _Bool hasTag; // @dynamic hasTag;
@property(nonatomic) _Bool hasTokenAuth; // @dynamic hasTokenAuth;
@property(nonatomic) _Bool hasUiAlikeDownloadAddr; // @dynamic hasUiAlikeDownloadAddr;
@property(nonatomic) _Bool hasWatermark_p; // @dynamic hasWatermark_p;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) int isH265; // @dynamic isH265;
@property(nonatomic) int isLongVideo; // @dynamic isLongVideo;
@property(copy, nonatomic) NSString *miscDownloadAddrs; // @dynamic miscDownloadAddrs;
@property(nonatomic) _Bool needSetToken; // @dynamic needSetToken;
@property(retain, nonatomic) UrlStruct *newDownloadAddr; // @dynamic newDownloadAddr;
@property(retain, nonatomic) UrlStruct *originCover; // @dynamic originCover;
@property(retain, nonatomic) UrlStruct *playAddr; // @dynamic playAddr;
@property(retain, nonatomic) UrlStruct *playAddr265; // @dynamic playAddr265;
@property(retain, nonatomic) UrlStruct *playAddrH264; // @dynamic playAddrH264;
@property(retain, nonatomic) UrlStruct *playAddrLowbr; // @dynamic playAddrLowbr;
@property(copy, nonatomic) NSString *ratio; // @dynamic ratio;
@property(retain, nonatomic) VideoTag *tag; // @dynamic tag;
@property(retain, nonatomic) PlayTokenAuthStruct *tokenAuth; // @dynamic tokenAuth;
@property(retain, nonatomic) UrlStruct *uiAlikeDownloadAddr; // @dynamic uiAlikeDownloadAddr;
@property(nonatomic) int width; // @dynamic width;

@end
