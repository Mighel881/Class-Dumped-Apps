//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBContentLinkAnalytics : NSObject
{
}

+ (id)db_asNumber:(id)arg1;
+ (void)db_addError:(id)arg1 toParams:(id)arg2;
+ (void)db_addFileEntry:(id)arg1 toParams:(id)arg2;
+ (void)db_addUserId:(id)arg1 toParams:(id)arg2;
+ (void)db_addNsId:(id)arg1 toParams:(id)arg2;
+ (void)db_addContentLinkActionableData:(id)arg1 toParams:(id)arg2;
+ (id)db_baseParameters;
+ (id)db_accesslLevelAnalyticsStringForResolvedAccessLevel:(id)arg1;
+ (id)db_sourceAnalyticsStringForSource:(long long)arg1;
+ (void)db_logEvent:(id)arg1 actionableData:(id)arg2 fileEntry:(id)arg3 params:(id)arg4;
+ (void)logCopySharedLink:(id)arg1 source:(long long)arg2 resolvedAccessLevel:(id)arg3 fileEntry:(id)arg4;
+ (void)logSync:(id)arg1 error:(id)arg2;
+ (void)logSync:(id)arg1;
+ (void)logCopy:(id)arg1;
+ (void)logDownload:(id)arg1 fileEntry:(id)arg2;
+ (void)logPreview:(id)arg1;
+ (void)logAuth:(id)arg1 asSignUp:(_Bool)arg2;
+ (void)logVerifyEmail:(id)arg1;
+ (void)logReceivedLink;

@end
