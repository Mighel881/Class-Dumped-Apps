//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTClientBindingData-Protocol.h>
#import <Module_Framework/YTPlayableEntry-Protocol.h>
#import <Module_Framework/YTVideoViewModel-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIChannelThumbnailSupportedRenderers, YTICommand, YTIFormattedString, YTIInlineMutedTooltipSupportedRenderers, YTIInlinePlaybackMetadataSupportedRenderers, YTIMainAppInlinePlaybackStyle, YTIMenuSupportedRenderers, YTIPromotedVideoCTASupportedRenderers, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData, YTIVideoClientBindingData;

@interface YTIInlinePlaybackRenderer : GPBMessage <YTPlayableEntry, YTVideoViewModel, YTClientBindingData>
{
}

+ (id)descriptor;
- (id)standaloneBadgeSupportedRenderers:(id)arg1;
- (id)hintRenderer;
@property(readonly, nonatomic) _Bool isAd;
@property(readonly, nonatomic) _Bool hasPresentationStyle;
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic) YTIFormattedString *descriptionP;
@property(readonly, nonatomic) _Bool hasDescriptionP;
@property(readonly, nonatomic) _Bool hasOwnerText;
@property(readonly, nonatomic) YTIFormattedString *ownerText;
@property(readonly, nonatomic) _Bool hasRecommendationText;
@property(readonly, nonatomic) YTIFormattedString *recommendationText;
@property(readonly, nonatomic) _Bool hasIsWatched;
@property(readonly, nonatomic) _Bool isWatched;
@property(readonly, nonatomic) _Bool hasUpcomingEventData;
@property(readonly, nonatomic) YTIUpcomingEventData *upcomingEventData;
@property(readonly, nonatomic) _Bool hasSecondaryHeadline;
@property(readonly, nonatomic) YTIFormattedString *secondaryHeadline;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) unsigned long long badgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *badgesArray;
@property(readonly, nonatomic) _Bool hasPublishedTimeText;
@property(readonly, nonatomic) YTIFormattedString *publishedTimeText;
@property(readonly, nonatomic) _Bool hasLongBylineText;
@property(readonly, nonatomic) YTIFormattedString *longBylineText;
@property(readonly, nonatomic) _Bool hasShortBylineText;
@property(readonly, nonatomic) YTIFormattedString *shortBylineText;
@property(readonly, nonatomic) _Bool hasShortViewCountText;
@property(readonly, nonatomic) YTIFormattedString *shortViewCountText;
@property(readonly, nonatomic) _Bool hasMenu;
@property(readonly, nonatomic) YTIMenuSupportedRenderers *menu;
@property(readonly, nonatomic) _Bool hasCtaRenderer;
@property(readonly, nonatomic) YTIPromotedVideoCTASupportedRenderers *ctaRenderer;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *thumbnailBadgesArray;
@property(readonly, nonatomic) _Bool hasViewCountText;
@property(readonly, nonatomic) YTIFormattedString *viewCountText;
@property(readonly, nonatomic) _Bool hasChannelThumbnailSupportedRenderers;
@property(readonly, nonatomic) YTIChannelThumbnailSupportedRenderers *channelThumbnailSupportedRenderers;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) YTIFormattedString *title;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *bindingPlaylistID;
@property(readonly, nonatomic) NSString *bindingVideoID;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *connectionLostThumbnailOverlay; // @dynamic connectionLostThumbnailOverlay;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIRenderer *endorsementRenderer; // @dynamic endorsementRenderer;
@property(nonatomic) _Bool hasConnectionLostThumbnailOverlay; // @dynamic hasConnectionLostThumbnailOverlay;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasEndorsementRenderer; // @dynamic hasEndorsementRenderer;
@property(nonatomic) _Bool hasInlineMutedTooltip; // @dynamic hasInlineMutedTooltip;
@property(nonatomic) _Bool hasInlinePlaybackEndpoint; // @dynamic hasInlinePlaybackEndpoint;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasMetadataRenderer; // @dynamic hasMetadataRenderer;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasRelatedDroppingDelay; // @dynamic hasRelatedDroppingDelay;
@property(nonatomic) _Bool hasRelatedDroppingEndpoint; // @dynamic hasRelatedDroppingEndpoint;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoClientBindingData; // @dynamic hasVideoClientBindingData;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIInlineMutedTooltipSupportedRenderers *inlineMutedTooltip; // @dynamic inlineMutedTooltip;
@property(retain, nonatomic) YTICommand *inlinePlaybackEndpoint; // @dynamic inlinePlaybackEndpoint;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTIMainAppInlinePlaybackStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTIInlinePlaybackMetadataSupportedRenderers *metadataRenderer; // @dynamic metadataRenderer;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) int relatedDroppingDelay; // @dynamic relatedDroppingDelay;
@property(retain, nonatomic) YTICommand *relatedDroppingEndpoint; // @dynamic relatedDroppingEndpoint;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIVideoClientBindingData *videoClientBindingData; // @dynamic videoClientBindingData;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

