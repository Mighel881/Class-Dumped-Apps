//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVPuppetValue.h>

@class NSArray, NSNumber;

@interface PTVPuppetTransformValue : PTVPuppetValue
{
    NSArray *_inputs;
    double _multiplier;
    double _offset;
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

+ (id)puppetValueWithInput:(id)arg1 multiplier:(double)arg2 offset:(double)arg3;
+ (id)puppetValueWithInput:(id)arg1;
+ (id)puppetValueFromDictionary:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double multiplier; // @synthesize multiplier=_multiplier;
@property(retain, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
- (void).cxx_destruct;
- (_Bool)referencesPuppetValueNamed:(id)arg1;
- (void)reset;
- (void)update:(double)arg1;
- (double)doubleValue;
- (id)initWithInputs:(id)arg1;
- (id)initWithInput:(id)arg1;
- (id)init;

@end

