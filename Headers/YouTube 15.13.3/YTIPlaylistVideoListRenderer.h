//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderer-Protocol.h>

@class NSData, NSMutableArray, NSString, YTICommand, YTIDatas, YTIRenderer;

@interface YTIPlaylistVideoListRenderer : GPBMessage <YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;

// Remaining properties
@property(retain, nonatomic) YTIDatas *binding; // @dynamic binding;
@property(nonatomic) _Bool canReorder; // @dynamic canReorder;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasBinding; // @dynamic hasBinding;
@property(nonatomic) _Bool hasCanReorder; // @dynamic hasCanReorder;
@property(nonatomic) _Bool hasIsEditable; // @dynamic hasIsEditable;
@property(nonatomic) _Bool hasOnReorderEndpoint; // @dynamic hasOnReorderEndpoint;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasSortFilterMenu; // @dynamic hasSortFilterMenu;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isEditable; // @dynamic isEditable;
@property(retain, nonatomic) NSMutableArray *notificationsArray; // @dynamic notificationsArray;
@property(readonly, nonatomic) unsigned long long notificationsArray_Count; // @dynamic notificationsArray_Count;
@property(retain, nonatomic) YTICommand *onReorderEndpoint; // @dynamic onReorderEndpoint;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) YTIRenderer *sortFilterMenu; // @dynamic sortFilterMenu;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
