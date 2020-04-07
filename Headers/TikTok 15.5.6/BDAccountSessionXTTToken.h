//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDAccountSessionRSA, NSString;

@interface BDAccountSessionXTTToken : NSObject
{
    struct _opaque_pthread_rwlock_t _xTTTokenLock;
    _Bool _sessionSDKIsActive;
    _Bool _hasSendSessionExpired;
    NSString *_x_tt_token;
    NSString *_domain;
    BDAccountSessionRSA *_rsa;
}

+ (_Bool)setXTokenWithResponse:(id)arg1 responseError:(id)arg2 sessionHasExpired:(_Bool)arg3;
+ (void)addXTokenToRequest:(id)arg1;
+ (id)getDomain;
+ (void)setDomain:(id)arg1;
+ (id)shared;
@property(nonatomic) _Bool hasSendSessionExpired; // @synthesize hasSendSessionExpired=_hasSendSessionExpired;
@property(retain, nonatomic) BDAccountSessionRSA *rsa; // @synthesize rsa=_rsa;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *x_tt_token; // @synthesize x_tt_token=_x_tt_token;
- (void).cxx_destruct;
- (void)addXTokenToRequest:(id)arg1;
- (_Bool)authChangeTokenWithHexString:(id)arg1 token:(id)arg2;
- (_Bool)setXToken:(id)arg1 tokenSign:(id)arg2;
- (void)wapLoginClearToken;
@property(nonatomic) _Bool sessionSDKIsActive; // @synthesize sessionSDKIsActive=_sessionSDKIsActive;
- (id)init;
- (void)dealloc;

@end
