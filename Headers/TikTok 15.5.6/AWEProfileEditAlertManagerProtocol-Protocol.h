//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEUserModel, NSString;

@protocol AWEProfileEditAlertManagerProtocol <NSObject>
+ (void)showFansEditFloatingBarCount;
+ (_Bool)shouldShowFansEditFloatingBar;
+ (void)showProfileEditFloatingBarCount;
+ (_Bool)shouldShowProfileEditFloatingBar;
+ (_Bool)enableReviewProfileStyle;
+ (void)showEditNicknameOrAvatarAlertViewWithType:(unsigned long long)arg1 enterFrom:(NSString *)arg2;
+ (_Bool)shouldShowAlertAfterComment;
+ (_Bool)shouldShowAlertAfterFollow:(AWEUserModel *)arg1;
@end

