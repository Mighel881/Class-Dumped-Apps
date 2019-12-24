//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEStudioBaseViewController.h"

#import "AWEAggregatedEffectViewDelegate-Protocol.h"
#import "AWEMattingViewProtocol-Protocol.h"
#import "AWEMemojiContainerViewDelegate-Protocol.h"
#import "AWEModernStickerCollectionViewCoordinatorDelegate-Protocol.h"
#import "AWEModernStickerPicker-Protocol.h"
#import "AWEMojiEffectMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWEAggregatedEffectView, AWECameraContainerToolButtonWarpView, AWECollectionButton, AWEGradientView, AWEMattingView, AWEMemojiContainerView, AWEModernStickerCollectionViewCoordinator, AWEModernStickerContentCollectionView, AWEModernStickerSwitchTabView, AWEOriginStickerUserView, AWEPixaloopGuideView, AWEStickerCommerceEnterView, AWEStickerDataManager, IESEffectModel, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIButton, UIImageView, UIView;
@protocol AWEModernStickerPickerDelegate, AWEModernStickerViewControllerDelegate, UIViewControllerTransitioningDelegate><ACCInteractiveTransitionProtocol;

@interface AWEModernStickerViewController : AWEStudioBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWEMattingViewProtocol, AWEAggregatedEffectViewDelegate, AWEMemojiContainerViewDelegate, AWEUserMessage, AWEMojiEffectMessage, AWEModernStickerCollectionViewCoordinatorDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, AWEModernStickerPicker>
{
    _Bool _isPhotoMode;
    _Bool _isShowing;
    _Bool _hasShownBefore;
    _Bool _isStoryMode;
    _Bool _needTrackEvent;
    _Bool _showingOriginStickerView;
    _Bool _isDismissingChildEffectPanel;
    _Bool _fetchCategoryDataCompleted;
    _Bool _reloadAfterDownloading;
    _Bool _shouldScrollToSelectedItemWhenDownloadFinishedAutomatically;
    _Bool _shouldIgnoreSwitchTabViewScrollEvent;
    CDUnknownBlockType _dismissBlock;
    id <AWEModernStickerPickerDelegate> _delegate;
    id <AWEModernStickerViewControllerDelegate> _actionDelegate;
    NSDictionary *_trackingInfoDictionary;
    NSString *_createId;
    CDUnknownBlockType _pickStickerMusicBlock;
    CDUnknownBlockType _cancelStickerMusicBlock;
    UIView *_stickerBackgroundView;
    UIView *_stickerTabContainerView;
    UIButton *_clearStickerApplyBtton;
    AWEMattingView *_mattingView;
    AWEAggregatedEffectView *_aggregatedEffectView;
    AWEMemojiContainerView *_mojiContainerView;
    UIImageView *_activityHintView;
    NSTimer *_timer;
    AWEModernStickerSwitchTabView *_switchTabView;
    UIView *_sepLine;
    AWEModernStickerContentCollectionView *_stickerContentCollectionView;
    UIView *_favoriteView;
    AWEOriginStickerUserView *_originStickerUserView;
    AWEStickerCommerceEnterView *_commerceEnterView;
    AWECollectionButton *_favoriteButton;
    UIView *_loadingView;
    UIView *_errorView;
    UIView *_favoriteBubble;
    UIButton *_cameraButton;
    AWECameraContainerToolButtonWarpView *_cameraButtonWarpView;
    UIButton *_storyCameraButton;
    AWEStickerDataManager *_dataManager;
    AWEModernStickerCollectionViewCoordinator *_coordinator;
    IESEffectModel *_selectedEffectModel;
    IESEffectModel *_lastClickedEffectModel;
    IESEffectModel *_selectedChildEffectModel;
    long long _lastLoadingIndex;
    CDUnknownBlockType _childPanelRestoreBlock;
    NSMutableSet *_hasShowedStickerSet;
    NSMutableDictionary *_cachedUserNameDict;
    NSMutableDictionary *_cachedCommerceStickerDict;
    long long _lastSelectedTabIndex;
    NSIndexPath *_currentContentCellIndexPath;
    NSMutableArray *_downloadingEffects;
    AWEPixaloopGuideView *_pixaloopGuideView;
    id <UIViewControllerTransitioningDelegate><ACCInteractiveTransitionProtocol> _transitionDelegate;
    NSArray *_totalEffectModels;
    NSArray *_separatorsIndexs;
    NSArray *_categorySeparatorOffsetXsArray;
    AWEGradientView *_gradientView;
}

@property(nonatomic) _Bool shouldIgnoreSwitchTabViewScrollEvent; // @synthesize shouldIgnoreSwitchTabViewScrollEvent=_shouldIgnoreSwitchTabViewScrollEvent;
@property(nonatomic) _Bool shouldScrollToSelectedItemWhenDownloadFinishedAutomatically; // @synthesize shouldScrollToSelectedItemWhenDownloadFinishedAutomatically=_shouldScrollToSelectedItemWhenDownloadFinishedAutomatically;
@property(retain, nonatomic) AWEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) NSArray *categorySeparatorOffsetXsArray; // @synthesize categorySeparatorOffsetXsArray=_categorySeparatorOffsetXsArray;
@property(retain, nonatomic) NSArray *separatorsIndexs; // @synthesize separatorsIndexs=_separatorsIndexs;
@property(retain, nonatomic) NSArray *totalEffectModels; // @synthesize totalEffectModels=_totalEffectModels;
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate><ACCInteractiveTransitionProtocol> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(retain, nonatomic) AWEPixaloopGuideView *pixaloopGuideView; // @synthesize pixaloopGuideView=_pixaloopGuideView;
@property(retain, nonatomic) NSMutableArray *downloadingEffects; // @synthesize downloadingEffects=_downloadingEffects;
@property(nonatomic) _Bool reloadAfterDownloading; // @synthesize reloadAfterDownloading=_reloadAfterDownloading;
@property(retain, nonatomic) NSIndexPath *currentContentCellIndexPath; // @synthesize currentContentCellIndexPath=_currentContentCellIndexPath;
@property(nonatomic) long long lastSelectedTabIndex; // @synthesize lastSelectedTabIndex=_lastSelectedTabIndex;
@property(nonatomic) _Bool fetchCategoryDataCompleted; // @synthesize fetchCategoryDataCompleted=_fetchCategoryDataCompleted;
@property(retain, nonatomic) NSMutableDictionary *cachedCommerceStickerDict; // @synthesize cachedCommerceStickerDict=_cachedCommerceStickerDict;
@property(retain, nonatomic) NSMutableDictionary *cachedUserNameDict; // @synthesize cachedUserNameDict=_cachedUserNameDict;
@property(retain, nonatomic) NSMutableSet *hasShowedStickerSet; // @synthesize hasShowedStickerSet=_hasShowedStickerSet;
@property(copy, nonatomic) CDUnknownBlockType childPanelRestoreBlock; // @synthesize childPanelRestoreBlock=_childPanelRestoreBlock;
@property(nonatomic) _Bool isDismissingChildEffectPanel; // @synthesize isDismissingChildEffectPanel=_isDismissingChildEffectPanel;
@property(nonatomic) long long lastLoadingIndex; // @synthesize lastLoadingIndex=_lastLoadingIndex;
@property(retain, nonatomic) IESEffectModel *selectedChildEffectModel; // @synthesize selectedChildEffectModel=_selectedChildEffectModel;
@property(retain, nonatomic) IESEffectModel *lastClickedEffectModel; // @synthesize lastClickedEffectModel=_lastClickedEffectModel;
@property(retain, nonatomic) IESEffectModel *selectedEffectModel; // @synthesize selectedEffectModel=_selectedEffectModel;
@property(retain, nonatomic) AWEModernStickerCollectionViewCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) AWEStickerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIButton *storyCameraButton; // @synthesize storyCameraButton=_storyCameraButton;
@property(retain, nonatomic) AWECameraContainerToolButtonWarpView *cameraButtonWarpView; // @synthesize cameraButtonWarpView=_cameraButtonWarpView;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) _Bool showingOriginStickerView; // @synthesize showingOriginStickerView=_showingOriginStickerView;
@property(retain, nonatomic) UIView *favoriteBubble; // @synthesize favoriteBubble=_favoriteBubble;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWECollectionButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) AWEStickerCommerceEnterView *commerceEnterView; // @synthesize commerceEnterView=_commerceEnterView;
@property(retain, nonatomic) AWEOriginStickerUserView *originStickerUserView; // @synthesize originStickerUserView=_originStickerUserView;
@property(retain, nonatomic) UIView *favoriteView; // @synthesize favoriteView=_favoriteView;
@property(retain, nonatomic) AWEModernStickerContentCollectionView *stickerContentCollectionView; // @synthesize stickerContentCollectionView=_stickerContentCollectionView;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) AWEModernStickerSwitchTabView *switchTabView; // @synthesize switchTabView=_switchTabView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *activityHintView; // @synthesize activityHintView=_activityHintView;
@property(retain, nonatomic) AWEMemojiContainerView *mojiContainerView; // @synthesize mojiContainerView=_mojiContainerView;
@property(retain, nonatomic) AWEAggregatedEffectView *aggregatedEffectView; // @synthesize aggregatedEffectView=_aggregatedEffectView;
@property(retain, nonatomic) AWEMattingView *mattingView; // @synthesize mattingView=_mattingView;
@property(retain, nonatomic) UIButton *clearStickerApplyBtton; // @synthesize clearStickerApplyBtton=_clearStickerApplyBtton;
@property(retain, nonatomic) UIView *stickerTabContainerView; // @synthesize stickerTabContainerView=_stickerTabContainerView;
@property(retain, nonatomic) UIView *stickerBackgroundView; // @synthesize stickerBackgroundView=_stickerBackgroundView;
@property(copy, nonatomic) CDUnknownBlockType cancelStickerMusicBlock; // @synthesize cancelStickerMusicBlock=_cancelStickerMusicBlock;
@property(copy, nonatomic) CDUnknownBlockType pickStickerMusicBlock; // @synthesize pickStickerMusicBlock=_pickStickerMusicBlock;
@property(copy, nonatomic) NSString *createId; // @synthesize createId=_createId;
@property(nonatomic) _Bool needTrackEvent; // @synthesize needTrackEvent=_needTrackEvent;
@property(nonatomic) _Bool isStoryMode; // @synthesize isStoryMode=_isStoryMode;
@property(copy, nonatomic) NSDictionary *trackingInfoDictionary; // @synthesize trackingInfoDictionary=_trackingInfoDictionary;
@property(nonatomic) __weak id <AWEModernStickerViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <AWEModernStickerPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool hasShownBefore; // @synthesize hasShownBefore=_hasShownBefore;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isPhotoMode; // @synthesize isPhotoMode=_isPhotoMode;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)updateCategorySeparatorOffsetXsArray;
- (void)updateEffectsCountAndSeparatorsIndexs;
- (void)trackCommerceStickerEventWithEffectModel:(id)arg1 label:(id)arg2;
- (_Bool)enablePagingStickers;
- (void)p_moveToOffset:(struct CGPoint)arg1;
- (void)p_showOnView:(id)arg1 fromOffset:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)p_dismissWithAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)p_dismiss;
- (void)p_showOnViewController:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)showOnViewController:(id)arg1;
- (long long)selectedTabIndex;
- (id)swapCameraButtonImage;
- (long long)defaultPosition;
- (void)storyCameraButtonPressed:(id)arg1;
- (void)cameraButtonPressed:(id)arg1;
- (void)p_hiddenMojiView;
- (void)p_showMojiView;
- (void)p_hiddenAggregatedEffectViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)p_showAggregatedEffectView;
- (void)p_hiddenMattingView;
- (void)p_showMattingView;
- (long long)statusCodeForStickerDownload:(_Bool)arg1;
- (void)applyComposerStickerToDelegateWithEffect:(id)arg1;
- (void)applyStickerToDelegateWithEffect:(id)arg1;
- (void)p_setSelectedEffectModelWithEffect:(id)arg1;
- (void)p_processCommerceStickerWithEffect:(id)arg1;
- (void)showCommerceEnterPendant;
- (void)configCommerceEnteStickerWithEffectModel:(id)arg1;
- (_Bool)p_getFavoriteStatusForSticker:(id)arg1;
- (void)p_clearSeletedCells;
- (id)p_effectModelForIndexPath:(id)arg1;
- (id)potentialChildEffectOfParentEffect:(id)arg1;
- (void)memojiView:(id)arg1 onClickRecreateButton:(id)arg2 atIndexPath:(id)arg3;
- (void)memojiView:(id)arg1 onClickPlusButton:(id)arg2;
- (void)memojiView:(id)arg1 didSelectCell:(id)arg2;
- (void)aggregatedEffectView:(id)arg1 didSelectEffectCell:(id)arg2;
- (_Bool)aggregatedEffectView:(id)arg1 shouldBeSelectedWithCell:(id)arg2;
- (id)getStickerContentCollectionViewCellSnapshotImageWithIndexPath:(id)arg1;
- (void)animatedSwitchContentCollectionViewIfNeededForSection:(unsigned long long)arg1 currentSection:(unsigned long long)arg2 removeFakeImage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)modernStickerSwitchTabViewDidSelectedAtIndex:(long long)arg1;
- (_Bool)modernStickerSwitchTabViewWillSeletedAtIndex:(long long)arg1;
- (void)showImagePickerViewController;
- (void)didPressPlusButton;
- (void)albumPhotosChanged;
- (void)albumFaceImageDetectEmpty;
- (void)didChooseImage:(id)arg1;
- (void)p_silentlyDownloadEffect:(id)arg1;
- (void)p_silentlyDownloadForcebindMusicWithEffect:(id)arg1;
- (_Bool)p_shouldNotSilentlyDownloadEffect:(id)arg1;
- (void)p_trackCellClickEventWithCell:(id)arg1 atIndex:(long long)arg2;
- (void)p_trackStickerDownloadErrorWithEffect:(id)arg1 error:(id)arg2 duration:(double)arg3;
- (void)p_selectedDownloadedEffectWithCollectionView:(id)arg1 cell:(id)arg2 indexPath:(id)arg3 needDownloadEffect:(id)arg4 musicIsForceBind:(_Bool)arg5 forceBindMusicModel:(id)arg6 forceBindMusicAsset:(id)arg7 musicError:(id)arg8;
- (void)p_handleSelectedEffectDownLoadSuccess:(_Bool)arg1 WithCollectionView:(id)arg2 cell:(id)arg3 indexPath:(id)arg4 needDownloadEffect:(id)arg5 cellEffect:(id)arg6 musicIsForceBind:(_Bool)arg7 forceBindMusicModel:(id)arg8 forceBindMusicAsset:(id)arg9 musicError:(id)arg10;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_trackVisibleStickersShowAtSection:(long long)arg1;
- (void)p_trackStickerShow:(id)arg1 index:(long long)arg2 designatedTabName:(id)arg3;
- (id)p_currentTabNameIfStickerContentCollectionViewIsScrolling;
- (void)p_trackStickerShowWithNewEffect:(id)arg1 atIndexPath:(id)arg2;
- (id)p_collectionView:(id)arg1 getStickerCellForIndexPath:(id)arg2;
- (id)createChildEffectsContainerTrackingInfoDict;
- (id)p_collectionView:(id)arg1 getContentCellForIndexPath:(id)arg2;
- (id)p_collectionView:(id)arg1 getTitleCellForIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)reloadStickerContentCollectionViewIfNeeded;
- (void)switchCameraToFront:(_Bool)arg1;
- (void)setSelectedSticker:(id)arg1 selectedChildSticker:(id)arg2;
- (void)stickerClearAllEffect;
- (void)showMattingViewWithPixaloopAlg:(id)arg1 pixaloopRelation:(id)arg2 pixaloopImgK:(id)arg3 success:(_Bool)arg4 sticker:(id)arg5;
- (void)showPixaloopGuideView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sticker:(id)arg1 appliedSuccess:(_Bool)arg2;
- (void)stickerWillApplyAction;
- (void)p_updateFavoriteButtonWithSticker:(id)arg1 manually:(_Bool)arg2;
- (void)p_mattingViewStartingFaceDetect;
- (void)p_refreshDataManager;
- (void)p_refreshStickerViews;
- (void)clickCommerceEnterButtonAction:(id)arg1;
- (void)p_onFavoriteBtnClicked_IMP:(id)arg1;
- (void)p_onFavoriteBtnClicked:(id)arg1;
- (void)p_onClearBackgroundPress:(id)arg1;
- (void)p_clearStickerApplyButtonClicked:(id)arg1;
- (void)showActivityHintViewIfNeeded;
- (void)setupUI;
- (void)updateSwapCameraButtonWithBlock:(CDUnknownBlockType)arg1;
- (void)updateCollectionView;
- (void)mojiResourceLoadForEffectMD5:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mojiResourceWillApplyForEffectMD5:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didFinishLogin;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithDataManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
