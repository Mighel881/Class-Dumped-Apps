//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSFastEnumeration-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface WACachedCopyMutableDictionary : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *_mutableDictionary;
    NSDictionary *_immutableDictionary;
}

- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSArray *allValues;
@property(readonly, copy, nonatomic) NSArray *allKeys;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSDictionary *immutableDictionary;
- (void)mutateDictionary:(CDUnknownBlockType)arg1;
- (id)init;

@end

