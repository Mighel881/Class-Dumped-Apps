//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWTRCardEntity.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TWTRJSONConvertible-Protocol.h"

@class NSDictionary, NSString, TWTRPlayerCardEntityBindingValues;

@interface TWTRPlayerCardEntity : TWTRCardEntity <TWTRJSONConvertible, NSCoding, NSCopying>
{
    long long _playerCardType;
    TWTRPlayerCardEntityBindingValues *_bindingValues;
    NSDictionary *_validatedDictionary;
}

+ (id)validateJSONDictionary:(id)arg1;
+ (id)JSONValidator;
+ (_Bool)canInitWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSDictionary *validatedDictionary; // @synthesize validatedDictionary=_validatedDictionary;
@property(readonly, nonatomic) TWTRPlayerCardEntityBindingValues *bindingValues; // @synthesize bindingValues=_bindingValues;
@property(readonly, nonatomic) long long playerCardType; // @synthesize playerCardType=_playerCardType;
- (void).cxx_destruct;
- (_Bool)isEqualToPlayerCardEntity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPropertiesFromValidatedDictionary:(id)arg1;
- (id)initWithValidatedDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
