//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSXIntent.h"

@class CDRItem, CDRList;

@interface GSXAddItemToListIntent : GSXIntent
{
    // Error parsing type: , name: list
    // Error parsing type: , name: item
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithList:(id)arg1 item:(id)arg2;
@property(nonatomic, readonly) CDRItem *item; // @synthesize item;
@property(nonatomic, readonly) CDRList *list; // @synthesize list;

@end

