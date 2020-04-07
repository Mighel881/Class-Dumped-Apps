//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DBContentView-Protocol.h"

@class DBFileEntryListLayoutView, DBFileLockOverlayView, DBInfoSheetDropdownButton, DBObserverHandle, DBPathResizeLabel, DBRecentsSingleFileContentViewObject, DBSyncStatusView, DBThemeTemplatesFileCell, NSLayoutAnchor, NSString, UIImageView, UILabel;
@protocol DBContentViewObject;

@interface DBRecentsSingleFileContentView : UIView <DBContentView>
{
    DBRecentsSingleFileContentViewObject *_recentsContentViewObject;
    DBFileEntryListLayoutView *_layoutView;
    UIView *_selectedBackgroundView;
    UIImageView *_thumbnailView;
    UILabel *_titleLabel;
    DBPathResizeLabel *_pathLabel;
    DBInfoSheetDropdownButton *_dropdownView;
    DBFileLockOverlayView *_fileLockOverlayView;
    DBSyncStatusView *_syncStatusView;
    DBObserverHandle *_starredObserver;
    DBObserverHandle *_syncStatusObserver;
    DBThemeTemplatesFileCell *_currentTemplates;
    _Bool _selected;
    _Bool _highlighted;
}

+ (struct CGSize)sizeForContentViewFittingSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (void)db_updateCurrentTemplates;
- (id)db_currentTemplates;
- (void)db_updateSubtitleLabelTextWithTemplates:(id)arg1;
- (void)db_updateTitleLabelTextWithTemplates:(id)arg1;
- (void)db_startObservingSyncStatus;
- (void)db_startObservingStarredTracker:(id)arg1;
- (void)db_updateForHighlightedState;
- (void)db_resetViewForReuse;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)prepareForReuse;
- (void)db_setupFileLockOverlayViewWithFileLockingState:(unsigned long long)arg1;
- (void)db_updateFileLockOverlay;
- (void)contentViewObjectDidUpdate;
- (void)unbindFromContentViewObject;
@property(readonly, nonatomic) id <DBContentViewObject> contentViewObject;
- (void)bindToContentViewObject:(id)arg1;
- (void)db_updateLayoutViewContents;
@property(readonly, nonatomic) NSLayoutAnchor *contentLeadingAnchor;
- (void)db_setupConstraints;
- (void)db_setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) _Bool isPretendingToNotBeAnAccessibilityElement;
@property(readonly) Class superclass;

@end
