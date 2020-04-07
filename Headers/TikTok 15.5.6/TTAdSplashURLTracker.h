//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface TTAdSplashURLTracker : NSObject
{
    NSURLSession *_uploadSession;
}

+ (id)shareURLTracker;
@property(retain, nonatomic) NSURLSession *uploadSession; // @synthesize uploadSession=_uploadSession;
- (void).cxx_destruct;
- (void)trackURLEventWithAdId:(id)arg1 logExtra:(id)arg2 extra:(id)arg3;
- (id)getUserAgent;
- (id)getDiskCacheDict;
- (void)saveDiskCacheDict:(id)arg1;
- (void)removeURLFromCacheWithKey:(id)arg1;
- (long long)timesCachedKey:(id)arg1 dataDict:(id)arg2;
- (void)addTimesCachedKey:(id)arg1 dataDict:(id)arg2;
- (id)cachedValueWithKey:(id)arg1 subKey:(id)arg2 dataDict:(id)arg3;
- (id)urlCachedKey:(id)arg1 dataDict:(id)arg2;
- (void)cacheFailedURL:(id)arg1 dict:(id)arg2;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)trackURL:(id)arg1 model:(id)arg2 isNormal:(_Bool)arg3;
- (id)adReplaceUrl:(id)arg1 timeStamp:(long long *)arg2;
- (id)normalReplaceUrl:(id)arg1 timeStamp:(long long *)arg2;
- (void)thirdMonitorUrls:(id)arg1;
- (void)thirdMonitorUrl:(id)arg1;
- (void)trackURLs:(id)arg1 model:(id)arg2;
- (void)trackURL:(id)arg1 model:(id)arg2;
- (void)trackURLs:(id)arg1;
- (void)trackURL:(id)arg1;
- (id)init;
- (void)dealloc;

@end
