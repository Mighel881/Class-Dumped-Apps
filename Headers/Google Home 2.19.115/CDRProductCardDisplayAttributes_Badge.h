//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRIcon, GTPColor, NSString;

@interface CDRProductCardDisplayAttributes_Badge : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int badgeIconOneOfCase; // @dynamic badgeIconOneOfCase;
@property(retain, nonatomic) GTPColor *borderColor; // @dynamic borderColor;
@property(retain, nonatomic) GTPColor *color; // @dynamic color;
@property(nonatomic) _Bool hasBorderColor; // @dynamic hasBorderColor;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) int icon; // @dynamic icon;
@property(retain, nonatomic) CDRIcon *iconImage; // @dynamic iconImage;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) GTPColor *textColor; // @dynamic textColor;

@end

