//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface AWEHotSpotTitleView : UIView
{
    CDUnknownBlockType _expandButtonTappedBlock;
    UILabel *_titleLabel;
    UILabel *_despLabel;
    UIButton *_expandButton;
    UIView *_containerView;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UILabel *despLabel; // @synthesize despLabel=_despLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType expandButtonTappedBlock; // @synthesize expandButtonTappedBlock=_expandButtonTappedBlock;
- (void).cxx_destruct;
- (void)expandButtonTapped;
- (void)configureWithModel:(id)arg1;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
