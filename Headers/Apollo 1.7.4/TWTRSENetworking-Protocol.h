//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterKit/NSObject-Protocol.h>

@class TWTRSETweet;
@protocol TWTRSEAccount;

@protocol TWTRSENetworking <NSObject>
- (void)loadHydratedTwitterUserForAccount:(id <TWTRSEAccount>)arg1 completion:(void (^)(id <TWTRSETwitterUser>))arg2;
- (void)sendTweet:(TWTRSETweet *)arg1 fromAccount:(id <TWTRSEAccount>)arg2 completion:(void (^)(unsigned long long))arg3;
@end
