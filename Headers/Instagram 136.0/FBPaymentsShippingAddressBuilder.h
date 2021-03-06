//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBPaymentsShippingAddressBuilder : NSObject
{
    NSString *_shippingAddressId;
    _Bool _isDefault;
    _Bool _isVerified;
    NSString *_addresseeFullName;
    NSString *_street;
    NSString *_building;
    NSString *_cityName;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_singleLineFullAddress;
    NSString *_label;
}

+ (id)paymentsShippingAddressFromExistingPaymentsShippingAddress:(id)arg1;
+ (id)paymentsShippingAddress;
- (void).cxx_destruct;
- (id)withLabel:(id)arg1;
- (id)withSingleLineFullAddress:(id)arg1;
- (id)withCountry:(id)arg1;
- (id)withPostalCode:(id)arg1;
- (id)withState:(id)arg1;
- (id)withCityName:(id)arg1;
- (id)withBuilding:(id)arg1;
- (id)withStreet:(id)arg1;
- (id)withAddresseeFullName:(id)arg1;
- (id)withIsVerified:(_Bool)arg1;
- (id)withIsDefault:(_Bool)arg1;
- (id)withShippingAddressId:(id)arg1;
- (id)build;

@end

