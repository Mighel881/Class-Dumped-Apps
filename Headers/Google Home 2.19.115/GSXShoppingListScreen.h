//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSXDataObjectV2-Protocol.h"

@class CDRCreateListAction, CDRShoppingListFooter, GSXServiceID, NSArray, NSDate, NSString;

@interface GSXShoppingListScreen : NSObject <GSXDataObjectV2>
{
    _Bool _enableShopYourListButton;
    GSXServiceID *_serviceID;
    NSDate *_lastPopulationDate;
    NSString *_listID;
    NSArray *_shoppingListItems;
    NSArray *_allListsMetadata;
    CDRCreateListAction *_createListAction;
    CDRShoppingListFooter *_shoppingListFooter;
}

@property(readonly, nonatomic) _Bool enableShopYourListButton; // @synthesize enableShopYourListButton=_enableShopYourListButton;
@property(readonly, copy, nonatomic) CDRShoppingListFooter *shoppingListFooter; // @synthesize shoppingListFooter=_shoppingListFooter;
@property(readonly, copy, nonatomic) CDRCreateListAction *createListAction; // @synthesize createListAction=_createListAction;
@property(readonly, copy, nonatomic) NSArray *allListsMetadata; // @synthesize allListsMetadata=_allListsMetadata;
@property(readonly, copy, nonatomic) NSArray *shoppingListItems; // @synthesize shoppingListItems=_shoppingListItems;
@property(readonly, copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) NSDate *lastPopulationDate; // @synthesize lastPopulationDate=_lastPopulationDate;
@property(readonly, copy, nonatomic) GSXServiceID *serviceID; // @synthesize serviceID=_serviceID;
- (void).cxx_destruct;
- (id)initWithProto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

