//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

@class NSMutableArray, UILabel, UITableViewCell, WAActivityIndicatorView, WADatabaseUsageDetailCell, WADiskUsageRowData, WADiskUsageTableViewController, WADiskUsageThumbnailView;

@interface WADatabaseUsageDetailsTableViewController : WATableViewController
{
    WADiskUsageRowData *_rowData;
    unsigned long long _totalMessageCount;
    double _idealSizeLabelWidth;
    _Bool _needsHeaderUpdate;
    _Bool _isLoading;
    NSMutableArray *_sizeNeverResults;
    NSMutableArray *_sizeAlwaysResults;
    UITableViewCell *_clearCell;
    UITableViewCell *_confirmCell;
    UITableViewCell *_confirmNotStarredCell;
    UITableViewCell *_cancelCell;
    WADatabaseUsageDetailCell *_detailCell;
    WADiskUsageTableViewController *_parentDiskUsageController;
    WADiskUsageThumbnailView *_profilePictureView;
    UILabel *_messageTextLabel;
    UILabel *_sizeTextLabel;
    UITableViewCell *_loadingCell;
    WAActivityIndicatorView *_loadingIndicator;
}

@property(retain, nonatomic) WAActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UITableViewCell *loadingCell; // @synthesize loadingCell=_loadingCell;
@property(retain, nonatomic) UILabel *sizeTextLabel; // @synthesize sizeTextLabel=_sizeTextLabel;
@property(retain, nonatomic) UILabel *messageTextLabel; // @synthesize messageTextLabel=_messageTextLabel;
@property(retain, nonatomic) WADiskUsageThumbnailView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic) __weak WADiskUsageTableViewController *parentDiskUsageController; // @synthesize parentDiskUsageController=_parentDiskUsageController;
- (void).cxx_destruct;
- (void)performDeletionForHelper:(id)arg1;
- (void)presentConfirmationForHelper:(id)arg1 title:(id)arg2 inGroup:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)isAnyTypeSelected;
- (void)applyEditingTransition:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)canSelectResult:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCellBackgroundColor:(id)arg1 withResult:(id)arg2 isEditing:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshTableViewWithAction:(CDUnknownBlockType)arg1;
- (void)updateMessageCount;
- (void)updateContent;
- (void)addRows:(id)arg1;
- (void)updateWithRowDetails:(id)arg1 linkCounts:(id)arg2 manager:(id)arg3;
- (void)updateConfirmTextColor;
- (void)createButtons;
- (void)updateCellLayout;
- (void)updateFonts;
- (void)wa_fontSizeDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

