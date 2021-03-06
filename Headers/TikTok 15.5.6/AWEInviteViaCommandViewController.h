//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEInviteViaCommandViewControllerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAnimatedButton, AWEInviteFriendQRCodeContentView, AWEInviteViaCommandStatusView, AWEShareTokenView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEInviteViaCommandViewController : UIViewController <UIGestureRecognizerDelegate, AWEInviteViaCommandViewControllerProtocol>
{
    _Bool _saveImageFailed;
    _Bool _isNotDetermined;
    unsigned long long _commandType;
    NSString *_token;
    long long _shareType;
    UIView *_contentView;
    UIButton *_closeButton;
    AWEInviteFriendQRCodeContentView *_QRCodeView;
    UIImageView *_avatarImageView;
    UILabel *_tipLabel;
    AWEShareTokenView *_tokenView;
    AWEInviteViaCommandStatusView *_statusView;
    AWEAnimatedButton *_wechatButton;
    AWEAnimatedButton *_qqButton;
    NSString *_customTipText;
    NSString *_customWebURL;
    NSString *_customCopyContent;
    unsigned long long _customChannelType;
}

@property(nonatomic) unsigned long long customChannelType; // @synthesize customChannelType=_customChannelType;
@property(copy, nonatomic) NSString *customCopyContent; // @synthesize customCopyContent=_customCopyContent;
@property(copy, nonatomic) NSString *customWebURL; // @synthesize customWebURL=_customWebURL;
@property(copy, nonatomic) NSString *customTipText; // @synthesize customTipText=_customTipText;
@property(retain, nonatomic) AWEAnimatedButton *qqButton; // @synthesize qqButton=_qqButton;
@property(retain, nonatomic) AWEAnimatedButton *wechatButton; // @synthesize wechatButton=_wechatButton;
@property(retain, nonatomic) AWEInviteViaCommandStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) AWEShareTokenView *tokenView; // @synthesize tokenView=_tokenView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) AWEInviteFriendQRCodeContentView *QRCodeView; // @synthesize QRCodeView=_QRCodeView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(nonatomic) _Bool isNotDetermined; // @synthesize isNotDetermined=_isNotDetermined;
@property(nonatomic) _Bool saveImageFailed; // @synthesize saveImageFailed=_saveImageFailed;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
- (void).cxx_destruct;
- (id)shareButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)statusViewTapped;
- (void)qqButtonTapped:(id)arg1;
- (void)wechatButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)saveQRCodeEvent;
- (void)generateQRCodeEvent;
- (void)p_openTencentApp;
- (void)checkPhotoAuthorizationStatus;
- (void)QRCodeImageCompletionWithUrlList:(id)arg1 error:(id)arg2 placeholder:(id)arg3;
- (void)p_fetchQRCodeImage;
- (void)p_fetchToken;
- (void)p_updateUIWithStatusType:(unsigned long long)arg1;
- (void)p_updateButtonsTitle;
- (void)p_setupUI;
- (void)show;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCommandType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

