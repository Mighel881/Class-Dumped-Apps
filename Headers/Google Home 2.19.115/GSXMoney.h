//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSXMoney : NSObject
{
    long long _micros;
    NSString *_currencyCode;
}

+ (id)formatterForCurrencyCode:(id)arg1;
@property(readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, nonatomic) long long micros; // @synthesize micros=_micros;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)stringValue;
- (id)initWithMicros:(long long)arg1 currencyCode:(id)arg2;
- (id)initWithMoney:(id)arg1;

@end

