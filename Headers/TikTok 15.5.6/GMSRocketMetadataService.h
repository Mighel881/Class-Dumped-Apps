//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IVMetadataService-Protocol.h"

@class NSCache, NSMutableDictionary, NSString;
@protocol IVMetadataService, IVMetrics;

@interface GMSRocketMetadataService : NSObject <IVMetadataService>
{
    id <IVMetadataService> _metadataService;
    NSCache *_panoCache;
    NSMutableDictionary *_requests;
}

- (void).cxx_destruct;
- (id)keyFromPhotoId:(const struct PhotoId *)arg1;
- (id)keyFromLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 source:(int)arg4;
- (id)panoCache;
- (void)searchPhotoByLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 source:(int)arg4 metrics:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)searchPhoto:(struct PhotoId)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 source:(int)arg5 metrics:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)preparePhoto:(struct PhotoId)arg1 metrics:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)wrapRequestForKey:(id)arg1 photo:(struct PhotoId)arg2 completion:(CDUnknownBlockType)arg3 action:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak id <IVMetrics> metricsDelegate;
- (void)clearCache;
- (id)initWithMetadataService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
