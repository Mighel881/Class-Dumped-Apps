//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWENoticeModuleService-Protocol.h"

@class NSString;

@interface AWENoticeModuleService : HTSService <AWENoticeModuleService>
{
}

- (id)notificationListDataControllerWithGroup:(long long)arg1;
- (void)userIgnoreLivePush;
- (void)resetMaximumCountOfLivePushAtColdLanuch;
- (void)showQuickEditAliasAlertViewWithContactName:(id)arg1 isEnterprise:(_Bool)arg2 currentUser:(id)arg3;
- (void)clearUnreadOfficialAssistantWithNoticeGroup:(long long)arg1 unreadCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)officialDataControllerForNoticeTypeGroup:(id)arg1;
- (id)officialDataControllerForNoticeType:(long long)arg1;
- (struct CGSize)relationLabelSizeWithText:(id)arg1;
- (id)createRelationLabel;
- (void)markTutorialVideoShownToUser;
- (id)makeTutorialVideoEntryViewRefreshAtOnce:(_Bool)arg1;
- (id)getInteractNotificationManager;
- (void)setAdVideoPlaying:(_Bool)arg1;
- (void)startupFetch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
