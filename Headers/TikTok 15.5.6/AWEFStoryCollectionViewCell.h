//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEFStoryItemModel, CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWEFStoryCollectionViewCell : UICollectionViewCell
{
    UIView *_badgeView;
    UILabel *_nameLabel;
    CAGradientLayer *_colorLayer;
    UIImageView *_avatarImageView;
    AWEFStoryItemModel *_model;
}

+ (struct CGSize)cellSize;
@property(retain, nonatomic) AWEFStoryItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) CAGradientLayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)updateBadgeStateIfNeed;
- (void)updateWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupContents;
- (id)initWithFrame:(struct CGRect)arg1;

@end
