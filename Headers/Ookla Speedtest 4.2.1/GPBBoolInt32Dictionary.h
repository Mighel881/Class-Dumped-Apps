//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/GPBDictionaryInternalsProtocol-Protocol.h>
#import <SpeedTestEngine/NSCopying-Protocol.h>

@class GPBMessage;

@interface GPBBoolInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    int _values[2];
    _Bool _valueSet[2];
}

- (void)removeAll;
- (void)removeInt32ForKey:(_Bool)arg1;
- (void)setInt32:(int)arg1 forKey:(_Bool)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (_Bool)getInt32:(int *)arg1 forKey:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithInt32s:(const int *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

