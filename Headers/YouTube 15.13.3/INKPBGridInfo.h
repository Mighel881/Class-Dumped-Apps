//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBPoint, NSString;

@interface INKPBGridInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOrigin; // @dynamic hasOrigin;
@property(nonatomic) _Bool hasRgbaMultiplier; // @dynamic hasRgbaMultiplier;
@property(nonatomic) _Bool hasSizeWorld; // @dynamic hasSizeWorld;
@property(nonatomic) _Bool hasUri; // @dynamic hasUri;
@property(retain, nonatomic) INKPBPoint *origin; // @dynamic origin;
@property(nonatomic) unsigned int rgbaMultiplier; // @dynamic rgbaMultiplier;
@property(nonatomic) float sizeWorld; // @dynamic sizeWorld;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;

@end
