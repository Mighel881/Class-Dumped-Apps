//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMShareInputViewControllerDelegate-Protocol.h"
#import "AWEIMShareMutiselectUserListViewControllerDelegate-Protocol.h"

@class AWEIMEmoticonWrapperView, AWEIMMessage, AWEIMShareInputViewController, AWEIMShareMutiselectUserListViewController, AWEShareContext, NSString, UIView;
@protocol AWEIMShareMutiselectViewControllerDelegate;

@interface AWEIMShareMutiselectViewController : UIViewController <AWEIMShareMutiselectUserListViewControllerDelegate, AWEIMShareInputViewControllerDelegate>
{
    _Bool _isAuthorShareNotPublicAweme;
    _Bool _isForwardMessage;
    _Bool _isBGColorWhite;
    id <AWEIMShareMutiselectViewControllerDelegate> _delegate;
    AWEIMShareMutiselectUserListViewController *_userListVC;
    AWEShareContext *_shareContext;
    UIView *_shareView;
    UIView *_maskView;
    UIView *_effectView;
    AWEIMShareInputViewController *_shareInputVC;
    UIView *_shareHelperView;
    AWEIMEmoticonWrapperView *_emoticonWrapperView;
    AWEIMMessage *_forwardMessage;
}

@property(nonatomic) _Bool isBGColorWhite; // @synthesize isBGColorWhite=_isBGColorWhite;
@property(nonatomic) _Bool isForwardMessage; // @synthesize isForwardMessage=_isForwardMessage;
@property(retain, nonatomic) AWEIMMessage *forwardMessage; // @synthesize forwardMessage=_forwardMessage;
@property(retain, nonatomic) AWEIMEmoticonWrapperView *emoticonWrapperView; // @synthesize emoticonWrapperView=_emoticonWrapperView;
@property(retain, nonatomic) UIView *shareHelperView; // @synthesize shareHelperView=_shareHelperView;
@property(retain, nonatomic) AWEIMShareInputViewController *shareInputVC; // @synthesize shareInputVC=_shareInputVC;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) _Bool isAuthorShareNotPublicAweme; // @synthesize isAuthorShareNotPublicAweme=_isAuthorShareNotPublicAweme;
@property(retain, nonatomic) AWEShareContext *shareContext; // @synthesize shareContext=_shareContext;
@property(retain, nonatomic) AWEIMShareMutiselectUserListViewController *userListVC; // @synthesize userListVC=_userListVC;
@property(nonatomic) __weak id <AWEIMShareMutiselectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)shareViewHeight;
@property(copy, nonatomic) NSString *shareText; // @dynamic shareText;
- (void)p_saveLastSharedUsers:(id)arg1;
- (void)p_shareToUser;
- (void)switchCreateGroup:(id)arg1;
- (void)shareToUser:(id)arg1;
- (void)dismissEmoticonView;
- (void)showEmoticonView;
- (void)shareInputViewControllerDidClickEmojiPanelEntranceBtn:(id)arg1;
- (void)transferToShareListWithItems:(id)arg1;
- (void)mutiselectUserListVCSelectMore:(id)arg1;
- (void)mutiselectUserListVC:(id)arg1 selectShareModel:(id)arg2;
- (void)mutiselectUserListVCCancelShare:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_removeKVO;
- (void)p_addKVO;
- (void)p_handlePanKeyboardMaskViewGes:(id)arg1;
- (void)p_handleTapKeyboardMaskViewGes:(id)arg1;
- (void)p_handleShareControllerDismissNoti:(id)arg1;
- (void)p_handleKeyboardHideNoti:(id)arg1;
- (void)p_handleKeyboardShowNoti:(id)arg1;
- (void)p_addObservers;
- (void)p_setupUI;
- (void)p_updateShareViewLayer;
- (void)viewSafeAreaInsetsDidChange;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithShareContext:(id)arg1 shareModel:(id)arg2 dataSource:(id)arg3 isBGColorWhite:(_Bool)arg4 titleAttributedText:(id)arg5 hasMore:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
