//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWENetworkOfflineCache : NSObject
{
}

+ (void)setMemoryLimit:(unsigned long long)arg1 diskLimit:(unsigned long long)arg2;
+ (void)removeAllCaches;
+ (void)fetchCachedJSONResponseForKey:(id)arg1 maxAge:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)saveJSONResponse:(id)arg1 forCacheKey:(id)arg2;
+ (id)cacheQueue;
+ (id)liteCache;
+ (id)mainCache;

@end
