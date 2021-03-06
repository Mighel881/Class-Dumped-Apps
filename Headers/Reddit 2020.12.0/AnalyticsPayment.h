//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsPayment : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _methodIsSet;
    _Bool _currencyIsSet;
    _Bool _amount_in_smallest_denomIsSet;
    _Bool _default_optionIsSet;
    _Bool _stored_credit_card_stateIsSet;
    NSString *_method;
    NSString *_currency;
    long long _amount_in_smallest_denom;
    NSString *_default_option;
    NSString *_stored_credit_card_state;
}

@property(nonatomic) _Bool stored_credit_card_stateIsSet; // @synthesize stored_credit_card_stateIsSet=_stored_credit_card_stateIsSet;
@property(copy, nonatomic) NSString *stored_credit_card_state; // @synthesize stored_credit_card_state=_stored_credit_card_state;
@property(nonatomic) _Bool default_optionIsSet; // @synthesize default_optionIsSet=_default_optionIsSet;
@property(copy, nonatomic) NSString *default_option; // @synthesize default_option=_default_option;
@property(nonatomic) _Bool amount_in_smallest_denomIsSet; // @synthesize amount_in_smallest_denomIsSet=_amount_in_smallest_denomIsSet;
@property(nonatomic) long long amount_in_smallest_denom; // @synthesize amount_in_smallest_denom=_amount_in_smallest_denom;
@property(nonatomic) _Bool currencyIsSet; // @synthesize currencyIsSet=_currencyIsSet;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic) _Bool methodIsSet; // @synthesize methodIsSet=_methodIsSet;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetStored_credit_card_state;
- (void)unsetDefault_option;
- (void)unsetAmount_in_smallest_denom;
- (void)unsetCurrency;
- (void)unsetMethod;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMethod:(id)arg1 currency:(id)arg2 amount_in_smallest_denom:(long long)arg3 default_option:(id)arg4 stored_credit_card_state:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

