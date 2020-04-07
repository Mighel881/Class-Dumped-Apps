//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMContactSynchronizerDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class AWEIMContactSynchronizer, NSArray, NSMutableSet, NSString;

@interface AWEIMContactDataManager : NSObject <AWEUserMessage, AWEIMContactSynchronizerDelegate>
{
    _Bool _hasFetchSucceed;
    AWEIMContactSynchronizer *_contactSynchronizer;
    NSMutableSet *_pendingContactListCompletionBlocks;
    NSArray *_filterShareModelList;
}

+ (id)localContactList:(_Bool)arg1;
+ (id)filterNotFriendUser:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *filterShareModelList; // @synthesize filterShareModelList=_filterShareModelList;
@property(retain, nonatomic) NSMutableSet *pendingContactListCompletionBlocks; // @synthesize pendingContactListCompletionBlocks=_pendingContactListCompletionBlocks;
@property(retain, nonatomic) AWEIMContactSynchronizer *contactSynchronizer; // @synthesize contactSynchronizer=_contactSynchronizer;
@property(nonatomic) _Bool hasFetchSucceed; // @synthesize hasFetchSucceed=_hasFetchSucceed;
- (void).cxx_destruct;
- (void)p_getUserProfile:(id)arg1 secUserID:(id)arg2 detailCompletion:(CDUnknownBlockType)arg3;
- (void)contactSynchronyComplete;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishSetRemarkWithUser:(id)arg1;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishLogout;
- (id)_getUser:(id)arg1 inContactList:(id)arg2;
- (id)_recentContactListFromContactList;
- (id)p_calculateUnfollowUserAndMakeTheyUnfollowWithOldContactList:(id)arg1 newContactSet:(id)arg2;
- (void)_fetchLocalContactList:(CDUnknownBlockType)arg1;
- (void)_fetchWholeContactAndRecentContactList:(CDUnknownBlockType)arg1;
- (void)p_successFetchTranspondContactList:(CDUnknownBlockType)arg1 contactList:(id)arg2;
- (void)p_successFetchTranspondShareModelList:(CDUnknownBlockType)arg1 shareModelList:(id)arg2;
- (void)p_v2_fetchTranspondShareModelList:(CDUnknownBlockType)arg1 filterNotFriendUser:(_Bool)arg2;
- (void)p_v1_fetchTranspondShareModelList:(CDUnknownBlockType)arg1 filterNotFriendUser:(_Bool)arg2;
- (_Bool)isFriend:(id)arg1;
- (_Bool)isGroupInChatList:(id)arg1;
- (id)saveAweUser:(id)arg1;
- (void)deleteUser:(id)arg1;
- (void)queryUser:(id)arg1 secUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addUser:(id)arg1 secUserID:(id)arg2 detailCompletion:(CDUnknownBlockType)arg3;
- (void)addUser:(id)arg1 secUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFriendListWithCount:(long long)arg1 sync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)maxTranspondShareUserCount;
- (void)fetchTranspondShareModelList:(CDUnknownBlockType)arg1 filterNotFriendUser:(_Bool)arg2;
- (_Bool)didShowedTranspondFilterNotFriendUser:(_Bool)arg1;
- (void)fetchTranspondContactList:(CDUnknownBlockType)arg1 filterNotFriendUser:(_Bool)arg2;
- (void)fetchTranspondContactList:(CDUnknownBlockType)arg1;
- (void)fetchWholeContactAndRecentContactList:(CDUnknownBlockType)arg1;
- (void)setupContactDataManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
