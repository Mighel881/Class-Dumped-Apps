//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAnimatedButton, AWECaptionScrollFlowLayout, AWEStoryToolBar, AWEUILoadingView, NSTimer, UIButton, UICollectionView, UILabel;
@protocol AWECaptionScrollFlowLayoutDelegate;

@interface AWECaptionBottomView : UIView
{
    CDUnknownBlockType _refreshUICompletion;
    id <AWECaptionScrollFlowLayoutDelegate> _layoutDelegate;
    long long _currentRow;
    UIView *_loadingBgView;
    UIView *_retryBgView;
    UIView *_emptyBgView;
    UIView *_captionBgView;
    UIView *_styleBgView;
    AWEUILoadingView *_loadingView;
    UIView *_loadingViewBgView;
    UILabel *_loadingTitle;
    UILabel *_loadingSubtitle1;
    UILabel *_loadingSubtitle2;
    UIButton *_cancelButton;
    UILabel *_retryTitle;
    UIButton *_retryButton;
    UIButton *_quitButton;
    UILabel *_emptyTitle;
    UIButton *_emptyCancelButton;
    UILabel *_captionTitle;
    AWEAnimatedButton *_styleButton;
    AWEAnimatedButton *_deleteButton;
    UIView *_separateLine;
    UICollectionView *_captionCollectionView;
    AWECaptionScrollFlowLayout *_layout;
    AWEStoryToolBar *_styleToolBar;
    UIView *_styleSeparateLine;
    AWEAnimatedButton *_styleCancelButton;
    AWEAnimatedButton *_styleSaveButton;
    NSTimer *_progressTimer;
    NSTimer *_hintTimer;
}

@property(retain, nonatomic) NSTimer *hintTimer; // @synthesize hintTimer=_hintTimer;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) AWEAnimatedButton *styleSaveButton; // @synthesize styleSaveButton=_styleSaveButton;
@property(retain, nonatomic) AWEAnimatedButton *styleCancelButton; // @synthesize styleCancelButton=_styleCancelButton;
@property(retain, nonatomic) UIView *styleSeparateLine; // @synthesize styleSeparateLine=_styleSeparateLine;
@property(retain, nonatomic) AWEStoryToolBar *styleToolBar; // @synthesize styleToolBar=_styleToolBar;
@property(retain, nonatomic) AWECaptionScrollFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *captionCollectionView; // @synthesize captionCollectionView=_captionCollectionView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) AWEAnimatedButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) AWEAnimatedButton *styleButton; // @synthesize styleButton=_styleButton;
@property(retain, nonatomic) UILabel *captionTitle; // @synthesize captionTitle=_captionTitle;
@property(retain, nonatomic) UIButton *emptyCancelButton; // @synthesize emptyCancelButton=_emptyCancelButton;
@property(retain, nonatomic) UILabel *emptyTitle; // @synthesize emptyTitle=_emptyTitle;
@property(retain, nonatomic) UIButton *quitButton; // @synthesize quitButton=_quitButton;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *retryTitle; // @synthesize retryTitle=_retryTitle;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *loadingSubtitle2; // @synthesize loadingSubtitle2=_loadingSubtitle2;
@property(retain, nonatomic) UILabel *loadingSubtitle1; // @synthesize loadingSubtitle1=_loadingSubtitle1;
@property(retain, nonatomic) UILabel *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
@property(retain, nonatomic) UIView *loadingViewBgView; // @synthesize loadingViewBgView=_loadingViewBgView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *styleBgView; // @synthesize styleBgView=_styleBgView;
@property(retain, nonatomic) UIView *captionBgView; // @synthesize captionBgView=_captionBgView;
@property(retain, nonatomic) UIView *emptyBgView; // @synthesize emptyBgView=_emptyBgView;
@property(retain, nonatomic) UIView *retryBgView; // @synthesize retryBgView=_retryBgView;
@property(retain, nonatomic) UIView *loadingBgView; // @synthesize loadingBgView=_loadingBgView;
@property(nonatomic) long long currentRow; // @synthesize currentRow=_currentRow;
@property(nonatomic) __weak id <AWECaptionScrollFlowLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(copy, nonatomic) CDUnknownBlockType refreshUICompletion; // @synthesize refreshUICompletion=_refreshUICompletion;
- (void).cxx_destruct;
- (void)stopLoadingAnim;
- (void)startLoadingAnim;
- (void)startProgressAnimationWithProgress:(long long)arg1 interval:(double)arg2;
- (void)startProgressAnimation;
- (void)loadingSubTitleAnimationWithText:(id)arg1 flag:(int)arg2;
- (void)startLoadingSubtitleAnimation;
- (void)refreshCellHighlightWithRow:(long long)arg1;
- (void)refreshUIWithType:(long long)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
