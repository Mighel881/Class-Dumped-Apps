//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface InAppPurchaseManagerConfig : NSObject
{
    _Bool _forceDeferredPurchaseAttempt;
    _Bool _skipReceiptValidation;
}

+ (id)defaultConfig;
@property(readonly, nonatomic) _Bool skipReceiptValidation; // @synthesize skipReceiptValidation=_skipReceiptValidation;
@property(readonly, nonatomic) _Bool forceDeferredPurchaseAttempt; // @synthesize forceDeferredPurchaseAttempt=_forceDeferredPurchaseAttempt;
- (id)initWithForceDeferredPurchaseAttempt:(_Bool)arg1 skipReceiptValidation:(_Bool)arg2;

@end

