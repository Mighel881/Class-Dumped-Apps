//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _BDBackFillStore : NSObject
{
    unsigned long long _countLimit;
    NSMutableDictionary *_dbCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dbCache; // @synthesize dbCache=_dbCache;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
- (void).cxx_destruct;
- (void)clear;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)insertObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

