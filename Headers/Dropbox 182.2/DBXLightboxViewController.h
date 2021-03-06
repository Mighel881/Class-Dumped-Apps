//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBXLightboxViewDelegate-Protocol.h"
#import "SYPaginatorViewDataSource-Protocol.h"
#import "SYPaginatorViewDelegate-Protocol.h"

@class DBXSYPaginatorView, NSIndexSet, NSString, UIView;
@protocol DBXLightboxDataSource, DBXLightboxDelegate;

@interface DBXLightboxViewController : UIViewController <SYPaginatorViewDataSource, SYPaginatorViewDelegate, DBXLightboxViewDelegate>
{
    DBXSYPaginatorView *_paginator;
    _Bool _shouldHideImageScrollView;
    _Bool _shouldDetectDoubleTap;
    _Bool _playingVideo;
    _Bool _playingGIF;
    long long _startIndex;
    id <DBXLightboxDelegate> _delegate;
    id <DBXLightboxDataSource> _dataSource;
    double _loadingSpinnerAlpha;
    double _delayBeforeShowingLoadingSpinner;
    long long _spinnerStyleForCurrentIndex;
}

+ (float)minimumZoomFactor;
+ (float)maximumZoomFactor;
+ (struct CGRect)layoutTestForImageWithSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
@property(nonatomic) _Bool playingGIF; // @synthesize playingGIF=_playingGIF;
@property(nonatomic) _Bool playingVideo; // @synthesize playingVideo=_playingVideo;
@property(nonatomic) _Bool shouldDetectDoubleTap; // @synthesize shouldDetectDoubleTap=_shouldDetectDoubleTap;
@property(nonatomic) long long spinnerStyleForCurrentIndex; // @synthesize spinnerStyleForCurrentIndex=_spinnerStyleForCurrentIndex;
@property(nonatomic) _Bool shouldHideImageScrollView; // @synthesize shouldHideImageScrollView=_shouldHideImageScrollView;
@property(nonatomic) double delayBeforeShowingLoadingSpinner; // @synthesize delayBeforeShowingLoadingSpinner=_delayBeforeShowingLoadingSpinner;
@property(nonatomic) double loadingSpinnerAlpha; // @synthesize loadingSpinnerAlpha=_loadingSpinnerAlpha;
@property(nonatomic) __weak id <DBXLightboxDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <DBXLightboxDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;
- (void)db_playbackStateChanged:(id)arg1;
- (void)paginatorView:(id)arg1 userWillScrollToView:(id)arg2 atIndex:(long long)arg3;
- (void)paginatorView:(id)arg1 willScrollToView:(id)arg2 atIndex:(long long)arg3;
- (void)paginatorView:(id)arg1 didScrollToView:(id)arg2 atIndex:(long long)arg3 fromIndex:(long long)arg4;
- (void)paginatorViewDidEndPaging:(id)arg1;
- (struct CGSize)imageSizeOfCurrentPhoto;
- (void)lightboxPlayButtonTapped;
- (void)lightboxDidEndZoomingInView:(id)arg1 withScale:(double)arg2;
- (void)lightboxDidZoomInView:(id)arg1;
- (void)lightboxDoubleTap:(id)arg1;
- (void)lightboxSingleTap:(id)arg1;
- (id)paginatorView:(id)arg1 viewForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesForPaginatorView:(id)arg1;
- (id)lightboxViewAtIndex:(long long)arg1;
- (void)showErrorForLightboxViewWithVideoView:(id)arg1;
- (void)reloadAttributesAtIndex:(long long)arg1 view:(id)arg2;
- (void)reloadImageAtIndex:(long long)arg1 view:(id)arg2;
- (id)db_visiblePages;
- (void)viewDidLayoutSubviews;
- (id)paginatorView;
- (void)showVideoPlayButton:(_Bool)arg1 atIndex:(long long)arg2;
- (void)showVideoPlayButton:(_Bool)arg1;
- (void)showPaginatorView;
- (void)hidePaginatorView;
- (void)reloadData;
- (void)reloadAttributesAtIndex:(long long)arg1;
- (void)reloadImageAtIndex:(long long)arg1;
@property(readonly, nonatomic) double singlePageWidth;
@property(nonatomic) _Bool clipsToBounds;
@property(nonatomic) double pageGapWidth;
@property(nonatomic) double horizontalScrollOffset;
@property(nonatomic) _Bool isScrollingEnabled;
@property(nonatomic) double centerViewCurrentZoomScale;
@property(readonly, nonatomic) UIView *centerView;
- (void)setPlayingGIF:(_Bool)arg1 forView:(id)arg2;
- (void)db_setPlayingVideo:(_Bool)arg1 forView:(id)arg2;
@property(readonly, nonatomic) NSIndexSet *visibleIndexes;
- (void)setCurrentIndex:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long currentIndex;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setup;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

