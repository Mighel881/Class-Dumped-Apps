//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEUserModel, NSString, NSURL, UIImage;

@protocol AWECompleteInfoUtilProtocol <NSObject>
+ (float)getCompletionPercentWithUser:(AWEUserModel *)arg1 avatarImage:(UIImage *)arg2 avatarUrl:(NSURL *)arg3;
+ (NSString *)completeInfoTipString;
+ (NSString *)bindPhoneTipString;
+ (void)removeCompleteProfileView;
+ (void)enterProfileEditPage;
+ (void)removeBindPhoneView;
+ (void)enterBindPhonePage;
+ (_Bool)shouldShowBindPhoneTip;
+ (_Bool)shouldShowTipView;
@end
