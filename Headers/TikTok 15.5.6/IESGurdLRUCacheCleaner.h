//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESGurdCacheCleaner-Protocol.h"

@class IESGurdLRUCacheLinkedList, NSString;

@interface IESGurdLRUCacheCleaner : NSObject <IESGurdCacheCleaner>
{
    NSString *_accessKey;
    IESGurdLRUCacheLinkedList *_channelsLinkedList;
}

+ (id)cleanerWithAccessKey:(id)arg1 channelsArray:(id)arg2 configuration:(id)arg3;
@property(retain, nonatomic) IESGurdLRUCacheLinkedList *channelsLinkedList; // @synthesize channelsLinkedList=_channelsLinkedList;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
- (void).cxx_destruct;
- (id)debugInfoDictionary;
- (id)cleanerTypeString;
- (void)gurdDidAddChannelWhitelist:(id)arg1;
- (void)gurdDidCleanPackageForChannel:(id)arg1;
- (void)gurdDidGetCachePackageForChannel:(id)arg1;
- (void)gurdDidApplyPackageForChannel:(id)arg1;
- (id)channelsToBeCleaned;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
