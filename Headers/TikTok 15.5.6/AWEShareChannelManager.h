//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEShareChannelManager-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AWEShareChannelManager : HTSService <AWEShareChannelManager>
{
    NSMutableDictionary *_channels;
    NSMutableArray *_channelNames;
}

@property(retain, nonatomic) NSMutableArray *channelNames; // @synthesize channelNames=_channelNames;
@property(retain, nonatomic) NSMutableDictionary *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
- (unsigned long long)optionForChannel:(long long)arg1;
- (_Bool)isChannelAvailable:(long long)arg1;
- (id)sortedShareCountFromArray:(id)arg1;
- (id)defaultSortingForTikTok;
- (id)defaultSortingForMusically;
- (id)defaultSortingForI18N;
- (id)sortedChannelsFromChannels:(id)arg1 sorting:(id)arg2;
- (id)serverSortedSecondRowChannels:(id)arg1;
- (id)sortedChannelsFromSecondRowChannels:(id)arg1;
- (id)sortedChannelsFromFirstRowChannels:(id)arg1;
- (id)customizedGifChannelsForMask:(unsigned long long)arg1;
- (id)customizedChannelsForMask:(unsigned long long)arg1;
- (id)channelsForMask:(unsigned long long)arg1;
- (id)channelsForMask:(unsigned long long)arg1 withForceSetup:(_Bool)arg2;
- (void)channelsForMask:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerShareChannelType:(long long)arg1 options:(unsigned long long)arg2;
- (id)allChannels;
- (id)channelForType:(long long)arg1;
- (void)removeShareChannelForType:(long long)arg1;
- (void)addOrReplaceShareChannel:(id)arg1;
- (id)channelsSupportShareType:(long long)arg1 inChannels:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
