//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSXPickAndPriceUnits : NSObject
{
    int _pickByUnit;
    int _pickByDisplayUnit;
    int _priceByUnit;
    int _priceByDisplayUnit;
    float _averagePickSize;
    int _averagePickSizeUnit;
    float _defaultQuantity;
    float _quantityIncrement;
}

@property(readonly, nonatomic) float quantityIncrement; // @synthesize quantityIncrement=_quantityIncrement;
@property(readonly, nonatomic) float defaultQuantity; // @synthesize defaultQuantity=_defaultQuantity;
@property(readonly, nonatomic) int averagePickSizeUnit; // @synthesize averagePickSizeUnit=_averagePickSizeUnit;
@property(readonly, nonatomic) float averagePickSize; // @synthesize averagePickSize=_averagePickSize;
@property(readonly, nonatomic) int priceByDisplayUnit; // @synthesize priceByDisplayUnit=_priceByDisplayUnit;
@property(readonly, nonatomic) int priceByUnit; // @synthesize priceByUnit=_priceByUnit;
@property(readonly, nonatomic) int pickByDisplayUnit; // @synthesize pickByDisplayUnit=_pickByDisplayUnit;
@property(readonly, nonatomic) int pickByUnit; // @synthesize pickByUnit=_pickByUnit;
- (id)initWithPickAndPriceUnits:(id)arg1;

@end

