//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/_TtC8Payments20WAPaymentBaseAccount.h>

@class NSString;

@interface WAPaymentBankAccount : _TtC8Payments20WAPaymentBaseAccount
{
}

- (void)updateWithResponse:(id)arg1;
- (id)initWithPaymentAccount:(id)arg1;
@property(nonatomic, readonly) NSString *iconURLString;
@property(nonatomic, readonly) NSString *nameForDisplay;
@property(nonatomic, readonly) NSString *shortNameForDisplay;
@property(nonatomic, readonly) NSString *holderName;
@property(nonatomic, readonly) NSString *bankPhoneNumber;
@property(nonatomic, readonly) NSString *bankCode;
@property(nonatomic, readonly) NSString *accountNumber;

@end

