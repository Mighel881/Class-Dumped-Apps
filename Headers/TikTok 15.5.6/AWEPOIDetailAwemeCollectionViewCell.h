//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEPOIDetailAwemeWaterfallAwemeCellProtocol-Protocol.h"

@class AWEAwemeModel, CAGradientLayer, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEPOIDetailAwemeCollectionViewCell : UICollectionViewCell <AWEPOIDetailAwemeWaterfallAwemeCellProtocol>
{
    UIView *_contentContainerView;
    UIView *_liveTypeTagView;
    UILabel *_liveTypeTagLabel;
    CAGradientLayer *_liveTypeBgLayer;
    UIImageView *_coverImageView;
    UIButton *_itemTagButton;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    UILabel *_descriptionLabel;
    UIView *_likeContainerView;
    UIImageView *_likeImageView;
    UILabel *_likeNumberLabel;
    AWEAwemeModel *_model;
}

+ (double)descriptionLabelLineSpacing;
+ (double)descriptionLabelInset;
+ (double)coverImageRatioForAweme:(id)arg1;
+ (double)cellHeightForModel:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *likeNumberLabel; // @synthesize likeNumberLabel=_likeNumberLabel;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) UIView *likeContainerView; // @synthesize likeContainerView=_likeContainerView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) UIButton *itemTagButton; // @synthesize itemTagButton=_itemTagButton;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) CAGradientLayer *liveTypeBgLayer; // @synthesize liveTypeBgLayer=_liveTypeBgLayer;
@property(retain, nonatomic) UILabel *liveTypeTagLabel; // @synthesize liveTypeTagLabel=_liveTypeTagLabel;
@property(retain, nonatomic) UIView *liveTypeTagView; // @synthesize liveTypeTagView=_liveTypeTagView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)prepareForReuse;
- (void)updateCellWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
