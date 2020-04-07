//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEUserRecommendModuleService-Protocol.h"

@class NSString;

@interface AWEUserRecommendModuleService : HTSService <AWEUserRecommendModuleService>
{
}

- (Class)userRecommendReasonLabelClass;
- (id)userRecommendReasonLabel;
- (Class)userInfoButtonsViewClass;
- (id)userInfoButtonsView;
- (id)familiarPopupModalViewControllerWithDataController:(id)arg1;
- (id)recommendPersonViewControllerWithUserID:(id)arg1 recommendType:(long long)arg2 enterFrom:(id)arg3 needContactCell:(_Bool)arg4;
- (id)inviteViaCommandViewControllerWithConfiguration:(id)arg1;
- (id)aweInviteFriendManager;
- (void)uploadAddressBookOnView:(id)arg1 isPresented:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAddressListAuthorizationOnLiveViewController:(id)arg1;
- (id)userRecommendManager;
- (id)aweAddressBookManager;
- (Class)aweUserRecommendViewControllerClass;
- (Class)aweInviteViewControllerClass;
- (id)interestedListViewControllerWithEnterFrom:(id)arg1 recommendController:(id)arg2;
- (id)secondTabEmptyInviteViewControllerWithEnterFrom:(id)arg1;
- (id)aweShowAndFindFriendsViewController;
- (Class)recommendPersonTrackManagerClass;
- (Class)recommendUserDataControllerClass;
- (id)recommendUserDataControllerWithUserID:(id)arg1 type:(long long)arg2 enterFrom:(id)arg3;
- (id)recommendUserDataControllerWithType:(long long)arg1;
- (id)recommendUserDataControllerForMessage;
- (id)recommendUserDataControllerForFansList;
- (id)recommendUserDataControllerWithUserID:(id)arg1 withType:(long long)arg2 andRecommendCount:(long long)arg3 pageCount:(unsigned long long)arg4;
- (id)followEmptyHintViewControllerWithType:(long long)arg1;
- (id)inviteFriendManager;
- (id)UserFollowingAlertSharedManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
