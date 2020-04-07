//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterKit/NSURLSessionDelegate-Protocol.h>
#import <TwitterKit/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, TWTRServerTrustEvaluator;

@interface TWTRURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    TWTRServerTrustEvaluator *_trustEvaluator;
}

@property(readonly, nonatomic) TWTRServerTrustEvaluator *trustEvaluator; // @synthesize trustEvaluator=_trustEvaluator;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
