//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGShoppingProductCardCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class IGSessionTracker, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPProductCarouselViewModel, IGUserSession, NSString;

@interface IGShoppingPDPProductCarouselSectionController : IGListSectionController <IGShoppingProductCardCellDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource>
{
    IGUserSession *_userSession;
    IGShoppingPDPProductCarouselViewModel *_viewModel;
    IGShoppingConsumptionFeedItemLogger *_logger;
    long long _productCardHeight;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
- (void)productCardCell:(id)arg1 didTapProductItem:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 shoppingSessionTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

