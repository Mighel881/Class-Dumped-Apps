//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBAppURL : NSObject
{
}

+ (id)db_dropboxDomainsBlacklist;
+ (_Bool)db_isUniversalLink:(id)arg1;
+ (id)db_convertToDropboxCustomURLSchemeURL:(id)arg1;
+ (id)db_convertToDropboxEMMCustomURLSchemeURL:(id)arg1;
+ (id)db_convertUniversalLink:(id)arg1 toAppURLType:(unsigned long long)arg2;
+ (_Bool)isDropboxHostLink:(id)arg1 withPathPrefixes:(id)arg2;
+ (_Bool)isDeepLink:(id)arg1;
+ (_Bool)isNotesLink:(id)arg1;
+ (_Bool)isGrantAccessLink:(id)arg1;
+ (_Bool)isNativeTransferLink:(id)arg1;
+ (_Bool)isNativeSharedLink:(id)arg1;
+ (id)convertURL:(id)arg1 toAppURLType:(unsigned long long)arg2;

@end
