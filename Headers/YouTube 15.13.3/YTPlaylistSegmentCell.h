//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTExpandableCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class MDCInkTouchController, NSString, YTFormattedStringLabel, YTIPlaylistSegmentRenderer, YTSeparatorView;
@protocol GA11YMixinImpl, YTResponder;

@interface YTPlaylistSegmentCell : YTExpandableCell <GA11YMixinEmbedder, YTPageStyling, YTCollectionViewCellProtocol>
{
    YTIPlaylistSegmentRenderer *_renderer;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_indexLabel;
    YTFormattedStringLabel *_annotationLabel;
    YTSeparatorView *_separator;
    MDCInkTouchController *_inkTouchController;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)setEntry:(id)arg1;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)prepareForReuse;
- (void)pageStyleDidChange:(long long)arg1;
- (void)refreshDisclosureArrowLabel;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)entry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

