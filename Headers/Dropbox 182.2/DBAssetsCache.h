//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBResourceLoaderFileHelper;

@interface DBAssetsCache : NSObject
{
    DBResourceLoaderFileHelper *_fileHelper;
    unsigned long long _cacheSize;
}

+ (void)db_checkAndManageCacheSize:(id)arg1 cacheSize:(unsigned long long)arg2;
+ (id)db_localFileNameFromResourceURL:(id)arg1;
+ (id)db_sha1StringFromInput:(id)arg1;
- (void).cxx_destruct;
- (id)test_fileHelper;
- (void)clearCacheSync;
- (void)cacheFileWithFileName:(id)arg1 data:(id)arg2;
- (void)cacheFileWith:(id)arg1 data:(id)arg2;
- (void)clearResourceForFileName:(id)arg1;
- (void)clearResourceForURL:(id)arg1;
- (void)getFileWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCacheDirectory:(id)arg1 cacheSize:(unsigned long long)arg2;

@end
