//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSString;

@interface FileCacheURLProtocol : NSURLProtocol <NSStreamDelegate>
{
    NSInputStream *fileInputStream;
    _Bool _stopLoadingRequested;
}

+ (void)fileCacheURLThreadRun;
+ (id)fileCacheURLThread;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)db_parseFileCacheURL:(id)arg1;
+ (int)db_accountRoleFromURLProtocolAccountRole:(unsigned long long)arg1;
+ (id)db_accountRoleStringFromUserId:(id)arg1;
+ (id)URLForPath:(id)arg1 sharedLink:(id)arg2;
+ (id)URLForPath:(id)arg1 userId:(id)arg2 sharedLink:(id)arg3;
+ (id)URLForPath:(id)arg1 userId:(id)arg2;
+ (void)setup;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)db_didStopLoading;
- (void)db_didStartLoading;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
