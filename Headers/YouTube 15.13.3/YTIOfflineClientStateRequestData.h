//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface YTIOfflineClientStateRequestData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTotalOfflineStorageBytes; // @dynamic hasTotalOfflineStorageBytes;
@property(nonatomic) _Bool hasUsedOfflineStorageBytes; // @dynamic hasUsedOfflineStorageBytes;
@property(nonatomic) unsigned long long totalOfflineStorageBytes; // @dynamic totalOfflineStorageBytes;
@property(nonatomic) unsigned long long usedOfflineStorageBytes; // @dynamic usedOfflineStorageBytes;

@end
