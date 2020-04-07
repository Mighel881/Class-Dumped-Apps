//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAnimatedButton, UIImageView, UILabel;

@interface AWEStickPointGuideView : UIView
{
    UIView *_whitePanelView;
    UIImageView *_hintImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    AWEAnimatedButton *_confirmButton;
}

+ (id)fromTypeKeys;
+ (void)p_markShowGudieForType:(unsigned long long)arg1;
+ (_Bool)needShowGuideForType:(unsigned long long)arg1;
+ (void)showOnViewIfNeeded:(id)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) AWEAnimatedButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *hintImageView; // @synthesize hintImageView=_hintImageView;
@property(retain, nonatomic) UIView *whitePanelView; // @synthesize whitePanelView=_whitePanelView;
- (void).cxx_destruct;
- (void)p_dismiss;
- (void)p_show;
- (void)p_handlePanGesture:(id)arg1;
- (void)p_handleTapGesture:(id)arg1;
- (void)p_didClickConfirmButton;
- (void)p_setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
