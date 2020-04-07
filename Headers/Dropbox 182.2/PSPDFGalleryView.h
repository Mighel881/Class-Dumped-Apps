//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <PSPDFKitUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;
@protocol PSPDFGalleryViewDataSource;

@interface PSPDFGalleryView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _loopEnabled;
    _Bool _ignoreContentOffsetChange;
    id <PSPDFGalleryViewDataSource> _dataSource;
    double _contentPadding;
    unsigned long long _currentItemIndex;
    unsigned long long _numberOfItems;
    NSMutableDictionary *_unusedContentViews;
    NSMutableDictionary *_contentViews;
}

@property(retain, nonatomic) NSMutableDictionary *contentViews; // @synthesize contentViews=_contentViews;
@property(retain, nonatomic) NSMutableDictionary *unusedContentViews; // @synthesize unusedContentViews=_unusedContentViews;
@property(nonatomic) _Bool ignoreContentOffsetChange; // @synthesize ignoreContentOffsetChange=_ignoreContentOffsetChange;
@property(nonatomic) unsigned long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic, getter=isLoopEnabled) _Bool loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic) unsigned long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) __weak id <PSPDFGalleryViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (unsigned long long)normalizeIndex:(long long)arg1;
- (id)dequeueReusableContentViewWithIdentifier:(id)arg1;
- (id)indexesNextToIndex:(unsigned long long)arg1;
- (void)contentOffsetDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCurrentItemIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)reload;
- (void)loadItemAtIndexIfNecessary:(unsigned long long)arg1;
@property(readonly, nonatomic) NSSet *activeContentViews;
- (unsigned long long)itemIndexForContentView:(id)arg1;
- (id)contentViewForItemAtIndex:(unsigned long long)arg1;
- (void)markContentViewAsUnused:(id)arg1;
- (void)removeContentView:(id)arg1;
- (void)removeAllContentViews;
@property(readonly, nonatomic) _Bool actualLoopEnabled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)centerContentOffsetIfNecessary;
- (void)updateContentOffsetAnimated:(_Bool)arg1;
- (void)updateContentFrames;
- (void)updateContentSize;
- (void)performBlockWithoutObservingContentOffset:(CDUnknownBlockType)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
