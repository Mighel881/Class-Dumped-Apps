//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIRenderer;

@interface YTIElementsAdCtaRenderer : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSMutableArray *stateTriggersArray;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *content; // @dynamic content;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasShowInPortraitMode; // @dynamic hasShowInPortraitMode;
@property(nonatomic) _Bool hasShowPostAdVideo; // @dynamic hasShowPostAdVideo;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool showInPortraitMode; // @dynamic showInPortraitMode;
@property(nonatomic) _Bool showPostAdVideo; // @dynamic showPostAdVideo;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
