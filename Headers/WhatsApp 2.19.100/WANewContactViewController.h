//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UITableViewDelegate-Protocol.h"
#import "WAAddressBookCountryPickerDelegate-Protocol.h"
#import "WAAddressBookLabelPickerDelegate-Protocol.h"
#import "WAAddressBookPropertyPickerDelegate-Protocol.h"
#import "WAContactQRCodeScannerViewControllerDelegate-Protocol.h"
#import "WAContactQRViewControllerDelegate-Protocol.h"
#import "WACountryPickerControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSSet, NSString, WAContact, WACountryInfo, WAUserJID, _WANewContactTableView;
@protocol WANewContactViewControllerDelegate;

@interface WANewContactViewController : WAViewController <UITableViewDelegate, WACountryPickerControllerDelegate, WAAddressBookPropertyPickerDelegate, WAAddressBookLabelPickerDelegate, WAAddressBookCountryPickerDelegate, WAContactQRCodeScannerViewControllerDelegate, WAContactQRViewControllerDelegate>
{
    NSMutableArray *_properties;
    NSArray *_expandedPropertyKeys;
    NSArray *_allPropertyKeys;
    NSSet *_addtionalPropertyKeys;
    NSArray *_namePropertyKeys;
    _WANewContactTableView *_tableView;
    _Bool _expanded;
    NSDictionary *_propertiesDict;
    NSIndexPath *_indexPathForEditingCell;
    NSMutableArray *_expandedProperties;
    _Bool _dismissKeyboardIfTooHigh;
    _Bool _isModified;
    _Bool _firstTime;
    _Bool _shouldPerformPhoneNumberCheckOnExistingPhoneNumber;
    id <WANewContactViewControllerDelegate> _delegate;
    WAContact *_originalContact;
    WAContact *_contactToEdit;
    WAUserJID *_userJIDForUnknowUser;
    WACountryInfo *_selectedCountry;
}

+ (id)controllerForSavingVCardContact:(id)arg1 intoContact:(id)arg2;
+ (id)controllerForContact:(id)arg1 isModified:(_Bool)arg2;
+ (id)controllerForContact:(id)arg1;
@property(retain, nonatomic) WACountryInfo *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(retain, nonatomic) WAUserJID *userJIDForUnknowUser; // @synthesize userJIDForUnknowUser=_userJIDForUnknowUser;
@property(nonatomic) _Bool shouldPerformPhoneNumberCheckOnExistingPhoneNumber; // @synthesize shouldPerformPhoneNumberCheckOnExistingPhoneNumber=_shouldPerformPhoneNumberCheckOnExistingPhoneNumber;
@property(retain, nonatomic) WAContact *contactToEdit; // @synthesize contactToEdit=_contactToEdit;
@property(retain, nonatomic) WAContact *originalContact; // @synthesize originalContact=_originalContact;
@property(nonatomic) __weak id <WANewContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteContact;
- (void)reallyDeleteContact;
- (void)updateFonts;
- (void)wa_fontSizeDidChange;
- (void)newContactPropertyCell:(id)arg1 requestContactViewControllerForUserJID:(id)arg2;
- (void)newContactPropertyCellNeedResize:(id)arg1;
- (void)newContactPropertyCellDidCollapse:(id)arg1;
- (void)newContactPropertyCellDidExpand:(id)arg1;
- (void)newContactPropertyCellRequestLabelPicker:(id)arg1;
- (void)newContactPropertyCellRequestAddressCountryPicker:(id)arg1;
- (void)newContactPropertyCellRequestCountryPicker:(id)arg1;
- (_Bool)newContactPropertCellShouldReturn:(id)arg1;
- (void)newContactPropertCellValueDidChange:(id)arg1;
- (void)newContactPropertCellDidEndEditing:(id)arg1;
- (void)newContactPropertCellDidBeginEditing:(id)arg1;
- (void)contactQRViewControllerDidRequestQRScanner:(id)arg1;
- (void)contactQRCodeScannerViewController:(id)arg1 didRequestSaveContact:(id)arg2;
- (void)contactQRCodeScannerViewControllerDidRequestShareCode:(id)arg1;
- (void)resizeTableView;
- (void)addViaQR:(id)arg1;
- (void)showQRViewController;
- (void)resetFormWithContact:(id)arg1;
- (void)resignAndFindNextFirstResponderForCell:(id)arg1;
- (void)addNewValueToMultiValueProperty:(id)arg1;
- (void)expandForm;
- (id)unusedContactProperties;
- (void)validateChanges;
- (id)tableIndexPathForContactProperty:(id)arg1;
- (void)insertNameProperty:(id)arg1 refresh:(_Bool)arg2;
- (unsigned long long)insertIndexForProperty:(id)arg1;
- (void)addressBookPropertyPickerDidCancel:(id)arg1;
- (void)addressBookPropertyPicker:(id)arg1 didFinishWithProperty:(id)arg2;
- (void)addContactPropertyField;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)adjustContentInsetForKeyboardHeight:(double)arg1;
- (void)addressBookCountryPickerDidCancel:(id)arg1;
- (void)addressBookCountryPicker:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)addressBookLabelPickerDidFinish:(id)arg1;
- (void)addressBookLabelPickerDidCancel:(id)arg1;
- (void)countryPicker:(id)arg1 didSelectCountry:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showLimitWarning:(id)arg1;
- (void)dismiss;
- (void)doneAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)setupFormForExistingFields;
- (void)setupForm;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
