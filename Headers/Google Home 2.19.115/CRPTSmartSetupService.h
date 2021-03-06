//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRPTService;

@interface CRPTSmartSetupService : NSObject
{
    id <CRPTService> _cryptauthService;
    _Bool _useEnrollment2;
}

+ (id)smartSetupService;
- (void).cxx_destruct;
- (long long)timeSinceScreenlockEnable;
- (long long)incrementCounterForUserID:(id)arg1 error:(id *)arg2;
- (id)identityAssertionMessageFromPayload:(id)arg1 userID:(id)arg2;
- (id)encodedPublicKeyForUserID:(id)arg1;
- (id)initWithService:(id)arg1;

@end

