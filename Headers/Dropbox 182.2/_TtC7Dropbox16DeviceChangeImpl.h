//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP7Dropbox12DeviceChange_-Protocol.h"

@interface _TtC7Dropbox16DeviceChangeImpl : NSObject <_TtP7Dropbox12DeviceChange_>
{
    // Error parsing type: , name: apiClient
    // Error parsing type: , name: boltClient
    // Error parsing type: , name: boltClientObserverRetryTime
    // Error parsing type: , name: boltObserverHandle
    // Error parsing type: , name: deviceChangeObserverMap
}

- (void).cxx_destruct;
- (id)init;
- (void)boltUpdatedWithNewInfo:(id)arg1;
- (void)boltUpdatedWithInvalidChannel:(id)arg1;
- (void)boltUpdatedWithError:(id)arg1 channel:(id)arg2;
- (id)addDeviceChangeObserver:(id)arg1;
- (void)dealloc;
- (id)initWithApiClient:(id)arg1 boltClient:(id)arg2;

@end
