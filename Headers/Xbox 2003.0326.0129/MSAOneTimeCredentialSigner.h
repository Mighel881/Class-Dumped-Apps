//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSADAToken, NSData, NSDate, NSString;

@interface MSAOneTimeCredentialSigner : NSObject
{
    NSDate *_serverTime;
    MSADAToken *_token;
    NSData *_nonce;
    NSString *_appId;
}

- (void).cxx_destruct;
- (_Bool)getNonce:(out id *)arg1 error:(out id *)arg2;
- (_Bool)generateOneTimeSignedCredential:(out id *)arg1 error:(out id *)arg2;
- (id)initWithDAToken:(id)arg1 serverTime:(id)arg2 appId:(id)arg3;
- (id)init;

@end

