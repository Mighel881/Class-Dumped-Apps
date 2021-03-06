//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWECommentGiphySearchResultDelegate-Protocol.h"
#import "AWECommentSearchHelperDelegate-Protocol.h"
#import "AWEEmoticonKeyboardHelperDelegate-Protocol.h"
#import "AWEGrowingTextViewDelegate-Protocol.h"
#import "AWETextInputControllerDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWEAwemeModel, AWEBubble, AWEBulletScreenMiniEmoticonView, AWECommentGiphySearchResultManager, AWECommentListInputExtraView, AWECommentMiniEmoticonModel, AWECommentMiniEmoticonPanelView, AWECommentSearchHelper, AWECommentlistInputHintView, AWEEmoticonKeyboardHelper, AWEGrowingTextView, AWEIMStickerModel, NSDate, NSString, UIButton, UIImage, UIImageView, UITextField;
@protocol AWECommentListInputViewDelegate, AWEIMEmoticonContainerViewProtocol, AWETextInputControllerProtocol;

@interface AWECommentListInputView : UIView <AWEGrowingTextViewDelegate, AWETextInputControllerDelegate, AWEEmoticonKeyboardHelperDelegate, UITextFieldDelegate, AWECommentGiphySearchResultDelegate, AWECommentSearchHelperDelegate, AWEUserMessage>
{
    _Bool _isAting;
    _Bool _showEmoji;
    _Bool _isShowingKeyboard;
    _Bool _needNewStyle;
    _Bool _showVideoReplyButton;
    unsigned long long _inputMode;
    unsigned long long _inputViewType;
    id <AWETextInputControllerProtocol> _textInputController;
    id <AWECommentListInputViewDelegate> _delegate;
    AWECommentSearchHelper *_searchHelper;
    CDUnknownBlockType _risingInputViewAfterAtBlock;
    CDUnknownBlockType _repostSelectedButtonClickAction;
    AWEAwemeModel *_model;
    NSString *_referString;
    AWEGrowingTextView *_textView;
    UITextField *_gifSearchingTextField;
    UIView *_inputContainerView;
    UIButton *_atBtn;
    UIButton *_emoticonButton;
    AWECommentMiniEmoticonPanelView *_miniEmoticonPanel;
    double _keyboardHeight;
    AWEIMStickerModel *_selectedSticker;
    UIView *_keyboardMaskView;
    AWECommentlistInputHintView *_hintView;
    UIView *_separateLine;
    UIView *_lineView;
    UIButton *_videoReplyButton;
    UIView<AWEIMEmoticonContainerViewProtocol> *_emoticonView;
    AWECommentListInputExtraView *_repostView;
    UIButton *_cancelGifSearchingButton;
    UIImageView *_selectedGifImgView;
    UIButton *_removeSelectedGifImgBtn;
    UIImageView *_avatarImageView;
    AWEBulletScreenMiniEmoticonView *_quickEmoticonBtn;
    AWECommentMiniEmoticonModel *_emoticonModel;
    NSDate *_lastTapEmojiDate;
    UIView *_miniEmoticonPanelLineView;
    AWEBubble *_videoReplyTip;
    AWEEmoticonKeyboardHelper *_emoticonKeyboardHelper;
    unsigned long long _inputSource;
    AWECommentGiphySearchResultManager *_gifSearchManager;
    NSString *_commentEggPlaceholder;
    UIImage *_quickEmojiImage;
    struct CGRect _textBoundingRect;
}

@property(nonatomic) _Bool showVideoReplyButton; // @synthesize showVideoReplyButton=_showVideoReplyButton;
@property(nonatomic) _Bool needNewStyle; // @synthesize needNewStyle=_needNewStyle;
@property(retain, nonatomic) UIImage *quickEmojiImage; // @synthesize quickEmojiImage=_quickEmojiImage;
@property(copy, nonatomic) NSString *commentEggPlaceholder; // @synthesize commentEggPlaceholder=_commentEggPlaceholder;
@property(retain, nonatomic) AWECommentGiphySearchResultManager *gifSearchManager; // @synthesize gifSearchManager=_gifSearchManager;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(nonatomic) struct CGRect textBoundingRect; // @synthesize textBoundingRect=_textBoundingRect;
@property(nonatomic) unsigned long long inputSource; // @synthesize inputSource=_inputSource;
@property(retain, nonatomic) AWEEmoticonKeyboardHelper *emoticonKeyboardHelper; // @synthesize emoticonKeyboardHelper=_emoticonKeyboardHelper;
@property(retain, nonatomic) AWEBubble *videoReplyTip; // @synthesize videoReplyTip=_videoReplyTip;
@property(retain, nonatomic) UIView *miniEmoticonPanelLineView; // @synthesize miniEmoticonPanelLineView=_miniEmoticonPanelLineView;
@property(retain, nonatomic) NSDate *lastTapEmojiDate; // @synthesize lastTapEmojiDate=_lastTapEmojiDate;
@property(retain, nonatomic) AWECommentMiniEmoticonModel *emoticonModel; // @synthesize emoticonModel=_emoticonModel;
@property(retain, nonatomic) AWEBulletScreenMiniEmoticonView *quickEmoticonBtn; // @synthesize quickEmoticonBtn=_quickEmoticonBtn;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIButton *removeSelectedGifImgBtn; // @synthesize removeSelectedGifImgBtn=_removeSelectedGifImgBtn;
@property(retain, nonatomic) UIImageView *selectedGifImgView; // @synthesize selectedGifImgView=_selectedGifImgView;
@property(retain, nonatomic) UIButton *cancelGifSearchingButton; // @synthesize cancelGifSearchingButton=_cancelGifSearchingButton;
@property(retain, nonatomic) AWECommentListInputExtraView *repostView; // @synthesize repostView=_repostView;
@property(retain, nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) UIButton *videoReplyButton; // @synthesize videoReplyButton=_videoReplyButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) AWECommentlistInputHintView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UIView *keyboardMaskView; // @synthesize keyboardMaskView=_keyboardMaskView;
@property(retain, nonatomic) AWEIMStickerModel *selectedSticker; // @synthesize selectedSticker=_selectedSticker;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool showEmoji; // @synthesize showEmoji=_showEmoji;
@property(nonatomic) _Bool isAting; // @synthesize isAting=_isAting;
@property(retain, nonatomic) AWECommentMiniEmoticonPanelView *miniEmoticonPanel; // @synthesize miniEmoticonPanel=_miniEmoticonPanel;
@property(retain, nonatomic) UIButton *emoticonButton; // @synthesize emoticonButton=_emoticonButton;
@property(retain, nonatomic) UIButton *atBtn; // @synthesize atBtn=_atBtn;
@property(retain, nonatomic) UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) UITextField *gifSearchingTextField; // @synthesize gifSearchingTextField=_gifSearchingTextField;
@property(retain, nonatomic) AWEGrowingTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType repostSelectedButtonClickAction; // @synthesize repostSelectedButtonClickAction=_repostSelectedButtonClickAction;
@property(copy, nonatomic) CDUnknownBlockType risingInputViewAfterAtBlock; // @synthesize risingInputViewAfterAtBlock=_risingInputViewAfterAtBlock;
@property(retain, nonatomic) AWECommentSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
@property(nonatomic) __weak id <AWECommentListInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <AWETextInputControllerProtocol> textInputController; // @synthesize textInputController=_textInputController;
@property(nonatomic) unsigned long long inputViewType; // @synthesize inputViewType=_inputViewType;
@property(nonatomic) unsigned long long inputMode; // @synthesize inputMode=_inputMode;
- (void).cxx_destruct;
- (id)updateCommentEggPlaceholder;
- (void)p_updateAvatarImageView;
- (void)didFinishLogin;
- (void)didFinishUpdateAwemeUser;
- (void)postComment;
- (void)tapEmoji;
- (void)searchHelperShow:(id)arg1;
- (void)searchHelperDismiss:(id)arg1;
- (void)searchHelperDidEndSearch:(id)arg1;
- (id)plainText;
- (double)inputViewTop;
- (void)startInputWithVideoReplyButton;
- (void)removeSelectedSticker;
- (void)updateSeparateLineView;
- (void)showSeparateLineView:(_Bool)arg1;
- (void)showLineView:(_Bool)arg1;
- (void)showHintViewIfNeed:(id)arg1;
- (void)resetEmoticonThemeViewIndex;
- (void)manualReleaseEmoticonView;
- (double)repostViewHeight;
- (_Bool)repostSelected;
- (void)setEmoticonButtonSelected:(_Bool)arg1;
- (void)setAtButtonUserInteractionEnable:(_Bool)arg1;
- (void)repostButtonTapped:(id)arg1;
- (void)trackMiniEmoticonClicked;
- (void)trackBackToKeyboardScenesce:(id)arg1;
- (void)dismissVideoReplyTip;
- (void)showVideoReplyTipIfNeed;
- (id)p_encodeEmoticon:(id)arg1;
- (_Bool)p_successRefreshTextViewUI;
- (void)p_selectedStickerAnimationWithStickerView:(id)arg1 fromEmoticonPanel:(_Bool)arg2;
- (_Bool)p_stickerSendEnable;
- (void)p_refreshLayout;
- (_Bool)shouldShowRepostView;
- (double)growingTextViewTopMargin;
- (void)updateUIWithInputViewType:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_setupUI;
- (void)p_startSearchingUserWithEnterMethod:(id)arg1;
- (void)p_showStickerIfNeeded;
- (void)p_removeSeletedSticker;
- (void)p_cancelGifSearching;
- (void)p_dismissHintView;
- (_Bool)p_needShowDuoShanHint;
- (void)p_showDuoShanHintIfNeed;
- (void)p_showReplyHintViewIfNeed:(id)arg1;
- (void)videoReplyButtonClicked:(id)arg1;
- (void)repostSelectedButtonClicked:(id)arg1;
- (void)_emoticonButtonClicked:(id)arg1;
- (void)emoticonButtonClicked:(id)arg1;
- (void)atBtnClicked:(id)arg1;
- (void)inputViewHide;
- (void)keyboardMaskViewTapped:(id)arg1;
- (void)startKeyboardDismissAnimWithDuration:(double)arg1 curve:(long long)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startKeyboardShowAnimWithDuration:(double)arg1 curve:(long long)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didSelectedGiphy:(id)arg1 giphyView:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textInputDismissCompletion;
- (_Bool)textInput:(id)arg1 shouldDeleteTextInRange:(struct _NSRange)arg2;
- (void)textInputDidAddUser:(id)arg1;
- (void)textInputValueChanged:(id)arg1;
- (void)textInputDidExceedMaxUserCount:(id)arg1;
- (void)textInputDidExceedMaxLength:(id)arg1;
- (void)emoticonKeyboardDidTapSearchItem:(id)arg1;
- (void)emoticonKeyboardSendButtonClicked:(id)arg1;
- (void)emoticonKeyboard:(id)arg1 didSelectSticker:(id)arg2 selectedView:(id)arg3;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)p_addObserver;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 inputViewType:(unsigned long long)arg2 needNewStyle:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)adaptForChildMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

