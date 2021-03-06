//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModUserListViewController.h"

#import "ModFormViewControllerDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class NSString;

@interface ApprovedUsersViewController : ModUserListViewController <RUIActionSheetViewControllerDelegate, ModFormViewControllerDelegate>
{
}

- (void)form:(id)arg1 completed:(_Bool)arg2 context:(id)arg3;
- (void)tryRemove:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)modUserTableCell:(id)arg1 didTapOverflowButton:(id)arg2 forUser:(id)arg3;
- (void)userSelected:(id)arg1;
- (void)addUserButtonPress:(id)arg1;
- (void)addNewUserButton;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

