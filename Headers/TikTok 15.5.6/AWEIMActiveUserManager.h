//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEIMActiveUserUploader, NSMutableDictionary;

@interface AWEIMActiveUserManager : NSObject
{
    NSMutableDictionary *_activeCache;
    NSMutableDictionary *_messagerMap;
    AWEIMActiveUserUploader *_activeUploader;
}

+ (id)activeUserIndicativeView;
+ (void)acquireActiveWithSecUidList:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)cachedActiveUserInfoWithSecUid:(id)arg1;
+ (void)cancelMonitorActiveWithUniqueFlag:(id)arg1;
+ (void)cancelAllMonitorActiveWithPageIdentifier:(id)arg1;
+ (void)resumeAllMonitorActiveWithPageIdentifier:(id)arg1;
+ (void)pauseAllMonitorActiveWithPageIdentifier:(id)arg1;
+ (void)monitorActiveWithSecUid:(id)arg1 uid:(id)arg2 type:(long long)arg3 pageIdentifier:(id)arg4 uniqueFlag:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)setUpUserActiveUploader;
+ (id)sharedInstance;
@property(retain, nonatomic) AWEIMActiveUserUploader *activeUploader; // @synthesize activeUploader=_activeUploader;
@property(retain, nonatomic) NSMutableDictionary *messagerMap; // @synthesize messagerMap=_messagerMap;
@property(retain, nonatomic) NSMutableDictionary *activeCache; // @synthesize activeCache=_activeCache;
- (void).cxx_destruct;

@end
