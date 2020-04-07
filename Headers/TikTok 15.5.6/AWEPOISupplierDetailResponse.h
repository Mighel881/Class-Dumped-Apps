//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEPOIHotelPolicyModel, NSArray, NSString;

@interface AWEPOISupplierDetailResponse : AWEBaseApiModel
{
    NSString *_supplierID;
    NSArray *_service;
    NSArray *_facility;
    AWEPOIHotelPolicyModel *_policy;
    NSString *_hotelDescription;
}

+ (id)facilityJSONTransformer;
+ (id)serviceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *hotelDescription; // @synthesize hotelDescription=_hotelDescription;
@property(retain, nonatomic) AWEPOIHotelPolicyModel *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSArray *facility; // @synthesize facility=_facility;
@property(retain, nonatomic) NSArray *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *supplierID; // @synthesize supplierID=_supplierID;
- (void).cxx_destruct;

@end
