//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStatefulTableViewController.h>

#import <PSPDFKitUI/PSPDFDocumentInfoController-Protocol.h>
#import <PSPDFKitUI/PSPDFSegmentImageProviding-Protocol.h>

@class NSArray, NSByteCountFormatter, NSString, PSPDFContainerViewController, PSPDFDocument, UIImage;
@protocol PSPDFEmbeddedFilesViewControllerDelegate;

@interface PSPDFEmbeddedFilesViewController : PSPDFStatefulTableViewController <PSPDFDocumentInfoController, PSPDFSegmentImageProviding>
{
    PSPDFDocument *_document;
    id <PSPDFEmbeddedFilesViewControllerDelegate> _delegate;
    NSArray *_embeddedFiles;
    NSByteCountFormatter *_byteCountFormatter;
}

@property(readonly, nonatomic) NSByteCountFormatter *byteCountFormatter; // @synthesize byteCountFormatter=_byteCountFormatter;
@property(copy, nonatomic) NSArray *embeddedFiles; // @synthesize embeddedFiles=_embeddedFiles;
@property(nonatomic) __weak id <PSPDFEmbeddedFilesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *segmentImage;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)embeddedFileForIndexPath:(id)arg1;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithDocument:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak PSPDFContainerViewController *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

