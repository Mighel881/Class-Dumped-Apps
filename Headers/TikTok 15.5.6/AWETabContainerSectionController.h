//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseListSectionController.h"

#import "AWETabContentViewControllerDelegate-Protocol.h"

@class AWETabContentViewController, HMSegmentedControl, NSString;
@protocol AWETabContainerSectionControllerDataSource, AWETabContainerSectionControllerDelegate;

@interface AWETabContainerSectionController : AWEBaseListSectionController <AWETabContentViewControllerDelegate>
{
    id <AWETabContainerSectionControllerDataSource> _dataSource;
    id <AWETabContainerSectionControllerDelegate> _delegate;
    HMSegmentedControl *_segmentedControl;
    long long _selectedIndex;
    AWETabContentViewController *_tabContentViewController;
}

@property(retain, nonatomic) AWETabContentViewController *tabContentViewController; // @synthesize tabContentViewController=_tabContentViewController;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) __weak id <AWETabContainerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AWETabContainerSectionControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)segmentedControlHeight;
- (void)segmentedControlDidChangedValue:(id)arg1;
- (void)tabContentViewController:(id)arg1 didScrollToIndex:(long long)arg2;
- (void)configSupplementaryHeaderView:(id)arg1;
- (struct CGSize)sizeForHeaderWithCollectionViewSize:(struct CGSize)arg1;
- (Class)headerViewClass;
- (void)configCell:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 model:(id)arg2 collectionViewSize:(struct CGSize)arg3;
- (Class)cellClass;
- (id)itemViewControllerAtIndex:(long long)arg1;
- (void)scrollToItemAtIndex:(long long)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
