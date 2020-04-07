//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTSwipeableTableViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell-Protocol.h"
#import "SPTDimensionalTableViewCell-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class NSString, SPTBadgeView, UIFont, UIImage, UIView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTTableViewCell : SPTSwipeableTableViewCell <SPTThemableView, SPTCellImageLoadingContextCompatibleCell, SPTDimensionalTableViewCell>
{
    _Bool _active;
    _Bool _disabled;
    _Bool _interactive;
    _Bool _prefixViewRemovesImage;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIView *_prefixView;
    UIView *_footerView;
    long long _imageStyle;
    long long _placeholderImageContentMode;
    long long _imageContentMode;
    UIImage *_placeholderImage;
    UIImage *_image;
    SPTBadgeView *_imageBadge;
    double _detailTextLabelWidth;
    long long _subtitleStyle;
    UIView *_subtitleAccessoryView;
    long long _tableViewThemeStyle;
    double _numberOfLinesForTitle;
}

+ (double)preferredHeight;
@property(nonatomic) double numberOfLinesForTitle; // @synthesize numberOfLinesForTitle=_numberOfLinesForTitle;
@property(nonatomic) long long tableViewThemeStyle; // @synthesize tableViewThemeStyle=_tableViewThemeStyle;
@property(nonatomic) _Bool prefixViewRemovesImage; // @synthesize prefixViewRemovesImage=_prefixViewRemovesImage;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(nonatomic) long long subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(nonatomic) double detailTextLabelWidth; // @synthesize detailTextLabelWidth=_detailTextLabelWidth;
@property(retain, nonatomic) SPTBadgeView *imageBadge; // @synthesize imageBadge=_imageBadge;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(nonatomic) long long placeholderImageContentMode; // @synthesize placeholderImageContentMode=_placeholderImageContentMode;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *prefixView; // @synthesize prefixView=_prefixView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)totalIndentationWidth;
- (double)accessoryViewCellSpace;
- (struct CGRect)frameForAccessoryView;
- (_Bool)hasImage;
- (_Bool)shouldShowImage;
@property(readonly, nonatomic) UIFont *detailTextLabelFont;
@property(copy, nonatomic) NSString *subtitle;
@property(nonatomic) long long maximumNumberOfLinesInTitle;
@property(copy, nonatomic) NSString *title;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)updateImageContentMode;
- (id)imageToShow;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, getter=isShuffleTrackCell) _Bool shuffleTrackCell;

// Remaining properties
@property(nonatomic) long long accessoryType; // @dynamic accessoryType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
