//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWEUserDraftCollectionViewCell : UICollectionViewCell
{
    UIView *_backView;
    UIImageView *_imageView;
    CAGradientLayer *_maskLayer;
    UIImageView *_logoView;
    UILabel *_draftsLabel;
    UILabel *_numberLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *draftsLabel; // @synthesize draftsLabel=_draftsLabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupUI;
- (void)config;
- (id)initWithFrame:(struct CGRect)arg1;

@end
