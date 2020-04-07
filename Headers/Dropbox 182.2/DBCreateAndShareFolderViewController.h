//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileNameActionViewController.h"

#import "DBSharedContentAccessControllerDelegate-Protocol.h"
#import "DBSharedContentInvitationCellDelegate-Protocol.h"

@class DBSharedContentInvitationCell, DBSharingInviteImagePlaceholderCell, NSArray, NSNumber, NSString, UIView;
@protocol DBFileEntry><DBWithUserState;

@interface DBCreateAndShareFolderViewController : DBFileNameActionViewController <DBSharedContentInvitationCellDelegate, DBSharedContentAccessControllerDelegate>
{
    NSArray *_createAndShareFolderSections;
    DBSharedContentInvitationCell *_invitationCell;
    DBSharingInviteImagePlaceholderCell *_placeholderCell;
    _Bool _shouldRestrictAudience;
    double _keyboardTableOverlapHeight;
    id <DBFileEntry><DBWithUserState> _userStateFileEntry;
    NSNumber *_memberCount;
    _Bool _invitationCellCompositionModeOn;
    NSArray *_availableAccessLevels;
    UIView *_zeroHeightHeaderView;
    UIView *_autoHeightHeaderView;
    _Bool _isShareConfirmation;
}

+ (id)db_createPlaceholderCell;
- (void).cxx_destruct;
- (void)sharedContentAccessController:(id)arg1 selectedAccess:(long long)arg2;
- (_Bool)db_shouldShowPlaceholderSection;
- (id)db_createShareFolderWithInfo;
- (void)db_handleKeyboardNotification:(id)arg1;
- (void)db_subscribeToKeyboardNotifications;
- (_Bool)shouldAllowAction;
- (void)updateDoneBarButtonItem;
- (void)didPressDone;
- (void)didPressCancel;
- (void)sharedContentInvitationCellDidTapOnAccessLevelButton:(id)arg1;
- (void)sharedContentInvitationCellSharingValidityUpdated:(id)arg1;
- (void)sharedContentInvitationCellDidFocusOnInputField:(id)arg1;
- (void)sharedContentInvitationCellDidUpdateDisplayState:(id)arg1;
- (void)db_updateViewToMatchInvitationCellCompositionMode;
- (void)db_turnOffInvitationCellCompositionMode;
- (void)db_turnOnInvitationCellCompositionModeIfNecessary;
- (unsigned long long)db_sectionIdWithExtraSection:(long long)arg1;
- (long long)db_extraSectionWithSectionId:(unsigned long long)arg1;
- (void)db_updateTableViewSections;
- (double)db_invitationCellHeight;
- (void)db_updateAudienceSectionAccessories;
- (long long)db_accessoryTypeForAudienceSectionAtRow:(long long)arg1;
- (id)db_teamName;
- (_Bool)shouldHighlightRow:(long long)arg1 inExtraSection:(long long)arg2;
- (void)didSelectRowAtRow:(long long)arg1 inExtraSection:(long long)arg2;
- (double)heightForRow:(long long)arg1 inExtraSection:(long long)arg2;
- (id)titleForHeaderInExtraSection:(long long)arg1;
- (id)titleForFooterInExtraSection:(long long)arg1;
- (double)heightForFooterInExtraSection:(long long)arg1;
- (double)heightForHeaderInExtraSection:(long long)arg1;
- (id)cellForRow:(long long)arg1 inExtraSection:(long long)arg2;
- (long long)numberOfRowsInExtraSection:(long long)arg1;
- (long long)numberOfExtraSections;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)db_updateWithResult:(id)arg1;
- (void)db_sharedInitWithFileEntry:(id)arg1 action:(long long)arg2 actionsController:(id)arg3;
- (id)initWithFileEntry:(id)arg1 delegate:(id)arg2;
- (id)initForShareConfirmationWithFileEntry:(id)arg1 folderName:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
