//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class UrlStruct;

@interface ImageInfoStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasLabelLarge; // @dynamic hasLabelLarge;
@property(nonatomic) _Bool hasLabelThumb; // @dynamic hasLabelThumb;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) UrlStruct *labelLarge; // @dynamic labelLarge;
@property(retain, nonatomic) UrlStruct *labelThumb; // @dynamic labelThumb;
@property(nonatomic) int width; // @dynamic width;

@end
