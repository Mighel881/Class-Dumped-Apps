//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol ASTAuthProvider;

@interface ASTAuthService : NSObject
{
    NSString *_authToken;
    id <ASTAuthProvider> _authProvider;
}

@property(retain, nonatomic) id <ASTAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(readonly, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (void).cxx_destruct;
- (void)requestTokenAuthURLForTargetURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startSignInWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestToken:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *authTokens;
@property(readonly, nonatomic) NSString *userID;
- (id)initWithAuthProvider:(id)arg1;

@end

