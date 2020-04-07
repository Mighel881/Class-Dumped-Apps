//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWENetworkConfigProtocol-Protocol.h"

@class NSString;

@interface AWENetworkConfigImpl : NSObject <AWENetworkConfigProtocol>
{
}

+ (void)load;
- (_Bool)userIsLogin;
- (id)userCurrentRegion;
- (id)userResidenceRegion;
- (id)getCurrentUser;
- (id)userAccountRegion;
- (void)testAccountRegion:(id)arg1;
- (void)testSocialNameForUse:(id)arg1;
- (_Bool)sharkEnabled;
- (_Bool)needTTNetRoute;
- (_Bool)needTTNetRegion;
- (_Bool)networkXTokenEnable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
