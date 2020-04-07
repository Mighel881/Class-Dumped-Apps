//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;
@protocol OS_dispatch_queue;

@interface DBResourceLoaderFileHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSFileManager *_fileManager;
    NSString *_cacheDirectory;
}

+ (void)test_setFileManagerMock:(id)arg1;
- (void).cxx_destruct;
- (void)clearCacheSync;
- (void)performAsyncQuery:(CDUnknownBlockType)arg1;
- (id)db_setupFileManager;
- (id)initWithCacheDirectory:(id)arg1;

@end
