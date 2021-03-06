//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGInviteFBFriendCellDelegate-Protocol.h>

@class IGFBUser, IGInviteFriendsHelper, IGUserSession, NSString;
@protocol IGInviteFBFriendsSectionControllerDelegate;

@interface IGInviteFBFriendsSectionController : IGListSectionController <IGInviteFBFriendCellDelegate>
{
    NSString *_module;
    id <IGInviteFBFriendsSectionControllerDelegate> _delegate;
    IGFBUser *_item;
    IGInviteFriendsHelper *_inviteHelper;
    IGUserSession *_userSession;
    unsigned long long _entryPoint;
}

@property(nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGInviteFriendsHelper *inviteHelper; // @synthesize inviteHelper=_inviteHelper;
@property(readonly, nonatomic) IGFBUser *item; // @synthesize item=_item;
@property(nonatomic) __weak id <IGInviteFBFriendsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 entryPoint:(unsigned long long)arg2 extra:(id)arg3;
- (id)_loggingExtraWithCell:(id)arg1 FBID:(id)arg2;
- (void)fbFriendCell:(id)arg1 wantToHideFBUser:(id)arg2;
- (void)fbFriendCell:(id)arg1 wantToInviteFBUser:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithEntryPoint:(unsigned long long)arg1 userSession:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

