//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWECenteredScrollFlowLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWESwitchRecordModeCollectionView, NSArray, NSMutableArray, NSString;
@protocol AWESwitchRecordModeViewDelegate;

@interface AWESwitchRecordModeView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECenteredScrollFlowLayoutDelegate>
{
    _Bool _panned;
    _Bool _forbidScroll;
    _Bool _blackStyle;
    long long _selectedIndex;
    id <AWESwitchRecordModeViewDelegate> _delegate;
    AWESwitchRecordModeCollectionView *_collectionView;
    UIView *_cursorView;
    NSArray *_tabConfigArray;
    NSMutableArray *_widthArray;
}

@property(nonatomic) _Bool blackStyle; // @synthesize blackStyle=_blackStyle;
@property(retain, nonatomic) NSMutableArray *widthArray; // @synthesize widthArray=_widthArray;
@property(copy, nonatomic) NSArray *tabConfigArray; // @synthesize tabConfigArray=_tabConfigArray;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) AWESwitchRecordModeCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <AWESwitchRecordModeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool forbidScroll; // @synthesize forbidScroll=_forbidScroll;
@property(nonatomic, getter=isPanned) _Bool panned; // @synthesize panned=_panned;
- (void).cxx_destruct;
- (void)collectionViewScrollStopAtIndex:(long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)p_colorForCurrentUIStyle;
- (void)p_updateSelectedIndex:(long long)arg1;
- (void)p_selectAtIndex:(long long)arg1;
- (void)p_fillTitlesAndEmptyPlaceholdersWithTabConfigArray:(id)arg1;
- (void)refreshColorWithUIStyle:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addGradientMask;
- (void)p_configSelectItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setDefaultItemAtIndex:(long long)arg1;
- (void)updateTabConfigForMode:(long long)arg1 Block:(CDUnknownBlockType)arg2;
- (void)reloadWithTabConfigArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

