//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveCloudResourceService-Protocol.h"

@class NSString;

@interface AWELiveCloudResourceServiceIMP : NSObject <IESLiveCloudResourceService>
{
}

- (void)syncResourcesWithAccessKey:(id)arg1 channels:(id)arg2 resourceVersion:(id)arg3 isForcible:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerAccessKey:(id)arg1 channels:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

