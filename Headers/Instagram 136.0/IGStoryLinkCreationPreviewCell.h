//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, UIImageView, UILabel;

@interface IGStoryLinkCreationPreviewCell : UICollectionViewCell
{
    UIImageView *_chevronUpImageView;
    UILabel *_textLabel;
    IGTapButton *_moreOptionsButton;
    IGTapButton *_reshareButton;
    UIImageView *_storyPreviewImageView;
}

+ (id)_cropOriginalImage:(id)arg1 fromBottomByPercent:(double)arg2;
@property(readonly, nonatomic) UIImageView *storyPreviewImageView; // @synthesize storyPreviewImageView=_storyPreviewImageView;
- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1;
- (void)configureWithStoryScreenshot:(id)arg1 cropPercentage:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

