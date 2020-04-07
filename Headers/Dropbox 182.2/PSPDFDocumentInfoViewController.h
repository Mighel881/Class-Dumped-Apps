//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStaticTableViewController.h>

#import <PSPDFKitUI/PSPDFDocumentInfoController-Protocol.h>
#import <PSPDFKitUI/PSPDFOverridable-Protocol.h>
#import <PSPDFKitUI/PSPDFSegmentImageProviding-Protocol.h>
#import <PSPDFKitUI/PSPDFStyleable-Protocol.h>

@class NSArray, NSMeasurementFormatter, NSMutableDictionary, NSString, PSPDFContainerViewController, PSPDFDocument, UIBarButtonItem, UIImage;
@protocol PSPDFDocumentInfoViewControllerDelegate, PSPDFDocumentInfoViewControllerDelegate><PSPDFDelegateProxying, PSPDFOverridable;

@interface PSPDFDocumentInfoViewController : PSPDFStaticTableViewController <PSPDFDocumentInfoController, PSPDFSegmentImageProviding, PSPDFStyleable, PSPDFOverridable>
{
    _Bool _forcesStatusBarHidden;
    _Bool _allowEditing;
    PSPDFDocument *_document;
    PSPDFContainerViewController *_container;
    id <PSPDFOverridable> _overrideDelegate;
    NSArray *_rightActionButtonItems;
    NSArray *_leftActionButtonItems;
    id <PSPDFDocumentInfoViewControllerDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
    NSMutableDictionary *_editedMetadata;
    long long _selectedPageBinding;
    NSMeasurementFormatter *_measurementFormatter;
    UIBarButtonItem *_cancelItem;
}

@property(retain, nonatomic) UIBarButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(readonly, nonatomic) NSMeasurementFormatter *measurementFormatter; // @synthesize measurementFormatter=_measurementFormatter;
@property(nonatomic) long long selectedPageBinding; // @synthesize selectedPageBinding=_selectedPageBinding;
@property(readonly, nonatomic) NSMutableDictionary *editedMetadata; // @synthesize editedMetadata=_editedMetadata;
@property(retain) id <PSPDFDocumentInfoViewControllerDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(retain, nonatomic) NSArray *leftActionButtonItems; // @synthesize leftActionButtonItems=_leftActionButtonItems;
@property(retain, nonatomic) NSArray *rightActionButtonItems; // @synthesize rightActionButtonItems=_rightActionButtonItems;
@property(nonatomic) __weak id <PSPDFOverridable> overrideDelegate; // @synthesize overrideDelegate=_overrideDelegate;
@property(nonatomic) __weak PSPDFContainerViewController *container; // @synthesize container=_container;
@property(nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
@property(nonatomic) _Bool forcesStatusBarHidden; // @synthesize forcesStatusBarHidden=_forcesStatusBarHidden;
- (void).cxx_destruct;
- (_Bool)applyChanges:(id)arg1;
@property(readonly, nonatomic) UIImage *segmentImage;
- (_Bool)isModalInPopover;
- (_Bool)isModalInPresentation;
- (_Bool)isModal;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)readOnlyCellModelWithKey:(id)arg1 value:(id)arg2;
- (id)sizeCellModelsForDocumentProvider:(id)arg1;
- (id)sizeSectionModelForDocumentProvider:(id)arg1;
- (void)updatePageBindingValue:(long long)arg1;
- (id)pageBindingCellModel;
- (id)pageBindingSectionModel;
- (id)changesCellModelsForDocumentProvider:(id)arg1;
- (id)changesSectionModelForDocumentProvider:(id)arg1;
- (id)contentCellModelsForDocumentProvider:(id)arg1;
- (id)contentSectionModelForDocumentProvider:(id)arg1;
- (id)sectionModels;
- (void)reloadTableView;
- (void)commitChanges;
- (void)doneAction:(id)arg1;
- (void)updateNavigationItemsEnabledState;
- (void)cancelEditing;
- (void)updateToolbarItems;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool allowEditing; // @synthesize allowEditing=_allowEditing;
- (_Bool)isEditingPossible;
- (_Bool)prefersStatusBarHidden;
- (void)resetEditingStateForCurrentDocument;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) id <PSPDFDocumentInfoViewControllerDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFDocumentInfoViewControllerDelegate> delegate;
- (Class)classForClass:(Class)arg1;

// Remaining properties
@property(nonatomic) long long barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBarTranslucent;
@property(readonly) Class superclass;

@end
