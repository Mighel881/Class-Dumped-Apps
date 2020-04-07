//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEAwemeModel, AWEDetailCellTagLabel, AWEGradientBackgroundLabelView, AWEPostVideoMaskView, AWEUICellMaskView, CAGradientLayer, CALayer, UIImageView, UILabel, UIView;
@protocol AWEProhibitedContentViewProtocol;

@interface AWEUserWorkCollectionViewCell : UICollectionViewCell
{
    _Bool _enableUseCurrentFlag;
    _Bool _isMine;
    _Bool _usingDynamicCover;
    UIImageView *_imageView;
    UIImageView *_iconView;
    UILabel *_countLabel;
    UIImageView *_stateImageView;
    UIView<AWEProhibitedContentViewProtocol> *_prohibitedContentView;
    UILabel *_prohibitedContentLabel;
    UIImageView *_privacyIconImageView;
    AWEDetailCellTagLabel *_topLabel;
    UIImageView *_mediaTypeView;
    AWEPostVideoMaskView *_currentVideoMaskView;
    AWEGradientBackgroundLabelView *_gradientView;
    long long _type;
    AWEAwemeModel *_model;
    CALayer *_prohibitedContentLayer;
    CAGradientLayer *_maskLayer;
    UILabel *_starAtlasTagLabel;
    double _imageRequestSentinel;
    AWEUICellMaskView *_cellMaskView;
}

+ (id)identifier;
@property(retain, nonatomic) AWEUICellMaskView *cellMaskView; // @synthesize cellMaskView=_cellMaskView;
@property(nonatomic) double imageRequestSentinel; // @synthesize imageRequestSentinel=_imageRequestSentinel;
@property(retain, nonatomic) UILabel *starAtlasTagLabel; // @synthesize starAtlasTagLabel=_starAtlasTagLabel;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *prohibitedContentLayer; // @synthesize prohibitedContentLayer=_prohibitedContentLayer;
@property(nonatomic) _Bool usingDynamicCover; // @synthesize usingDynamicCover=_usingDynamicCover;
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) AWEGradientBackgroundLabelView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) _Bool enableUseCurrentFlag; // @synthesize enableUseCurrentFlag=_enableUseCurrentFlag;
@property(retain, nonatomic) AWEPostVideoMaskView *currentVideoMaskView; // @synthesize currentVideoMaskView=_currentVideoMaskView;
@property(retain, nonatomic) UIImageView *mediaTypeView; // @synthesize mediaTypeView=_mediaTypeView;
@property(retain, nonatomic) AWEDetailCellTagLabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIImageView *privacyIconImageView; // @synthesize privacyIconImageView=_privacyIconImageView;
@property(retain, nonatomic) UILabel *prohibitedContentLabel; // @synthesize prohibitedContentLabel=_prohibitedContentLabel;
@property(retain, nonatomic) UIView<AWEProhibitedContentViewProtocol> *prohibitedContentView; // @synthesize prohibitedContentView=_prohibitedContentView;
@property(retain, nonatomic) UIImageView *stateImageView; // @synthesize stateImageView=_stateImageView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)clearAnimatedImageBuffer;
- (void)hideIconHideLayer;
- (void)hideIconShowLayer;
- (void)layoutSubviews;
- (void)_setupUI;
- (void)updateCellMaskView;
- (void)updateOtherSubviews;
- (void)updateIconAndCount;
- (void)updateCoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)configWithModel:(id)arg1 isMine:(_Bool)arg2;
- (void)configWithType:(long long)arg1;
- (void)markCurrentVideo:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
