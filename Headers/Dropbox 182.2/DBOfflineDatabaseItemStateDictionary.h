//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DBOfflineDatabaseItemStateDictionary : NSObject
{
    NSMutableDictionary *_internalDict;
}

- (void).cxx_destruct;
- (id)description;
- (id)pathEnumerator;
- (id)pathsWithStateSet;
- (long long)stateForPath:(id)arg1;
- (void)setState:(long long)arg1 forPath:(id)arg2;
- (void)setStatesFromDict:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end
