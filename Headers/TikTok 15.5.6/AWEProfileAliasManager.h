//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEProfileAliasManagerProtocol-Protocol.h"

@class NSString;

@interface AWEProfileAliasManager : NSObject <AWEProfileAliasManagerProtocol>
{
}

+ (_Bool)canShowQuickEditAliasAlertViewWithFollowStatus:(long long)arg1 contactName:(id)arg2 isEnterprise:(_Bool)arg3;
+ (void)showQuickEditAliasAlertViewWithContactName:(id)arg1 isEnterprise:(_Bool)arg2 currentUser:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
