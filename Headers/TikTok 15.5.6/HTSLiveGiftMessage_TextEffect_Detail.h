//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage, HTSLiveText, NSString;

@interface HTSLiveGiftMessage_TextEffect_Detail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveImage *background; // @dynamic background;
@property(nonatomic) int duration; // @dynamic duration;
@property(nonatomic) _Bool hasBackground; // @dynamic hasBackground;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) int height; // @dynamic height;
@property(copy, nonatomic) NSString *shadowColor; // @dynamic shadowColor;
@property(nonatomic) int shadowDx; // @dynamic shadowDx;
@property(nonatomic) int shadowDy; // @dynamic shadowDy;
@property(nonatomic) int shadowRadius; // @dynamic shadowRadius;
@property(nonatomic) int start; // @dynamic start;
@property(copy, nonatomic) NSString *strokeColor; // @dynamic strokeColor;
@property(nonatomic) int strokeWidth; // @dynamic strokeWidth;
@property(retain, nonatomic) HTSLiveText *text; // @dynamic text;
@property(nonatomic) int textFontSize; // @dynamic textFontSize;
@property(nonatomic) int width; // @dynamic width;
@property(nonatomic) int x; // @dynamic x;
@property(nonatomic) int y; // @dynamic y;

@end

