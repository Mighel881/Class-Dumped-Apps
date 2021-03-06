//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuBaseTableViewCell.h"

@class GIPNetworkImageView, NSLayoutConstraint, UILabel;

@interface ASTMenuTitleIconTableViewCell : ASTMenuBaseTableViewCell
{
    NSLayoutConstraint *_iconImageHeightConstraint;
    NSLayoutConstraint *_iconImageWidthConstraint;
    NSLayoutConstraint *_iconImageBottomMarginConstraint;
    NSLayoutConstraint *_titleLeftMarginConstraint;
    NSLayoutConstraint *_titleTopMarginConstraint;
    NSLayoutConstraint *_titleBottomMarginConstraint;
    NSLayoutConstraint *_titleIconSpaceConstraint;
    UILabel *_titleLabel;
    GIPNetworkImageView *_iconImageView;
    double _leftMargin;
    double _topMargin;
    double _bottomMargin;
    double _titleIconSpace;
    struct CGSize _iconImageViewSize;
}

@property(nonatomic) struct CGSize iconImageViewSize; // @synthesize iconImageViewSize=_iconImageViewSize;
@property(nonatomic) double titleIconSpace; // @synthesize titleIconSpace=_titleIconSpace;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(readonly, nonatomic) GIPNetworkImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (_Bool)accessibilityElementsHidden;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)addCustomSubViews;
- (void)prepareForReuse;

@end

