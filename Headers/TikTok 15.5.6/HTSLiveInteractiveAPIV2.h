//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

#import "HTSLiveLinkMicSignalApi-Protocol.h"

@class NSNumber, NSString;

@interface HTSLiveInteractiveAPIV2 : HTSLiveApi <HTSLiveLinkMicSignalApi>
{
    NSNumber *_roomID;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (id)apiRequestByPath:(id)arg1 param:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendSignal:(id)arg1 toUsers:(id)arg2 channel:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)muteOppositeMic;
- (void)checkPermissionWithType:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)joinChannelWithChannelId:(id)arg1 onAudienceInteract:(_Bool)arg2 finish:(CDUnknownBlockType)arg3;
- (void)joinChannelWithChannelId:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)settingsWithStats:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)interactRivalListOfType:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)interactRivalList:(CDUnknownBlockType)arg1;
- (void)replyWithUserId:(id)arg1 channelID:(id)arg2 replay:(unsigned long long)arg3 finished:(CDUnknownBlockType)arg4;
- (void)cancelInviteToRoomID:(id)arg1 channelID:(id)arg2 userID:(id)arg3 secUid:(id)arg4 finished:(CDUnknownBlockType)arg5;
- (void)inviteRoom:(id)arg1 user:(id)arg2 secUid:(id)arg3 fromRoom:(id)arg4 theme:(id)arg5 duration:(id)arg6 matchType:(id)arg7 subType:(id)arg8 inviteListType:(id)arg9 finished:(CDUnknownBlockType)arg10;
- (void)turnOffWithChannelId:(id)arg1 onAudienceInteract:(_Bool)arg2 finished:(CDUnknownBlockType)arg3;
- (void)turnOffWithChannelId:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)initWithRoomID:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithRoomID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
