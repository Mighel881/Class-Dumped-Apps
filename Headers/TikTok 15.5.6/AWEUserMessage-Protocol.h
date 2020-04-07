//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEUserModel, NSError, NSNumber, NSString;

@protocol AWEUserMessage <NSObject>

@optional
- (void)didFinishSetRemarkWithUser:(AWEUserModel *)arg1;
- (void)didFinishEditProfileFromNewUser:(NSString *)arg1;
- (void)didFinishTurnOffPostNotification:(NSString *)arg1;
- (void)didFinishTurnOnPostNotification:(NSString *)arg1;
- (void)updateFollowRequestCount:(NSNumber *)arg1;
- (void)didFinishShowOneDayWithUser:(NSString *)arg1 status:(long long)arg2;
- (void)didFinishHideOneDayWithUser:(NSString *)arg1 status:(long long)arg2;
- (void)didFinishUnBlockUser:(NSString *)arg1 status:(long long)arg2;
- (void)didFinishBlockUser:(NSString *)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(AWEUserModel *)arg1 status:(long long)arg2 error:(NSError *)arg3;
- (void)didFinishFollowUser:(AWEUserModel *)arg1 status:(long long)arg2 error:(NSError *)arg3;
- (void)didUpdateUserOnLaunch;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishBindPhone;
- (void)didFinishLogout;
- (void)didLoginFailed;
- (void)didCancelLogin;
- (void)didFinishLogin;
- (void)willStartLogin;
@end
