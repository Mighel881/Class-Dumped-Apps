//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface HybridLabelStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasRefURL; // @dynamic hasRefURL;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(retain, nonatomic) UrlStruct *image; // @dynamic image;
@property(copy, nonatomic) NSString *refURL; // @dynamic refURL;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSString *textColor; // @dynamic textColor;

@end
