//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTCustomInsetsCell-Protocol.h"
#import "YTScrollFocusItem-Protocol.h"
#import "YTSlideIndicatorThumbnailsViewDelegate-Protocol.h"

@class GIMMe, NSArray, NSString, UIColor, UIView, YTHorizontalButtonListView, YTICarouselItemRenderer, YTImageView, YTSlideIndicatorDotsView, YTSlideIndicatorThumbnailsView;
@protocol YTCarouselItemCellDelegate, YTResponder, YTScrollFocusItem, YTScrollFocusUpdater;

@interface YTCarouselItemCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTCustomInsetsCell, YTScrollFocusItem, YTSlideIndicatorThumbnailsViewDelegate>
{
    UIView *_headerBannerTintView;
    YTImageView *_headerBannerGradientView;
    struct CGSize _lastSize;
    YTICarouselItemRenderer *_entry;
    YTSlideIndicatorDotsView *_dotView;
    YTSlideIndicatorThumbnailsView *_thumbnailsView;
    UIView *_separator;
    YTHorizontalButtonListView *_buttonListView;
    UIView *_accessibilityWrapperView;
    _Bool _fullscreen;
    id <YTResponder> _parentResponder;
    id <YTScrollFocusItem> _scrollFocusItemDelegate;
    id <YTScrollFocusUpdater> _scrollFocusUpdater;
    GIMMe *_gimme;
    UIView *_carouselView;
    id <YTCarouselItemCellDelegate> _delegate;
    double _topOffset;
    UIColor *_headerBannerTintColor;
}

+ (struct UIEdgeInsets)customSectionInsetForInset:(struct UIEdgeInsets)arg1;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (double)aspectRatioForEntry:(id)arg1;
+ (double)aspectRatioForRatios:(id)arg1;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(retain, nonatomic) UIColor *headerBannerTintColor; // @synthesize headerBannerTintColor=_headerBannerTintColor;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(nonatomic) __weak id <YTCarouselItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTScrollFocusUpdater> scrollFocusUpdater; // @synthesize scrollFocusUpdater=_scrollFocusUpdater;
@property(nonatomic) __weak id <YTScrollFocusItem> scrollFocusItemDelegate; // @synthesize scrollFocusItemDelegate=_scrollFocusItemDelegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)layoutDotViewWithStyle:(int)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)updateSlideIndicatorView;
- (void)createDotViewForStyle:(int)arg1;
- (void)addHeaderBannerTintViewIfNeeded;
- (void)addHeaderBannerGradientViewIfNeeded;
- (void)addHeaderBannerIfNeeded;
- (void)styleCarousel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)didSelectThumbnailAtIndex:(unsigned long long)arg1;
- (void)prepareForReuse;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)scrollFocusDidChangeWithContext:(id)arg1;
- (_Bool)isScrollFocusSelectableForTypes:(id)arg1;
@property(readonly, nonatomic) long long scrollFocusItemType;
@property(readonly, nonatomic) struct CGSize preferredSize;
@property(readonly, nonatomic) NSArray *buttons;
@property(readonly, nonatomic) NSArray *paginationThumbnailViews;
@property(readonly, nonatomic) double pageIndicatorWidth;
@property(readonly, nonatomic) double bottomPanelHeight;
@property(nonatomic) long long currentPageIndex;
@property(nonatomic) long long numberOfPages;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hiddenEnclosed;
@property(readonly) Class superclass;

@end

