//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoCallNetworkRequestInfo;
@protocol IGAPIClient, IGRequestToken;

@interface IGVideoCallLimitedSerialQueue : NSObject
{
    id <IGAPIClient> _networker;
    IGVideoCallNetworkRequestInfo *_pendingRequest;
    id <IGRequestToken> _inFlightRequest;
}

- (void).cxx_destruct;
- (void)_processPendingRequestIfAvailable;
- (void)enqueueRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithNetworker:(id)arg1;

@end

