//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStatefulTableViewController.h>

#import <PSPDFKitUI/PSPDFBookmarkListDataSourceDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFBookmarkTableViewCellDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFDocumentInfoController-Protocol.h>
#import <PSPDFKitUI/PSPDFPreviewingHandlerDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFSegmentImageProviding-Protocol.h>
#import <PSPDFKitUI/PSPDFStyleable-Protocol.h>

@class NSArray, NSString, PSPDFBookmark, PSPDFBookmarkListDataSource, PSPDFContainerViewController, PSPDFDispatchQueue, PSPDFDocument, PSPDFPreviewingHandler, UIBarButtonItem, UIImage;
@protocol PSPDFBookmarkViewControllerDelegate;

@interface PSPDFBookmarkViewController : PSPDFStatefulTableViewController <PSPDFPreviewingHandlerDelegate, PSPDFBookmarkListDataSourceDelegate, PSPDFBookmarkTableViewCellDelegate, PSPDFDocumentInfoController, PSPDFSegmentImageProviding, PSPDFStyleable>
{
    _Bool _forcesStatusBarHidden;
    _Bool _allowCopy;
    _Bool _allowEditing;
    _Bool _shouldStartEditingBookmarkNameWhenAdding;
    PSPDFContainerViewController *_container;
    PSPDFDocument *_document;
    NSArray *_leftActionButtonItems;
    NSArray *_rightActionButtonItems;
    id <PSPDFBookmarkViewControllerDelegate> _delegate;
    UIBarButtonItem *_addButtonItem;
    PSPDFPreviewingHandler *_previewingHandler;
    PSPDFBookmarkListDataSource *_bookmarkListDataSource;
    PSPDFDispatchQueue *_textParserQueue;
    PSPDFBookmark *_addedBookmark;
}

@property(retain, nonatomic) PSPDFBookmark *addedBookmark; // @synthesize addedBookmark=_addedBookmark;
@property(readonly, nonatomic) PSPDFDispatchQueue *textParserQueue; // @synthesize textParserQueue=_textParserQueue;
@property(retain, nonatomic) PSPDFBookmarkListDataSource *bookmarkListDataSource; // @synthesize bookmarkListDataSource=_bookmarkListDataSource;
@property(retain, nonatomic) PSPDFPreviewingHandler *previewingHandler; // @synthesize previewingHandler=_previewingHandler;
@property(retain, nonatomic) UIBarButtonItem *addButtonItem; // @synthesize addButtonItem=_addButtonItem;
@property(nonatomic) __weak id <PSPDFBookmarkViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldStartEditingBookmarkNameWhenAdding; // @synthesize shouldStartEditingBookmarkNameWhenAdding=_shouldStartEditingBookmarkNameWhenAdding;
@property(nonatomic) _Bool allowEditing; // @synthesize allowEditing=_allowEditing;
@property(nonatomic) _Bool allowCopy; // @synthesize allowCopy=_allowCopy;
@property(nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak PSPDFContainerViewController *container; // @synthesize container=_container;
@property(nonatomic) _Bool forcesStatusBarHidden; // @synthesize forcesStatusBarHidden=_forcesStatusBarHidden;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *segmentImage;
- (void)bookmarkListDataSource:(id)arg1 updateBookmarksWithIndexPathDiff:(id)arg2;
- (void)bookmarkListDataSourceDidEndUpdates:(id)arg1;
- (void)bookmarkListDataSourceWillBeginUpdates:(id)arg1;
- (void)bookmarkListDataSourceDidSuppressUpdates:(id)arg1;
- (_Bool)bookmarkListDataSourceShouldSuppressUpdates:(id)arg1;
- (void)bookmarkListDataSourceDidReloadBookmarks:(id)arg1 aborted:(_Bool)arg2;
- (void)bookmarkCell:(id)arg1 didUpdateBookmarkString:(id)arg2;
- (id)previewingHandler:(id)arg1 previewingSessionForIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)fetchPagePreviewTextForCell:(id)arg1 withBookmark:(id)arg2 forRowAtIndexPath:(id)arg3 inTableView:(id)arg4;
- (void)fetchThumbnailForCell:(id)arg1 withBookmark:(id)arg2 forRowAtIndexPath:(id)arg3 inTableView:(id)arg4;
- (id)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2 inTableView:(id)arg3;
- (void)spreadIndexDidChange:(id)arg1;
- (void)scrollToIndexPath:(id)arg1 startEditing:(_Bool)arg2 animated:(_Bool)arg3;
- (void)scrollToAddedBookmarkIfNeeded;
- (void)updateAfterTableViewContentsMightHaveChangedAnimated:(_Bool)arg1;
- (void)updateBookmarkListDataSource;
- (void)configureBarButtonItems:(_Bool)arg1;
- (_Bool)hasBookmarks;
@property(retain, nonatomic) NSArray *rightActionButtonItems; // @synthesize rightActionButtonItems=_rightActionButtonItems;
@property(retain, nonatomic) NSArray *leftActionButtonItems; // @synthesize leftActionButtonItems=_leftActionButtonItems;
@property(nonatomic) _Bool allowMultipleBookmarksPerPage;
@property(nonatomic) unsigned long long sortOrder; // @dynamic sortOrder;
- (_Bool)isEmpty;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pspdf_willTransitionToPresentationStyle:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
@property(readonly, copy) NSString *description;
- (void)commonInit;
- (id)initWithDocument:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)doneAction:(id)arg1;
- (void)addBookmarkAction:(id)arg1;
- (void)updateBarButtonItems;
- (void)updateBookmarkViewAnimated:(_Bool)arg1;
- (id)configureCell:(id)arg1 withBookmark:(id)arg2 forRowAtIndexPath:(id)arg3 inTableView:(id)arg4;

// Remaining properties
@property(nonatomic) long long barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBarTranslucent;
@property(readonly) Class superclass;

@end
