//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBSDKKeychain : NSObject
{
}

+ (id)rpcTaskOperationQueue;
+ (id)v1TokenConversionOperationQueue;
+ (void)convertV1TokenToV2:(id)arg1 appKey:(id)arg2 appSecret:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;
+ (id)v1TokensDataIOSSync;
+ (id)v1TokensDataIOSCore;
+ (_Bool)checkAndPerformV1TokenMigration:(CDUnknownBlockType)arg1 queue:(id)arg2 appKey:(id)arg3 appSecret:(id)arg4;
+ (void)checkAccessibilityMigration;
+ (id)queryWithDict:(id)arg1;
+ (id)lookupTokenDataWithKey:(id)arg1;
+ (_Bool)storeDataValueWithKey:(id)arg1 value:(id)arg2;
+ (_Bool)clearAllTokens;
+ (_Bool)deleteTokenWithKey:(id)arg1;
+ (id)retrieveAllTokenIds;
+ (id)retrieveTokenWithKey:(id)arg1;
+ (_Bool)storeValueWithKey:(id)arg1 value:(id)arg2;
+ (void)initialize;

@end
