//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError;
@protocol HMENotificationsManagerDelegate, SSOIdentity;

@protocol HMENotificationsManagerProtocol <NSObject>
@property(nonatomic) __weak id <HMENotificationsManagerDelegate> delegate;
- (void)didReceiveRemoteNotification:(NSDictionary *)arg1 fetchCompletionHandler:(void (^)(unsigned long long))arg2;
- (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg1;
- (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg1;
- (void)switchIdentity:(id <SSOIdentity>)arg1;
- (void)requestRemoteNotificationsPermissionsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)requestRemoteNotificationsPermissions;
@end

