//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWEPOIAlertView : UIView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_detailInfoLabel;
    UIButton *_primaryActionButton;
    UIButton *_secondaryActionButton;
    UIButton *_closeButton;
    CDUnknownBlockType _primaryActionBlock;
    CDUnknownBlockType _secondaryActionBlock;
    CDUnknownBlockType _dismissActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissActionBlock; // @synthesize dismissActionBlock=_dismissActionBlock;
@property(copy, nonatomic) CDUnknownBlockType secondaryActionBlock; // @synthesize secondaryActionBlock=_secondaryActionBlock;
@property(copy, nonatomic) CDUnknownBlockType primaryActionBlock; // @synthesize primaryActionBlock=_primaryActionBlock;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(retain, nonatomic) UIButton *primaryActionButton; // @synthesize primaryActionButton=_primaryActionButton;
@property(retain, nonatomic) UILabel *detailInfoLabel; // @synthesize detailInfoLabel=_detailInfoLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)handleSecondaryActionButtonTapped;
- (void)handlePrimaryActioButtonTapped;
- (void)dismiss;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)show;
- (void)updateWithTitle:(id)arg1 infoText:(id)arg2 detailInfoText:(id)arg3 primaryActionText:(id)arg4 primaryAction:(CDUnknownBlockType)arg5 secondaryActionText:(id)arg6 secondaryAction:(CDUnknownBlockType)arg7 dismissAction:(CDUnknownBlockType)arg8;
- (id)initWithFrame:(struct CGRect)arg1;

@end
