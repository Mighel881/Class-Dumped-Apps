//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEIMChatDetailUserInfoView, AWEIMUser, AWESettingSwitch, NSString, TIMOConversation, UIButton, UIImageView, UILabel;

@interface AWEIMChatDetailViewController : UIViewController <AWEUserMessage, BTDRouterViewControllerProtocol>
{
    _Bool _stranger;
    NSString *_userID;
    NSString *_secUserID;
    NSString *_conversationID;
    AWEIMChatDetailUserInfoView *_userInfoView;
    UILabel *_stickOnTopLabel;
    AWESettingSwitch *_stickOnTopSwitch;
    UILabel *_muteLabel;
    AWESettingSwitch *_muteSwitch;
    UIButton *_blockBtn;
    UIButton *_reportBtn;
    UIImageView *_blockBtnArrowView;
    UIImageView *_reportBtnArrowView;
    AWEIMUser *_user;
    TIMOConversation *_conversation;
    long long _blockStatus;
}

+ (id)rightArrowView;
+ (void)__awe__codeRunnerRun_66;
@property(nonatomic) long long blockStatus; // @synthesize blockStatus=_blockStatus;
@property(retain, nonatomic) TIMOConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) AWEIMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UIImageView *reportBtnArrowView; // @synthesize reportBtnArrowView=_reportBtnArrowView;
@property(retain, nonatomic) UIImageView *blockBtnArrowView; // @synthesize blockBtnArrowView=_blockBtnArrowView;
@property(retain, nonatomic) UIButton *reportBtn; // @synthesize reportBtn=_reportBtn;
@property(retain, nonatomic) UIButton *blockBtn; // @synthesize blockBtn=_blockBtn;
@property(retain, nonatomic) AWESettingSwitch *muteSwitch; // @synthesize muteSwitch=_muteSwitch;
@property(retain, nonatomic) UILabel *muteLabel; // @synthesize muteLabel=_muteLabel;
@property(retain, nonatomic) AWESettingSwitch *stickOnTopSwitch; // @synthesize stickOnTopSwitch=_stickOnTopSwitch;
@property(retain, nonatomic) UILabel *stickOnTopLabel; // @synthesize stickOnTopLabel=_stickOnTopLabel;
@property(retain, nonatomic) AWEIMChatDetailUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(copy, nonatomic) NSString *secUserID; // @synthesize secUserID=_secUserID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool stranger; // @synthesize stranger=_stranger;
- (void).cxx_destruct;
- (void)handleBroadcastNotification:(id)arg1;
- (void)_addObservers;
- (void)p_setupUI;
- (void)p_refreshBlockUI;
- (void)p_refreshUI;
- (void)didFinishUnBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)trackEventWithSwitchName:(id)arg1 isOn:(_Bool)arg2;
- (void)reportBtnClicked:(id)arg1;
- (void)blockBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)userInfoViewTapped:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
