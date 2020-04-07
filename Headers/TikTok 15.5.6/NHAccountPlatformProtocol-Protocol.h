//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL, UIApplication;

@protocol NHAccountPlatformProtocol <NSObject>
- (void)requestLogin:(void (^)(NSDictionary *))arg1 failure:(void (^)(NSError *))arg2 cancel:(void (^)(void))arg3;

@optional
- (NSString *)getCurrentAppleUserId;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (_Bool)handleOpenURL:(NSURL *)arg1;
- (void)requestBind:(void (^)(NSDictionary *))arg1 failure:(void (^)(NSError *))arg2 cancel:(void (^)(void))arg3;
- (_Bool)application:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (_Bool)requestClearAccount;
- (_Bool)hasActiveSession;
- (void)requestAccessTokenWithConfiguration:(NSDictionary *)arg1 success:(void (^)(NSDictionary *))arg2 failure:(void (^)(NSError *))arg3 cancel:(void (^)(void))arg4;
- (void)requestAccessToken:(void (^)(NSDictionary *))arg1 failure:(void (^)(NSError *))arg2 cancel:(void (^)(void))arg3;
- (_Bool)isAccessTokenGetterAvailable;
- (_Bool)isSSOAvailable;
- (void)lazyRegisterApp:(NSString *)arg1;
- (void)registerApp:(NSString *)arg1;
@end
