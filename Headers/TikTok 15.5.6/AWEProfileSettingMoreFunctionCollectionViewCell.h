//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWESettingItemModel, UIImageView, UILabel, UIView;

@interface AWEProfileSettingMoreFunctionCollectionViewCell : UICollectionViewCell
{
    AWESettingItemModel *_itemModel;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView *_roundDotView;
}

+ (id)identifier;
@property(retain, nonatomic) UIView *roundDotView; // @synthesize roundDotView=_roundDotView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) AWESettingItemModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)p_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
