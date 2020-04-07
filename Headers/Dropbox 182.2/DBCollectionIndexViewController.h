//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBCollatedListDataProviderUpdateObserver-Protocol.h"
#import "DBCollectionIndexViewChangeDelegate-Protocol.h"
#import "DBCollectionIndexViewSectionTitleProvider-Protocol.h"

@class DBCollatedListDataProvider, DBCollectionIndexView, DBObserverHandle, NSArray, NSString, UISelectionFeedbackGenerator;
@protocol DBCollectionIndexViewControllerDelegate;

@interface DBCollectionIndexViewController : UIViewController <DBCollatedListDataProviderUpdateObserver, DBCollectionIndexViewSectionTitleProvider, DBCollectionIndexViewChangeDelegate>
{
    DBCollectionIndexView *_indexView;
    DBObserverHandle *_collationObserverHandle;
    NSArray *_indexTitles;
    unsigned long long _currentIndex;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _Bool _displaysSearchTile;
    id <DBCollectionIndexViewControllerDelegate> _delegate;
    DBCollatedListDataProvider *_collatedListDataProvider;
}

+ (id)db_localizedAccessibilityValueForIndexTitle:(id)arg1;
+ (long long)db_adjustSectionIndex:(long long)arg1 forDisplaysSearchTile:(_Bool)arg2;
+ (unsigned long long)db_sectionIndexFromRecognizer:(id)arg1 withIndexTitleCount:(unsigned long long)arg2 inIndexView:(id)arg3;
@property(retain, nonatomic) DBCollatedListDataProvider *collatedListDataProvider; // @synthesize collatedListDataProvider=_collatedListDataProvider;
@property(nonatomic) __weak id <DBCollectionIndexViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool displaysSearchTile; // @synthesize displaysSearchTile=_displaysSearchTile;
@property(readonly, nonatomic) NSArray *indexTitles; // @synthesize indexTitles=_indexTitles;
- (void).cxx_destruct;
- (void)db_saveIndexAndNotifyDelegateOfMoveToIndex:(unsigned long long)arg1;
- (void)db_valueChangedForIndexView:(id)arg1 toIndex:(long long)arg2;
- (void)collectionIndexViewDecremented:(id)arg1;
- (void)collectionIndexViewIncremented:(id)arg1;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (void)collatedListDataProvider:(id)arg1 didUpdateWithChanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)collatedListDataProviderDidFullRefresh:(id)arg1;
- (void)db_handleDataProviderUpdate:(id)arg1;
- (void)db_unregisterFromCollationObservation;
- (void)db_processHapticFeedbackForGestureRecognizer:(id)arg1 movingFromIndex:(unsigned long long)arg2;
- (void)db_handleRecognizer:(id)arg1;
- (void)db_tapRecognizerFired:(id)arg1;
- (void)db_panRecognizerFired:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCollatedListDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) DBCollectionIndexView *view; // @dynamic view;

@end
