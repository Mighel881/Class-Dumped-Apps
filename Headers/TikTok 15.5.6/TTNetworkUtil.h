//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTNetworkUtil : NSObject
{
}

+ (id)getNONEmptyString:(id)arg1;
+ (id)calculateFileMd5WithFilePath:(id)arg1;
+ (void)dispatchDelayedBlockImmediately:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)dispatchBlockAfterDelay:(long long)arg1 block:(CDUnknownBlockType)arg2;
+ (id)md5Hex:(id)arg1;
+ (id)filterSensitiveParams:(id)arg1 outputUrl:(id *)arg2 onlyInHeader:(_Bool)arg3 keepPlainQuery:(_Bool)arg4;
+ (id)URLString:(id)arg1 appendCommonParams:(id)arg2;
+ (id)URLWithURLString:(id)arg1 baseURL:(id)arg2;
+ (id)URLWithURLString:(id)arg1;

@end
