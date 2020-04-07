//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEPushNoticeProtocol-Protocol.h"

@class NSString;

@interface AWEDouyinPushNoticeManager : NSObject <AWEPushNoticeProtocol>
{
}

+ (id)sharedInstance;
- (void)p_trackPushNotification:(id)arg1;
- (void)p_switchOptionByPushNotice;
- (void)setPushConfigAndGoToSystemSettingInterface:(id)arg1;
- (void)recordShowPushNotice:(id)arg1;
- (void)recordClickClosePushNotice:(id)arg1;
- (_Bool)p_canShowPushNotice;
- (_Bool)canShowPushNoticeForComment;
- (_Bool)canShowPushNoticeForIM;
- (_Bool)canShowPushNoticeForNotice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
