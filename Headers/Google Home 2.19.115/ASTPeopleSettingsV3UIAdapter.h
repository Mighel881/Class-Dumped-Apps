//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

#import "ASTLinkLabelDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"

@class ASTReauthenticationController, ASTUIFamilyMember, ASTUIHouseholdSettingsUi, NSMutableArray, NSString;

@interface ASTPeopleSettingsV3UIAdapter : ASTSettingsUIAdapter <ASTLinkLabelDelegate, CNContactPickerDelegate>
{
    _Bool _executeAddSharedContact;
    NSMutableArray *_personV2Array;
    ASTReauthenticationController *_reauthenticationController;
    ASTUIHouseholdSettingsUi *_householdSettings;
    ASTUIFamilyMember *_selfInfo;
}

@property(retain, nonatomic) ASTUIFamilyMember *selfInfo; // @synthesize selfInfo=_selfInfo;
@property(retain, nonatomic) ASTUIHouseholdSettingsUi *householdSettings; // @synthesize householdSettings=_householdSettings;
@property(retain, nonatomic) ASTReauthenticationController *reauthenticationController; // @synthesize reauthenticationController=_reauthenticationController;
@property(retain, nonatomic) NSMutableArray *personV2Array; // @synthesize personV2Array=_personV2Array;
@property(nonatomic) _Bool executeAddSharedContact; // @synthesize executeAddSharedContact=_executeAddSharedContact;
- (void).cxx_destruct;
- (void)label:(id)arg1 didTapLink:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (id)subtitleStringForPerson:(id)arg1;
- (void)addPerson;
- (id)personStreamItemWithPerson:(id)arg1;
- (id)personStreamItemsWithPersonArray:(id)arg1;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (void)createFamilyGroup;
- (void)showDeleteFamilyFailAlert;
- (void)deleteOrLeaveFamilyGroup;
- (void)executeAddSharedContactRequest:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 subtitle:(id)arg2 actionTitle:(id)arg3 actionBlock:(CDUnknownBlockType)arg4 customContentView:(id)arg5;
- (void)showDeleteOrLeaveFamilyAlert;
- (void)acceptInvite;
- (id)menuSectionsForSettings:(id)arg1;
- (id)settingsFilter;
- (id)pageCustomizations;
- (id)initWithSettingsService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

