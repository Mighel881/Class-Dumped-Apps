//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSMutableDictionary;

@interface Cache : NSObject
{
    FMDatabaseQueue *_dbq;
    NSMutableDictionary *_memCache;
}

+ (void)db_setupNewDatabase:(id)arg1;
+ (id)db_escapeFilePath:(id)arg1;
- (void).cxx_destruct;
- (id)dataForKey:(id)arg1;
- (_Bool)isDataCachedForKey:(id)arg1;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)invalidateDataForKey:(id)arg1;
- (id)initWithCacheFilePath:(id)arg1;

@end
