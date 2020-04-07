//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBNotification, DBUserState, NSString;

@protocol DBNotificationActionProtocol <NSObject>
- (void)handleUserActionWithNotification:(DBNotification *)arg1 identifier:(NSString *)arg2 userState:(DBUserState *)arg3 completion:(void (^)(void))arg4;
- (void)handleActionForBackgroundStateNotification:(DBNotification *)arg1 userState:(DBUserState *)arg2 withCompletion:(void (^)(UILocalNotification *))arg3;
- (void)handleActionForActiveStateNotification:(DBNotification *)arg1 userState:(DBUserState *)arg2 fromUserTap:(unsigned long long)arg3;
- (_Bool)shouldHandleNotification:(DBNotification *)arg1 userState:(DBUserState *)arg2;
@end
