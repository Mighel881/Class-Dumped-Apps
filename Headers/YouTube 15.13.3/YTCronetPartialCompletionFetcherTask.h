//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCronetFetcherTask.h>

#import <Module_Framework/HAMDataLoadTaskDelegate-Protocol.h>
#import <Module_Framework/YTFetcherTask-Protocol.h>

@class GIMMe, NSString;

@interface YTCronetPartialCompletionFetcherTask : YTCronetFetcherTask <YTFetcherTask, HAMDataLoadTaskDelegate>
{
    CDUnknownBlockType _urlResponseHandler;
    CDUnknownBlockType _valueHandler;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (void)dataLoadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataLoadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (id)initWithRequest:(id)arg1 requestDecorators:(id)arg2 configuration:(id)arg3 engine:(struct Cronet_Engine *)arg4 URLResponseHandler:(CDUnknownBlockType)arg5 valueHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

