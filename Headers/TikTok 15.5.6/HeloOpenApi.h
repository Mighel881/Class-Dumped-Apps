//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HeloOpenApi : NSObject
{
}

+ (_Bool)updateLocale:(id)arg1;
+ (id)getApiVersion;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)isHeloAppInstalled;
+ (_Bool)sendAuthReq:(id)arg1 viewController:(id)arg2 delegate:(id)arg3;
+ (_Bool)registerApp:(id)arg1;
+ (void)unregisterLogDelegate;
+ (void)registerLogDelegate:(id)arg1;
+ (void)registerEventDelegate:(id)arg1;

@end
