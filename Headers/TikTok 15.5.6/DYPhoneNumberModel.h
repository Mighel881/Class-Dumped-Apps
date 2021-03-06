//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface DYPhoneNumberModel : MTLModel <NSCopying>
{
    NSString *_countryCode;
    NSString *_number;
}

@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (id)hideFourPlacesForPhoneNumberWithoutCountryCode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)numberStringWithSpaceAfterCountryCode;
- (id)numberStringValueWithStar;
- (id)numberWithCountryCode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;

@end

