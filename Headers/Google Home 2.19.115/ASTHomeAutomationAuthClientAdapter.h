//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTHAAuthAdapterRequest, ASTHAAuthAdapterResponse;

@interface ASTHomeAutomationAuthClientAdapter : NSObject
{
    ASTHAAuthAdapterRequest *_authAdapterRequest;
    ASTHAAuthAdapterResponse *_authAdapterResponse;
}

+ (id)getAuthTokenForDevice:(id)arg1;
@property(retain, nonatomic) ASTHAAuthAdapterResponse *authAdapterResponse; // @synthesize authAdapterResponse=_authAdapterResponse;
@property(retain, nonatomic) ASTHAAuthAdapterRequest *authAdapterRequest; // @synthesize authAdapterRequest=_authAdapterRequest;
- (void).cxx_destruct;
- (id)authInfo;
- (void)setResponse:(id)arg1;
- (id)request;
- (id)init;

@end

