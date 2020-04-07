//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTClientBindingData-Protocol.h>
#import <Module_Framework/YTInnerTubePlaylist-Protocol.h>

@class NSData, NSMutableArray, NSString, YTICommand, YTIFeedEntryActionMenuSupportedRenderers, YTIFeedEntrySupportedRenderers, YTIFormattedString, YTIIcon, YTIMenuSupportedRenderers, YTIThumbnailDetails, YTIVideoClientBindingData;

@interface YTIFeedEntryRenderer : GPBMessage <YTInnerTubePlaylist, YTClientBindingData>
{
}

+ (id)descriptor;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
- (id)videoId;
@property(readonly, nonatomic) NSString *playlistId;
- (_Bool)hasNavigationEndpoint;
- (id)navigationEndpoint;
@property(readonly, nonatomic) NSString *bindingPlaylistID;
@property(readonly, nonatomic) NSString *bindingVideoID;

// Remaining properties
@property(retain, nonatomic) YTIFeedEntryActionMenuSupportedRenderers *actionMenu; // @dynamic actionMenu;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *dismissal; // @dynamic dismissal;
@property(nonatomic) _Bool hasActionMenu; // @dynamic hasActionMenu;
@property(nonatomic) _Bool hasDismissal; // @dynamic hasDismissal;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasOwnerEndpoint; // @dynamic hasOwnerEndpoint;
@property(nonatomic) _Bool hasPostText; // @dynamic hasPostText;
@property(nonatomic) _Bool hasTimeText; // @dynamic hasTimeText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoClientBindingData; // @dynamic hasVideoClientBindingData;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIFeedEntrySupportedRenderers *item; // @dynamic item;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *ownerEndpoint; // @dynamic ownerEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *ownerThumbnail; // @dynamic ownerThumbnail;
@property(retain, nonatomic) YTIFormattedString *postText; // @dynamic postText;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *timeText; // @dynamic timeText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIIcon *titleIcon; // @dynamic titleIcon;
@property(readonly, nonatomic) int titleImageOneOfCase; // @dynamic titleImageOneOfCase;
@property(retain, nonatomic) YTIVideoClientBindingData *videoClientBindingData; // @dynamic videoClientBindingData;

@end
