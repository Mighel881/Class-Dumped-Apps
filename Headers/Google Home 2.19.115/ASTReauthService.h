//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTSSOManager, GTMSessionFetcherService, SSOIdentity;

@interface ASTReauthService : NSObject
{
    SSOIdentity *_identity;
    ASTSSOManager *_ssoManager;
    GTMSessionFetcherService *_sessionFetcherService;
}

- (void).cxx_destruct;
- (void)reauthenticateWithPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentity:(id)arg1 menuService:(id)arg2;

@end

