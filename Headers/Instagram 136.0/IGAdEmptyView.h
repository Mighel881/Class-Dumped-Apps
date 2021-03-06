//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol IGAdEmptyViewDelegate;

@interface IGAdEmptyView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_button;
    id <IGAdEmptyViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGAdEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_didTapAdEmptyViewButton;
- (void)_setupButtonWithButtonConfig:(id)arg1;
- (void)_setupSubtitleLabelWithString:(id)arg1;
- (void)_setupTitleLabelWithString:(id)arg1;
- (void)_setupImageViewWithImageAsset:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 buttonConfig:(id)arg4 imageAsset:(unsigned long long)arg5;

@end

