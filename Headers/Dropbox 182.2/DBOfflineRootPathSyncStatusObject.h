//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBOfflineRootPathSyncStatusObject : NSObject
{
    long long _syncingStatus;
    unsigned long long _syncId;
}

@property(readonly, nonatomic) unsigned long long syncId; // @synthesize syncId=_syncId;
@property(nonatomic) long long syncingStatus; // @synthesize syncingStatus=_syncingStatus;
- (id)initWithSyncId:(unsigned long long)arg1;

@end
