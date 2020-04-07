//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTSubscribeSwitchContainer-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTFullscreenMetadataHighlightsCellView, YTNotificationMultiToggleButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;
@protocol GA11YMixinImpl, YTResponder;

@interface YTFullscreenMetadataHighlightsChannelCell : YTCollectionViewCell <GA11YMixinEmbedder, YTCollectionViewCellProtocol, YTSubscribeSwitchContainer, YTThumbnailMapping>
{
    id _entry;
    YTFullscreenMetadataHighlightsCellView *_cellView;
    id <YTResponder> _parentResponder;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
    YTNotificationPreferenceToggleButton *_notificationToggleButton;
    YTSubscribeSwitch *_subscribeSwitch;
    id <GA11YMixinImpl> _accessibilityMixin;
    NSString *_cellNavigationTitle;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(copy, nonatomic) NSString *cellNavigationTitle; // @synthesize cellNavigationTitle=_cellNavigationTitle;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton; // @synthesize notificationToggleButton=_notificationToggleButton;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton; // @synthesize notificationMultiToggleButton=_notificationMultiToggleButton;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
