//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSAuthCore/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, UIApplication;

@protocol AWSSignInProviderApplicationIntercept <NSObject>
- (_Bool)interceptApplication:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)interceptApplication:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
@end

