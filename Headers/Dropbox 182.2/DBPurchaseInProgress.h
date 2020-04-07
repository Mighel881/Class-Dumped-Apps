//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class DBUpgradeProduct, NSData, NSLocale, NSString;

@interface DBPurchaseInProgress : NSObject <NSCopying>
{
    _Bool _replay;
    NSString *_transactionId;
    NSData *_receiptData;
    NSString *_formattedPrice;
    NSLocale *_priceLocale;
    DBUpgradeProduct *_product;
}

@property(nonatomic) _Bool replay; // @synthesize replay=_replay;
@property(retain, nonatomic) DBUpgradeProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSLocale *priceLocale; // @synthesize priceLocale=_priceLocale;
@property(retain, nonatomic) NSString *formattedPrice; // @synthesize formattedPrice=_formattedPrice;
@property(retain, nonatomic) NSData *receiptData; // @synthesize receiptData=_receiptData;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
