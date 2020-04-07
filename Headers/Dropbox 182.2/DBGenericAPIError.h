//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBRequestError, NSError, NSString;

@interface DBGenericAPIError : NSObject
{
    NSError *_v1Error;
    DBRequestError *_v2RequestError;
}

- (void).cxx_destruct;
- (id)db_v1ErrorEquivalent;
- (id)v1ErrorEquivalent;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) _Bool isCancelledError;
@property(readonly, nonatomic) _Bool isPathRootError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
@property(readonly, nonatomic) _Bool isNetworkConnectionLostError;
@property(readonly, nonatomic) _Bool isCannotConnectToHostError;
@property(readonly, nonatomic) _Bool isTimedOutError;
@property(readonly, nonatomic) _Bool isNotConnectedToInternetError;
- (id)v2RequestError;
- (id)v1Error;
- (id)initForCancelled;
- (id)initForUnknownError;
- (id)initForNotConnectedToInternet;
- (id)initWithV2RequestError:(id)arg1;
- (id)initWithV1Error:(id)arg1;

@end
