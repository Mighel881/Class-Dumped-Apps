//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, YYLabel;

@interface AWECommerceAnchorTableViewCell : UITableViewCell
{
    _Bool _disableAndGrey;
    CDUnknownBlockType _addAIAnchorBlock;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    YYLabel *_betaLabel;
    UIView *_lineView;
    UIButton *_addAnchorButton;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UIButton *addAnchorButton; // @synthesize addAnchorButton=_addAnchorButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YYLabel *betaLabel; // @synthesize betaLabel=_betaLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType addAIAnchorBlock; // @synthesize addAIAnchorBlock=_addAIAnchorBlock;
@property(nonatomic) _Bool disableAndGrey; // @synthesize disableAndGrey=_disableAndGrey;
- (void).cxx_destruct;
- (void)addAnchorTapped:(id)arg1;
- (void)updateCellContentWith:(id)arg1;
- (void)buildViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
