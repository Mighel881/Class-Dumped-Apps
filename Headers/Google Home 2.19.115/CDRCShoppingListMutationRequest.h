//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRCreateShoppingListItemRequest, CDRUpdateShoppingListScreenRequest, NSString;

@interface CDRCShoppingListMutationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CDRCreateShoppingListItemRequest *createItemRequest; // @dynamic createItemRequest;
@property(nonatomic) _Bool hasListId; // @dynamic hasListId;
@property(copy, nonatomic) NSString *listId; // @dynamic listId;
@property(readonly, nonatomic) int requestOneOfCase; // @dynamic requestOneOfCase;
@property(retain, nonatomic) CDRUpdateShoppingListScreenRequest *updateListRequest; // @dynamic updateListRequest;

@end

