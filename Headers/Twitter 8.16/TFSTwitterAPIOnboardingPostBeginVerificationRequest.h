//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPI/TFSTwitterAPIEndpointRequest.h>

@interface TFSTwitterAPIOnboardingPostBeginVerificationRequest : TFSTwitterAPIEndpointRequest
{
}

+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)responseHydrationFlags;
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
- (id)initWithFlowToken:(id)arg1 email:(id)arg2 displayName:(id)arg3 phoneNumber:(id)arg4 countryCode:(id)arg5 byVoice:(_Bool)arg6 context:(id)arg7 responseModelBuilder:(id)arg8;

@end

