//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRTJSONSerialization : NSObject
{
}

+ (id)JSONArrayFromObjects:(id)arg1;
+ (id)JSONDictionaryFromObject:(id)arg1;
+ (id)objectsWithEntityName:(id)arg1 fromJSONArray:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
+ (id)objectWithEntityName:(id)arg1 fromJSONDictionary:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
+ (id)objectsWithEntityName:(id)arg1 fromJSONData:(id)arg2 inContext:(id)arg3 error:(id *)arg4;

@end

