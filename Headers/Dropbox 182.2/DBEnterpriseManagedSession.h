//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBKeychain;

@interface DBEnterpriseManagedSession : NSObject
{
    DBKeychain *_keychain;
}

- (void).cxx_destruct;
- (unsigned long long)managedSessionStateForUserId:(id)arg1 accessToken:(id)arg2 currentManagementToken:(id)arg3;
- (unsigned long long)managedSessionStateIgnoringManagementTokenForUserId:(id)arg1 accessToken:(id)arg2;
- (void)setManagedSessionWithUserId:(id)arg1 accessToken:(id)arg2 managementToken:(id)arg3;
- (void)notifyAccountDidUnlinkUserId:(id)arg1 accessToken:(id)arg2;
- (id)db_keychainData;
- (id)init;

@end
