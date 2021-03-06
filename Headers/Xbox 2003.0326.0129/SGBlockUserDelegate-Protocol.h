//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, XBXUser, XBXUserPrivacySettings;

@protocol SGBlockUserDelegate <NSObject>

@optional
- (void)onUserPrivacySettingFailedWithError:(NSError *)arg1 requestContext:(id)arg2;
- (void)onUserPrivacySettingSucceeded:(XBXUserPrivacySettings *)arg1 requestContext:(id)arg2;
- (void)onMultiplayerSummaryFailed:(NSError *)arg1 requestContext:(id)arg2;
- (void)onMultiplayerSummarySucceeded:(NSArray *)arg1 requestContext:(id)arg2;
- (void)onShareIdentityWithUserFailed:(NSArray *)arg1 error:(NSError *)arg2 requestContext:(id)arg3;
- (void)onShareIdentityWithUserSucceeded:(NSArray *)arg1 requestContext:(id)arg2;
- (void)onUnshareIdentityWithUserFailed:(NSArray *)arg1 error:(NSError *)arg2 requestContext:(id)arg3;
- (void)onUnshareIdentityWithUserSucceeded:(NSArray *)arg1 requestContext:(id)arg2;
- (void)onUnblockUserFailed:(XBXUser *)arg1 error:(NSError *)arg2 requestContext:(id)arg3;
- (void)onUnblockUserSucceeded:(XBXUser *)arg1 requestContext:(id)arg2;
- (void)onBlockUserFailed:(XBXUser *)arg1 error:(NSError *)arg2 requestContext:(id)arg3;
- (void)onBlockUserSucceeded:(XBXUser *)arg1 requestContext:(id)arg2;
@end

