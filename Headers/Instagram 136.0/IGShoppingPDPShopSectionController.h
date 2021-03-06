//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGShoppingPDPShopCellDelegate-Protocol.h>

@class IGSessionTracker, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPShopViewModel, IGUserSession, NSString;

@interface IGShoppingPDPShopSectionController : IGListSectionController <IGShoppingPDPShopCellDelegate>
{
    IGUserSession *_userSession;
    IGShoppingPDPShopViewModel *_viewModel;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
- (_Bool)_shouldDisplayFollowButtonForMerchant:(id)arg1;
- (void)shoppingPDPShopCellWasTapped:(id)arg1;
- (void)shoppingPDPShopCellDidTapAvatar:(id)arg1;
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

