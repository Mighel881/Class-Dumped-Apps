//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ACCSlidingViewControllerDelegate-Protocol.h"
#import "AWEVideoEditStickerCollectionVCDelegate-Protocol.h"
#import "AWEVideoThirdPartyStickerCollectionVCDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class ACCSearchBar, ACCSlidingTabbarView, ACCSlidingViewController, AWEVideoEditEmojiStickerCollectionViewController, AWEVideoEditInfomationStickerCollectionViewController, AWEVideoPublishViewModel, AWEVideoThirdPartyStickerCollectionViewController, IESThirdPartyResponseModel, NSArray, NSString, UIButton, UILabel, UIView;
@protocol ACCLoadingViewProtocol, AWEVideoEditStickersVCDelegate;

@interface AWEVideoEditStickersViewController : UIViewController <ACCSlidingViewControllerDelegate, AWEVideoEditStickerCollectionVCDelegate, UIGestureRecognizerDelegate, AWEVideoThirdPartyStickerCollectionVCDelegate, UISearchBarDelegate>
{
    _Bool _canLoadingGIFs;
    id <AWEVideoEditStickersVCDelegate> _delegate;
    NSString *_loadingStickerId;
    AWEVideoPublishViewModel *_publishModel;
    ACCSlidingViewController *_slidingViewController;
    ACCSlidingTabbarView *_slidingTabbarView;
    UIView *_searchBarView;
    NSArray *_panels;
    NSArray *_titles;
    double _topOffset;
    ACCSearchBar *_searchBar;
    UIButton *_cancelButton;
    AWEVideoThirdPartyStickerCollectionViewController *_thirdPartyStickerCollectionViewController;
    UIView *_errorView;
    UILabel *_errorTitleLabel;
    IESThirdPartyResponseModel *_hotResponseModel;
    NSArray *_categories;
    long long _status;
    long long _errorStatus;
    UIView *_loadingBgView;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    NSString *_lastKeyword;
    AWEVideoEditEmojiStickerCollectionViewController *_emojiViewController;
    AWEVideoEditInfomationStickerCollectionViewController *_infoStickerViewController;
}

@property(retain, nonatomic) AWEVideoEditInfomationStickerCollectionViewController *infoStickerViewController; // @synthesize infoStickerViewController=_infoStickerViewController;
@property(retain, nonatomic) AWEVideoEditEmojiStickerCollectionViewController *emojiViewController; // @synthesize emojiViewController=_emojiViewController;
@property(retain, nonatomic) NSString *lastKeyword; // @synthesize lastKeyword=_lastKeyword;
@property(nonatomic) _Bool canLoadingGIFs; // @synthesize canLoadingGIFs=_canLoadingGIFs;
@property(retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *loadingBgView; // @synthesize loadingBgView=_loadingBgView;
@property(nonatomic) long long errorStatus; // @synthesize errorStatus=_errorStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) IESThirdPartyResponseModel *hotResponseModel; // @synthesize hotResponseModel=_hotResponseModel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AWEVideoThirdPartyStickerCollectionViewController *thirdPartyStickerCollectionViewController; // @synthesize thirdPartyStickerCollectionViewController=_thirdPartyStickerCollectionViewController;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) ACCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSArray *panels; // @synthesize panels=_panels;
@property(retain, nonatomic) UIView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) ACCSlidingTabbarView *slidingTabbarView; // @synthesize slidingTabbarView=_slidingTabbarView;
@property(retain, nonatomic) ACCSlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(retain, nonatomic) NSString *loadingStickerId; // @synthesize loadingStickerId=_loadingStickerId;
@property(nonatomic) __weak id <AWEVideoEditStickersVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetThirdPartyStickerList:(id)arg1 isLoadMore:(_Bool)arg2;
- (_Bool)reuseHotData;
- (void)p_loadmoreSearchDataWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_fetchSearchDataWithKeyword:(id)arg1;
- (void)p_loadmoreHotDataCompletion:(CDUnknownBlockType)arg1;
- (void)p_fetchHotData;
- (void)prepareFetchData;
- (void)handlePan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeAlphaAnimateFromViewController:(id)arg1 animationView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeFromViewController:(id)arg1 animationView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAlphaAnimatedOnViewController:(id)arg1 animationView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showOnViewController:(id)arg1 animationView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadmoreThirdPartyStickers:(CDUnknownBlockType)arg1;
- (void)thirdPartyStickerCollectionViewController:(id)arg1 didSelectSticker:(id)arg2 indexPath:(id)arg3 downloadProgressBlock:(CDUnknownBlockType)arg4 downloadedBlock:(CDUnknownBlockType)arg5;
- (void)stickerCollectionViewController:(id)arg1 didSelectSticker:(id)arg2 atIndex:(long long)arg3 categoryName:(id)arg4 tabName:(id)arg5 downloadProgressBlock:(CDUnknownBlockType)arg6 downloadedBlock:(CDUnknownBlockType)arg7;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)startLoadingGifsWithKeyword:(id)arg1;
- (void)retryToFetchData;
- (void)cancelButtonClicked:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
