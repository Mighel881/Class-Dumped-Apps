//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol YTAttributedLabel;

@interface YTInfoCardMetadataView : UIView
{
    UIView<YTAttributedLabel> *_introTextLabel;
    UIView *_separator;
    UIView<YTAttributedLabel> *_primaryLabel;
    NSMutableArray *_secondaryTextLabels;
    UIView<YTAttributedLabel> *_actionLabel;
    UIView *_externalLinkIconImageView;
    int _appearanceStyle;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (void).cxx_destruct;
- (void)sizeLabelsWithWidth:(double)arg1;
- (double)separatorPadding;
- (double)actionTextLineHeight;
- (double)secondaryTextLineHeight;
- (double)primaryTextLineHeight;
- (long long)lineBreakModeForMultilineLabels;
- (void)sizeView:(id)arg1 withWidth:(double)arg2;
- (id)alignView:(id)arg1 withView:(id)arg2 withVerticalPadding:(double)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareforReuse;
- (void)enableExternalLinkIcon:(_Bool)arg1;
- (void)setActionText:(id)arg1 maxLines:(long long)arg2 typeKind:(long long)arg3 typeVariant:(long long)arg4;
- (void)setActionText:(id)arg1 maxLines:(long long)arg2;
- (void)addSecondaryText:(id)arg1 typeKind:(long long)arg2 typeVariant:(long long)arg3;
- (void)addSecondaryText:(id)arg1;
- (void)setPrimaryText:(id)arg1 maxLines:(long long)arg2 typeKind:(long long)arg3 typeVariant:(long long)arg4;
- (void)setPrimaryText:(id)arg1 maxLines:(long long)arg2;
- (void)setIntroText:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithAppearanceStyle:(int)arg1;

@end
