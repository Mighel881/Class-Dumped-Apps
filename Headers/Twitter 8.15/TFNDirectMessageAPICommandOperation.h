//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class TFSTwitterAPICommandService;
@protocol TFSTwitterAPICommandCancellable;

@interface TFNDirectMessageAPICommandOperation : TFSConcurrentOperation
{
    _Bool _allowsLocalOnlyUpdate;
    TFSTwitterAPICommandService *_service;
    id <TFSTwitterAPICommandCancellable> _request;
}

@property(retain) id <TFSTwitterAPICommandCancellable> request; // @synthesize request=_request;
@property(readonly, nonatomic) TFSTwitterAPICommandService *service; // @synthesize service=_service;
@property _Bool allowsLocalOnlyUpdate; // @synthesize allowsLocalOnlyUpdate=_allowsLocalOnlyUpdate;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (void)updateOptimistically;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (void)run;
- (void)cancel;
- (id)init;

@end
