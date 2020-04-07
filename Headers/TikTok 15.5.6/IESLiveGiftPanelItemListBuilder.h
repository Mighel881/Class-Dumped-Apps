//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveGiftChargeItem, IESLiveGiftDefaultOperationItem, IESLiveGiftGroupSelectionListItem, IESLiveGiftHonorLevelItem, IESLiveGiftListItem, IESLiveGiftPanelCloseItem, IESLiveGiftPanelDataSharing, IESLiveGiftPanelFirstChargeItem, IESLiveGiftPanelLineItem, IESLiveGiftPanelNobleItem, IESLiveGiftTabListItem, NSMutableArray;
@protocol IESLiveEnvironment, IESLiveGiftPanelReaction, IESLiveUserService;

@interface IESLiveGiftPanelItemListBuilder : NSObject
{
    NSMutableArray *_itemLists;
    double _panelCollectionHeight;
    CDUnknownBlockType _reloadItemBlock;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    id <IESLiveGiftPanelReaction> _reaction;
    NSMutableArray *_allItems;
    IESLiveGiftPanelCloseItem *_closeItem;
    IESLiveGiftDefaultOperationItem *_defaultOperationItem;
    IESLiveGiftHonorLevelItem *_honorLevelItem;
    IESLiveGiftGroupSelectionListItem *_groupSelectionListItem;
    IESLiveGiftPanelLineItem *_lineItem;
    IESLiveGiftListItem *_giftListItem;
    IESLiveGiftTabListItem *_tabListItem;
    IESLiveGiftChargeItem *_chargeItem;
    IESLiveGiftPanelFirstChargeItem *_firstChargeItem;
    IESLiveGiftPanelNobleItem *_nobleItem;
    id <IESLiveUserService> _userService;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) IESLiveGiftPanelNobleItem *nobleItem; // @synthesize nobleItem=_nobleItem;
@property(retain, nonatomic) IESLiveGiftPanelFirstChargeItem *firstChargeItem; // @synthesize firstChargeItem=_firstChargeItem;
@property(retain, nonatomic) IESLiveGiftChargeItem *chargeItem; // @synthesize chargeItem=_chargeItem;
@property(retain, nonatomic) IESLiveGiftTabListItem *tabListItem; // @synthesize tabListItem=_tabListItem;
@property(retain, nonatomic) IESLiveGiftListItem *giftListItem; // @synthesize giftListItem=_giftListItem;
@property(retain, nonatomic) IESLiveGiftPanelLineItem *lineItem; // @synthesize lineItem=_lineItem;
@property(retain, nonatomic) IESLiveGiftGroupSelectionListItem *groupSelectionListItem; // @synthesize groupSelectionListItem=_groupSelectionListItem;
@property(retain, nonatomic) IESLiveGiftHonorLevelItem *honorLevelItem; // @synthesize honorLevelItem=_honorLevelItem;
@property(retain, nonatomic) IESLiveGiftDefaultOperationItem *defaultOperationItem; // @synthesize defaultOperationItem=_defaultOperationItem;
@property(retain, nonatomic) IESLiveGiftPanelCloseItem *closeItem; // @synthesize closeItem=_closeItem;
@property(retain, nonatomic) NSMutableArray *allItems; // @synthesize allItems=_allItems;
@property(nonatomic) __weak id <IESLiveGiftPanelReaction> reaction; // @synthesize reaction=_reaction;
@property(retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing; // @synthesize giftPanelDataSharing=_giftPanelDataSharing;
@property(copy, nonatomic) CDUnknownBlockType reloadItemBlock; // @synthesize reloadItemBlock=_reloadItemBlock;
@property(nonatomic) double panelCollectionHeight; // @synthesize panelCollectionHeight=_panelCollectionHeight;
@property(retain, nonatomic) NSMutableArray *itemLists; // @synthesize itemLists=_itemLists;
- (void).cxx_destruct;
- (void)updateOperationItem:(id)arg1;
- (void)updateAwemeOperationItem;
- (id)awemeOriginItemList;
- (void)updateXiguaToutiaoOperationItem;
- (id)xiguaToutiaoOriginItemList;
- (id)originItemList;
- (void)updateListItemIfNeeded;
- (void)p_bindSignals;
- (id)registerClasses;
- (void)buildItemLists;
- (id)initWithGiftPanelDataSharing:(id)arg1 reaction:(id)arg2;

@end
