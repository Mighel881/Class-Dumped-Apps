//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWELikeUserListHeaderView : UIView
{
    _Bool _isBGColorWhite;
    UILabel *_countLabel;
    UIButton *_closeBtn;
    UIButton *_tipButton;
}

@property(nonatomic) _Bool isBGColorWhite; // @synthesize isBGColorWhite=_isBGColorWhite;
@property(retain, nonatomic) UIButton *tipButton; // @synthesize tipButton=_tipButton;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
