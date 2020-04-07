//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VEProcessSampleDelegate-Protocol.h"

@class HTSVideoData, NSString;
@protocol OS_dispatch_queue, VEFetchAssetProtocol, VEProcessSampleDelegate;

@interface VEImageGeneratorUnit : NSObject <VEProcessSampleDelegate>
{
    NSString *_route;
    id <VEProcessSampleDelegate> _downstream;
    HTSVideoData *_videoData;
    id <VEFetchAssetProtocol> _assetFetch;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) id <VEFetchAssetProtocol> assetFetch; // @synthesize assetFetch=_assetFetch;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) __weak id <VEProcessSampleDelegate> downstream; // @synthesize downstream=_downstream;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)setConfig:(id)arg1;
- (void)getImageWithVideoDataAtTime:(CDStruct_1b6d18a9)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)getImageAtTime:(double)arg1 preferredSize:(struct CGSize)arg2 needProcess:(_Bool)arg3 compeletion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
