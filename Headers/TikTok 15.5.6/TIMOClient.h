//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMTokenUpdater-Protocol.h"

@class NSString;

@interface TIMOClient : NSObject <TIMTokenUpdater>
{
}

+ (id)gitHash;
+ (id)buildNumber;
+ (id)version;
+ (id)client;
- (void)updateToken:(id)arg1 forUser:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long currentUserID;
- (void)logoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)loginWithUserID:(long long)arg1 secUserID:(id)arg2 token:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loginWithUserID:(long long)arg1 secUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)p_handleTokenInvalidNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
