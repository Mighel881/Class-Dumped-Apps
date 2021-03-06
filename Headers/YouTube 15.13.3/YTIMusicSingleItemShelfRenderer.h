//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIMusicBackgroundOverlayStyle, YTIRenderer;

@interface YTIMusicSingleItemShelfRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @dynamic accessibilityData;
@property(nonatomic) int aspectRatio; // @dynamic aspectRatio;
@property(retain, nonatomic) YTIRenderer *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) YTIMusicBackgroundOverlayStyle *backgroundOverlay; // @dynamic backgroundOverlay;
@property(retain, nonatomic) YTICommand *doubleTapNavigationEndpoint; // @dynamic doubleTapNavigationEndpoint;
@property(nonatomic) _Bool hasAccessibilityData; // @dynamic hasAccessibilityData;
@property(nonatomic) _Bool hasAspectRatio; // @dynamic hasAspectRatio;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasBackgroundOverlay; // @dynamic hasBackgroundOverlay;
@property(nonatomic) _Bool hasDoubleTapNavigationEndpoint; // @dynamic hasDoubleTapNavigationEndpoint;
@property(nonatomic) _Bool hasItemCompanionText; // @dynamic hasItemCompanionText;
@property(nonatomic) _Bool hasItemSubtitle; // @dynamic hasItemSubtitle;
@property(nonatomic) _Bool hasItemTitle; // @dynamic hasItemTitle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasStrapline; // @dynamic hasStrapline;
@property(nonatomic) _Bool hasThumbnailRenderer; // @dynamic hasThumbnailRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *itemCompanionText; // @dynamic itemCompanionText;
@property(retain, nonatomic) YTIFormattedString *itemSubtitle; // @dynamic itemSubtitle;
@property(retain, nonatomic) YTIFormattedString *itemTitle; // @dynamic itemTitle;
@property(retain, nonatomic) YTIRenderer *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) NSMutableArray *potentialThumbnailOverlaysArray; // @dynamic potentialThumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long potentialThumbnailOverlaysArray_Count; // @dynamic potentialThumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *strapline; // @dynamic strapline;
@property(retain, nonatomic) NSMutableArray *subtitleBadgesArray; // @dynamic subtitleBadgesArray;
@property(readonly, nonatomic) unsigned long long subtitleBadgesArray_Count; // @dynamic subtitleBadgesArray_Count;
@property(retain, nonatomic) YTIRenderer *thumbnailRenderer; // @dynamic thumbnailRenderer;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

