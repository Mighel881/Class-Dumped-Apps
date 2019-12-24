//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveImage, NSString;

@interface HTSLiveCommonToastMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundColorEnd; // @dynamic backgroundColorEnd;
@property(copy, nonatomic) NSString *backgroundColorStart; // @dynamic backgroundColorStart;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) _Bool discardable; // @dynamic discardable;
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasTopImg; // @dynamic hasTopImg;
@property(nonatomic) _Bool immediate; // @dynamic immediate;
@property(nonatomic) long long position; // @dynamic position;
@property(nonatomic) _Bool showMongoliaLayer; // @dynamic showMongoliaLayer;
@property(copy, nonatomic) NSString *textColor; // @dynamic textColor;
@property(retain, nonatomic) HTSLiveImage *topImg; // @dynamic topImg;
@property(nonatomic) long long topImgHeight; // @dynamic topImgHeight;
@property(nonatomic) long long topImgWidth; // @dynamic topImgWidth;

@end
