//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBXAccountInfo, NSArray, NSString;
@protocol DBUnlinkOperationObserver;

@protocol DBUserStateManagerAccountOperationProtocol <NSObject>
- (_Bool)hasUnlinkOperationsQueued;
- (void)removeUnlinkOperationObserver:(id <DBUnlinkOperationObserver>)arg1;
- (void)addUnlinkOperationObserver:(id <DBUnlinkOperationObserver>)arg1;
- (void)queueAccessorBlock:(void (^)(void))arg1;
- (void)unlinkContinueAsAccountsInKeychain:(void (^)(void))arg1;
- (void)queueLoadContinueAsAccountsFromKeychain:(void (^)(void))arg1;
- (void)queueAddAccountWithAccessToken:(NSString *)arg1 accessTokenSecret:(NSString *)arg2 forUserID:(NSString *)arg3 withAccountInfo:(DBXAccountInfo *)arg4 withCompletionBlock:(void (^)(_Bool, NSError *))arg5;
- (void)queueUpdateWithNewAccountInfo:(DBXAccountInfo *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)queueUnlinkUserWithUserIds:(NSArray *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2 forceUnlink:(_Bool)arg3 reason:(long long)arg4;
- (void)queueUnlinkUserWithUserId:(NSString *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2 forceUnlink:(_Bool)arg3 reason:(long long)arg4;
@end
