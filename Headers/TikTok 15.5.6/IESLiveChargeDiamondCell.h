//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IESLiveGradientView, UIColor, UILabel, UIView;
@protocol IESLiveEnvironment;

@interface IESLiveChargeDiamondCell : UICollectionViewCell
{
    _Bool _inLiveRoom;
    UIView *_containerView;
    UILabel *_diamondLabel;
    UILabel *_priceLabel;
    IESLiveGradientView *_promotionsContainer;
    UILabel *_promotionsLabel;
    UIColor *_diamondStringColor;
    UIColor *_extraDiamondStringColor;
    UIColor *_priceStringColor;
    id <IESLiveEnvironment> _appTarget;
}

+ (struct CGSize)sizeOfCell;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) UIColor *priceStringColor; // @synthesize priceStringColor=_priceStringColor;
@property(retain, nonatomic) UIColor *extraDiamondStringColor; // @synthesize extraDiamondStringColor=_extraDiamondStringColor;
@property(retain, nonatomic) UIColor *diamondStringColor; // @synthesize diamondStringColor=_diamondStringColor;
@property(nonatomic) _Bool inLiveRoom; // @synthesize inLiveRoom=_inLiveRoom;
@property(retain, nonatomic) UILabel *promotionsLabel; // @synthesize promotionsLabel=_promotionsLabel;
@property(retain, nonatomic) IESLiveGradientView *promotionsContainer; // @synthesize promotionsContainer=_promotionsContainer;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *diamondLabel; // @synthesize diamondLabel=_diamondLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)p_priceFromModel:(id)arg1;
- (id)p_diamondFromModel:(id)arg1;
- (void)updateWithModel:(id)arg1 inLiveRoom:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
