//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGSaveStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingBasicProductFeedHeaderUserSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingBasicProductFeedServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductCollectionTileCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductWithContextCardSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingSessionTracking-Protocol.h>
#import <InstagramAppCoreFramework/IGTextViewSectionControllerDelegate-Protocol.h>

@class IGActionableConfirmationToastController, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGListAdapter, IGRefreshControl, IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGShoppingProductCollectionLogger, IGUserSession, NSString, UICollectionView;
@protocol IGShoppingBasicProductFeedServiceType, IGShoppingBasicProductFeedViewControllerDelegate;

@interface IGShoppingBasicProductFeedViewController : IGViewController <IGListAdapterDataSource, IGFeedScrollViewListener, IGSaveStatusListener, IGShoppingProductCollectionTileCellDelegate, IGShoppingProductWithContextCardSectionControllerDelegate, IGShoppingBasicProductFeedHeaderUserSectionControllerDelegate, IGShoppingBasicProductFeedServiceDelegate, IGShoppingSessionTracking, IGTextViewSectionControllerDelegate>
{
    IGUserSession *_userSession;
    id <IGShoppingBasicProductFeedServiceType> _service;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGShoppingProductCollectionLogger *_productCollectionLogger;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGRefreshControl *_refreshControl;
    IGFeedPreviewHandler *_previewHandler;
    IGActionableConfirmationToastController *_toastController;
    double _cellPadding;
    struct IGGridLayoutConfiguration _gridLayoutConfig;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGShoppingBasicProductFeedViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingBasicProductFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_dismissBarButtonItemTapped:(id)arg1;
- (void)_updateTitle;
- (void)_pullToRefreshControlTriggered:(id)arg1;
- (void)shoppingProductCollectionTileCell:(id)arg1 didTapProfilePictureWithUser:(id)arg2;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)shoppingBasicProductFeedHeaderUserSectionController:(id)arg1 didNavigateToUserProfile:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 didTapDismissForProductItem:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 didTapProductItem:(id)arg2;
- (_Bool)productWithContextCardSectionController:(id)arg1 containsLastSavedProductItem:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 willNavigateToPDPForViewModel:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 didUpdateProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3;
- (void)basicProductFeedService:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)basicProductFeedService:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)basicProductFeedService:(id)arg1 didUpdateViewModels:(id)arg2 shouldAnimate:(_Bool)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 service:(id)arg2 shoppingSessionTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

