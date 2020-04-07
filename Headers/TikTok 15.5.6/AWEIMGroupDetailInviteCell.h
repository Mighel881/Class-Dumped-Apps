//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface AWEIMGroupDetailInviteCell : UITableViewCell
{
    CDUnknownBlockType _inviteBlock;
    UILabel *_titleLabel;
    UIButton *_wechatButton;
    UIButton *_qqButton;
}

@property(retain, nonatomic) UIButton *qqButton; // @synthesize qqButton=_qqButton;
@property(retain, nonatomic) UIButton *wechatButton; // @synthesize wechatButton=_wechatButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType inviteBlock; // @synthesize inviteBlock=_inviteBlock;
- (void).cxx_destruct;
- (void)updateButton:(id)arg1;
- (void)wechatButtonTapped:(id)arg1;
- (void)qqButtonTapped:(id)arg1;
- (void)setupUI;
- (id)init;

@end
