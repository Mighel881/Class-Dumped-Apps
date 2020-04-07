//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage, NSString;

@interface HTSLiveBanner : GPBMessage
{
}

+ (id)descriptor;
- (id)mapToBannerModel;

// Remaining properties
@property(nonatomic) long long actionType; // @dynamic actionType;
@property(nonatomic) long long bannerType; // @dynamic bannerType;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) long long frameType; // @dynamic frameType;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) long long height; // @dynamic height;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(retain, nonatomic) HTSLiveImage *image; // @dynamic image;
@property(nonatomic) long long priority; // @dynamic priority;
@property(copy, nonatomic) NSString *schemaURL; // @dynamic schemaURL;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long width; // @dynamic width;

@end
