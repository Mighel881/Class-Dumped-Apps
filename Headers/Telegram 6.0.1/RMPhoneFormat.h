//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface RMPhoneFormat : NSObject
{
    NSData *_data;
    NSString *_defaultCountry;
    NSString *_defaultCallingCode;
    NSMutableDictionary *_callingCodeOffsets;
    NSMutableDictionary *_callingCodeCountries;
    NSMutableDictionary *_callingCodeData;
    NSMutableDictionary *_countryCallingCode;
}

+ (id)instance;
+ (id)strip:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)parseDataHeader;
- (id)callingCodeInfo:(id)arg1;
- (int)value16BE:(unsigned long long)arg1;
- (int)value16:(unsigned long long)arg1;
- (unsigned int)value32:(unsigned long long)arg1;
- (id)format:(id)arg1 implicitPlus:(_Bool)arg2;
- (id)findCallingCodeInfo:(id)arg1;
- (id)countriesForCallingCode:(id)arg1;
- (id)callingCodeForCountryCode:(id)arg1;
- (id)defaultCallingCode;
- (id)initWithDefaultCountry:(id)arg1;
- (id)init;

@end

