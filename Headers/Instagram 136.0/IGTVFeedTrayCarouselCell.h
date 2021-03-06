//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, IGTVBlurredOverlayView, IGTVVideoPreviewCoverImageContainerView, IGTVVideoPreviewDetailsView;
@protocol IGTVFeedTrayCarouselCellDelegate;

@interface IGTVFeedTrayCarouselCell : UICollectionViewCell
{
    IGTVVideoPreviewCoverImageContainerView *_coverImageContainerView;
    IGTVVideoPreviewDetailsView *_detailsView;
    IGTVBlurredOverlayView *_blurredOverlayView;
    CALayer *_highlightOverlay;
    _Bool _showRoundCorner;
    id <IGTVFeedTrayCarouselCellDelegate> _delegate;
}

+ (struct CGSize)preferredSize;
@property(nonatomic) __weak id <IGTVFeedTrayCarouselCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_longPressDetected:(id)arg1;
- (void)setBlurOverlayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithFeedItem:(id)arg1 seenDuration:(double)arg2;
- (void)configureWithFeedItem:(id)arg1 showSeriesTag:(_Bool)arg2 seenDuration:(double)arg3 showRoundCorner:(_Bool)arg4 analyticsModule:(id)arg5;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

