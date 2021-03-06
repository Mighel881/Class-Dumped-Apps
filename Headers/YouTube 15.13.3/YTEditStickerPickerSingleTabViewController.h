//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/UICollectionViewDataSource-Protocol.h>
#import <Module_Framework/UICollectionViewDelegate-Protocol.h>
#import <Module_Framework/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <Module_Framework/YTEditStickerDataProviderDelegate-Protocol.h>
#import <Module_Framework/YTEditVideoPickerViewDelegate-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTRendererController-Protocol.h>
#import <Module_Framework/YTSelectUserMentionViewControllerDelegate-Protocol.h>

@class GIMMe, NSMutableSet, NSObject, NSString, UICollectionViewController, YTEditStickerDataProviderImpl, YTEditStickerPageMetadata, YTICommand;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, YTEditStickerPickerTabDelegate, YTResponder;

@interface YTEditStickerPickerSingleTabViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, YTSelectUserMentionViewControllerDelegate, YTEditStickerDataProviderDelegate, YTEditVideoPickerViewDelegate, YTRendererController, YTGraftingViewController>
{
    NSMutableSet *_loggedStickers;
    UICollectionViewController *_collectionViewController;
    YTICommand *_interactionLoggingModel;
    YTEditStickerDataProviderImpl *_dataProvider;
    YTEditStickerPageMetadata *_stickerPageMetadata;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _enableViewBasedStickerInfra;
    _Bool _disabled;
    int _stickerPageNumber;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTEditStickerPickerTabDelegate> _stickerDelegate;
}

@property(nonatomic) __weak id <YTEditStickerPickerTabDelegate> stickerDelegate; // @synthesize stickerDelegate=_stickerDelegate;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) int stickerPageNumber; // @synthesize stickerPageNumber=_stickerPageNumber;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)presentDynamicSticker:(id)arg1;
- (void)presentUserMentionSticker;
- (id)createMentionModelFromChannelName:(id)arg1 channelID:(id)arg2 stickerThumbnail:(id)arg3;
- (id)createLocationStickerViewModelFromLocation:(id)arg1;
- (void)showVideoPicker;
- (void)presentLocationSticker;
- (void)setUpResponderEventHandlers;
- (void)selectUserMentionViewController:(id)arg1 didSelectUser:(id)arg2 channelID:(id)arg3 userMentionSuggestionRenderer:(id)arg4;
- (void)didSelectVideoViewModel:(id)arg1;
- (void)logInteractionLoggingForSticker:(id)arg1 withProxyButton:(id)arg2;
- (void)logInteractionLoggingForSticker:(id)arg1 withRenderer:(id)arg2;
- (void)logVisibilityForSticker:(id)arg1;
- (void)logClickForSticker:(id)arg1;
- (void)addToRecentStickerCatalog:(id)arg1;
- (void)fetchStickerCatalogServiceWithStickerPageNumber:(int)arg1;
- (void)relogScreen;
- (id)navEndpoint;
- (void)stickerDataProvider:(id)arg1 didRemoveStickersForIndexPaths:(id)arg2;
- (void)stickerDataProvider:(id)arg1 didUpdateStickersForIndexPaths:(id)arg2;
- (void)sitckerDataProviderDidFinishLoading:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)maybeLogSticker:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (void)setupCollectionViewController;
- (void)reloadVisibleAnimatedStickerCells;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)loadWithModel:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

