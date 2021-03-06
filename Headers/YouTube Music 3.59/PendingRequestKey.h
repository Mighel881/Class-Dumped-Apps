//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURLRequest;
@protocol SSOAuthorization;

@interface PendingRequestKey : NSObject <NSCopying>
{
    NSURLRequest *_request;
    id <SSOAuthorization> _authorizer;
}

+ (id)keyWithRequest:(id)arg1 authorizer:(id)arg2;
@property(readonly, nonatomic) id <SSOAuthorization> authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 authorizer:(id)arg2;

@end

