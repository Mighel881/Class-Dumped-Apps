//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEStudioBaseCollectionViewCell.h"

@class CALayer, IESCategoryModel, UIImageView, UILabel, UIView;

@interface AWEModernStickerTitleCollectionViewCell : AWEStudioBaseCollectionViewCell
{
    _Bool _ignoreSetSelected;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    unsigned long long _panelType;
    IESCategoryModel *_categoryModel;
    UIView *_yellowDot;
    CALayer *_imageMaskLayer;
}

@property(retain, nonatomic) CALayer *imageMaskLayer; // @synthesize imageMaskLayer=_imageMaskLayer;
@property(retain, nonatomic) UIView *yellowDot; // @synthesize yellowDot=_yellowDot;
@property(retain, nonatomic) IESCategoryModel *categoryModel; // @synthesize categoryModel=_categoryModel;
@property(nonatomic) _Bool ignoreSetSelected; // @synthesize ignoreSetSelected=_ignoreSetSelected;
@property(nonatomic) unsigned long long panelType; // @synthesize panelType=_panelType;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)showYellowDotAnimated:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)configWithCollectionImage;
- (void)configWithTitle:(id)arg1 showYellowDot:(_Bool)arg2;
- (void)configIconImageWithCategoryModel:(id)arg1 showYellowDot:(_Bool)arg2;
- (void)configWithCategoryModel:(id)arg1;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
