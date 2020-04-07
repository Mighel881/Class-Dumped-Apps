//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBRemoteNotificationAction-Protocol.h"

@class NSString;

@interface DBCommentRemoteNotificationAction : NSObject <DBRemoteNotificationAction>
{
}

+ (void)db_openCommentsForNotification:(id)arg1 forUserId:(id)arg2;
+ (void)db_displayAlertForCommentsNotification:(id)arg1 forUserId:(id)arg2;
+ (id)db_messageFromNotification:(id)arg1;
- (_Bool)db_isCommentNotificationBeingHandledElsewhereForActivityKey:(id)arg1;
- (void)handleRemoteNotificationWhileInactive:(id)arg1 userId:(id)arg2;
- (void)handleRemoteNotificationWhileActive:(id)arg1 userId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
