//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveUserPreviewConfig, IESLiveUserModel, NSNumber, NSString;

@protocol HTSLiveUserPreviewRouter <NSObject>
- (void)changeBanState:(IESLiveUserModel *)arg1;
- (void)showUser:(NSNumber *)arg1 secUserId:(NSString *)arg2 withConfig:(HTSLiveUserPreviewConfig *)arg3;
- (void)openUserPreviewViewFromPushSetting:(long long)arg1;
@end
