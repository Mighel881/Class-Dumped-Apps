//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OGLGMAccountSelectorCellBase.h>

@class MDCChipView, MDCProgressView, UIImageView, UILabel, UIView;
@protocol OGLAccountSelectorCardItem;

@interface OGLAccountSelectorCardBaseCell : OGLGMAccountSelectorCellBase
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_leadingImageView;
    UIView *_leadingImageBackgroundView;
    UIImageView *_trailingImageView;
    MDCChipView *_actionChip;
    MDCProgressView *_progressView;
    UILabel *_progressInformationLabel;
    id <OGLAccountSelectorCardItem> _cardItem;
}

@property(retain, nonatomic) id <OGLAccountSelectorCardItem> cardItem; // @synthesize cardItem=_cardItem;
@property(retain, nonatomic) UILabel *progressInformationLabel; // @synthesize progressInformationLabel=_progressInformationLabel;
@property(retain, nonatomic) MDCProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MDCChipView *actionChip; // @synthesize actionChip=_actionChip;
@property(retain, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(retain, nonatomic) UIView *leadingImageBackgroundView; // @synthesize leadingImageBackgroundView=_leadingImageBackgroundView;
@property(retain, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1;

@end
