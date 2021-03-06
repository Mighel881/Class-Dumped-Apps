//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverHideDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverShowDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchShoppingProductSourceSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingSearchProductListResultSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingShopManagerMultiAddProductsDataSourceDelegate-Protocol.h>

@class IGFeedScrollViewAnnouncer, IGKeyboardObserver, IGListAdapter, IGSearchBar, IGShoppingInlineVariantSelectionController, IGShoppingSearchProductListGroupResultViewModel, IGShoppingShopManagerLogger, IGShoppingShopManagerMultiAddProductsDataSource, IGUserSession, NSString, UICollectionView;
@protocol IGShoppingShopManagerMultiAddProductsViewControllerDelegate;

@interface IGShoppingShopManagerMultiAddProductsViewController : IGViewController <IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGSearchShoppingProductSourceSectionControllerDelegate, IGShoppingShopManagerMultiAddProductsDataSourceDelegate, IGSearchBarDelegate, IGShoppingInlineVariantSelectionControllerDelegate, IGShoppingSearchProductListResultSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    UICollectionView *_collectionView;
    IGShoppingShopManagerMultiAddProductsDataSource *_dataSource;
    IGSearchBar *_searchBar;
    IGKeyboardObserver *_keyboardObserver;
    NSString *_priorModule;
    IGShoppingShopManagerLogger *_logger;
    IGShoppingSearchProductListGroupResultViewModel *_presentedSearchResultViewModel;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    id <IGShoppingShopManagerMultiAddProductsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingShopManagerMultiAddProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCollectionViewFrame;
- (void)_animateKeyboardChangeWithDuration:(double)arg1 curve:(long long)arg2;
- (void)_updateRightBarButtonItemForLoadingState:(_Bool)arg1;
- (void)_onDoneTapped;
- (void)_onCancelTapped;
- (void)_onProductListResultSectionSelectedWithViewModel:(id)arg1;
- (void)_updateTitleWithNumSelected:(unsigned long long)arg1;
- (void)searchShoppingProductSourceSectionControllerDidSelectBrandSelection:(id)arg1;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2;
- (void)_presentVariantPickerViewControllerWithResultViewModel:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)sectionController:(id)arg1 didTapDecoratorForItemWithViewModel:(id)arg2;
- (void)sectionController:(id)arg1 didSelectItemWithViewModel:(id)arg2;
- (void)shopManagerMultiAddProductsDataSourceDidFailLoading:(id)arg1;
- (void)shopManagerMultiAddProductsDataSourceDidUpdateResults:(id)arg1;
- (void)shopManagerMultiAddProductsDataSourceDidStartLoading:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 priorModule:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

