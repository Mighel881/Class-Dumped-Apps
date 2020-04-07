//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveMTPushSettingViewModel, MASConstraint, NSArray, UIButton, UILabel;
@protocol HTSLiveDetailRouter;

@interface IESLiveMTPushSettingView : UIView
{
    IESLiveMTPushSettingViewModel *_viewModel;
    UIView *_backgroundMaskView;
    UIView *_whiteBoardView;
    UILabel *_titleView;
    UIButton *_closeButton;
    NSArray *_itemViewList;
    MASConstraint *_bottomConstraint;
    id <HTSLiveDetailRouter> _router;
}

@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) MASConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSArray *itemViewList; // @synthesize itemViewList=_itemViewList;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *whiteBoardView; // @synthesize whiteBoardView=_whiteBoardView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) IESLiveMTPushSettingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)dismissWithAnimation;
- (void)close;
- (void)showWithAnimation;
- (void)layoutSubviews;
- (void)buildItemViewList;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
