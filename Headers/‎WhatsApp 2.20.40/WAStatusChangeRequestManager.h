//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPersistentKeyValueStore;

@interface WAStatusChangeRequestManager : NSObject
{
    WAPersistentKeyValueStore *_keyValueStore;
}

- (void).cxx_destruct;
- (void)checkAndRemoveExpiredRequest;
- (void)clearAllMessageStatusChangeRequestsForKeys:(id)arg1;
- (id)fetchAllStatusChangeRequestsByKeys:(id)arg1;
- (void)addMessageStatusChangeRequest:(id)arg1;
- (id)initWithPersistentKeyValueStore:(id)arg1;

@end

