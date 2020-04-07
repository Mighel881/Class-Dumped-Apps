//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAwemeBaseViewController.h"

#import "AWECommentListInputViewDelegate-Protocol.h"
#import "AWECommentSearchParentViewController-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWECommentListInputView, AWECommentSearchHelper, AWEFeedViewedView, AWEViewerListDataController, AWEXiGuaCommentInputView, MASConstraint, NSString, UIView;

@interface AWEAwemeDetailBaseViewController : AWEAwemeBaseViewController <UIGestureRecognizerDelegate, AWEUserMessage, AWECommentSearchParentViewController, AWECommentListInputViewDelegate>
{
    AWECommentListInputView *_commentInputView;
    UIView *_searchContainerView;
    AWECommentSearchHelper *_searchHelper;
    MASConstraint *_commentSearchShow;
    MASConstraint *_commentSearchHide;
    AWEXiGuaCommentInputView *_xiguaInputView;
    AWEFeedViewedView *_bottomViewedView;
    AWEViewerListDataController *_viewerListdataController;
}

@property(retain, nonatomic) AWEViewerListDataController *viewerListdataController; // @synthesize viewerListdataController=_viewerListdataController;
@property(retain, nonatomic) AWEFeedViewedView *bottomViewedView; // @synthesize bottomViewedView=_bottomViewedView;
@property(retain, nonatomic) AWEXiGuaCommentInputView *xiguaInputView; // @synthesize xiguaInputView=_xiguaInputView;
@property(retain, nonatomic) MASConstraint *commentSearchHide; // @synthesize commentSearchHide=_commentSearchHide;
@property(retain, nonatomic) MASConstraint *commentSearchShow; // @synthesize commentSearchShow=_commentSearchShow;
@property(retain, nonatomic) AWECommentSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
@property(retain, nonatomic) UIView *searchContainerView; // @synthesize searchContainerView=_searchContainerView;
@property(retain, nonatomic) AWECommentListInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
- (void).cxx_destruct;
- (id)awemeModel;
- (void)dismissCommentSearchViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showCommentSearchViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didFinishBindPhone;
- (void)updateCommentInputView;
- (void)setModel:(id)arg1;
- (void)setPureMode:(_Bool)arg1;
- (id)textView;
- (void)sendCommentContent;
- (void)createRepost;
- (_Bool)userTappedSendWithContent:(id)arg1;
- (void)commentInputViewWillHide:(id)arg1 keyboardSize:(struct CGSize)arg2;
- (void)commentInputViewWillShow:(id)arg1 keyboardSize:(struct CGSize)arg2;
- (void)commentInputViewDidHide:(id)arg1;
- (void)commentInputViewWillHideAdditionalAnimation:(id)arg1 keyboardSize:(struct CGSize)arg2;
- (_Bool)commentInputViewShouldReturn:(id)arg1;
- (void)reset;
- (_Bool)commentInputViewAtButtonAndEmoticonButtonEnable:(id)arg1;
- (void)commentInputView:(id)arg1 didChangeHeightWithDiff:(double)arg2;
- (_Bool)commentInputViewShouldBeginEditing:(id)arg1;
- (_Bool)rootViewTapGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)layoutSubViews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
