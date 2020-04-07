//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFRelayTouchesView.h>

#import <PSPDFKitUI/PSPDFDocumentScrollObserverDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFPageLabelViewDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFScrubberBarDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFThumbnailBarDelegate-Protocol.h>

@class NSString, PSPDFBackForwardButton, PSPDFDocumentLabelView, PSPDFDocumentScrollObserver, PSPDFDocumentViewController, PSPDFPageLabelView, PSPDFScrubberBar, PSPDFThumbnailBar, PSPDFVividBackgroundButton, UIView;
@protocol PSPDFPresentationContext, PSPDFUserInterfaceViewDelegate;

@interface PSPDFUserInterfaceView : PSPDFRelayTouchesView <PSPDFDocumentScrollObserverDelegate, PSPDFThumbnailBarDelegate, PSPDFScrubberBarDelegate, PSPDFPageLabelViewDelegate>
{
    struct {
        unsigned int isReloading:1;
        unsigned int isUpdatingPageLabel:1;
    } _flags;
    NSString *_pageLabelText;
    _Bool _documentLabelEnabled;
    _Bool _pageLabelEnabled;
    id <PSPDFPresentationContext> _dataSource;
    PSPDFDocumentLabelView *_documentLabel;
    PSPDFPageLabelView *_pageLabel;
    PSPDFBackForwardButton *_backButton;
    PSPDFBackForwardButton *_forwardButton;
    PSPDFVividBackgroundButton *_redactionInfoButton;
    PSPDFScrubberBar *_scrubberBar;
    PSPDFThumbnailBar *_thumbnailBar;
    UIView *_bottomView;
    PSPDFDocumentScrollObserver *_scrollViewObserver;
    id <PSPDFUserInterfaceViewDelegate> _delegate;
    PSPDFDocumentViewController *_documentViewController;
    struct UIEdgeInsets _pageLabelInsets;
    struct UIEdgeInsets _documentLabelInsets;
    struct UIEdgeInsets _scrubberBarInsets;
}

@property(retain, nonatomic) PSPDFDocumentViewController *documentViewController; // @synthesize documentViewController=_documentViewController;
@property(nonatomic) __weak id <PSPDFUserInterfaceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPageLabelEnabled) _Bool pageLabelEnabled; // @synthesize pageLabelEnabled=_pageLabelEnabled;
@property(nonatomic, getter=isDocumentLabelEnabled) _Bool documentLabelEnabled; // @synthesize documentLabelEnabled=_documentLabelEnabled;
@property(retain, nonatomic) PSPDFDocumentScrollObserver *scrollViewObserver; // @synthesize scrollViewObserver=_scrollViewObserver;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) PSPDFThumbnailBar *thumbnailBar; // @synthesize thumbnailBar=_thumbnailBar;
@property(retain, nonatomic) PSPDFScrubberBar *scrubberBar; // @synthesize scrubberBar=_scrubberBar;
@property(retain, nonatomic) PSPDFVividBackgroundButton *redactionInfoButton; // @synthesize redactionInfoButton=_redactionInfoButton;
@property(retain, nonatomic) PSPDFBackForwardButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) PSPDFBackForwardButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) PSPDFPageLabelView *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) PSPDFDocumentLabelView *documentLabel; // @synthesize documentLabel=_documentLabel;
@property(nonatomic) struct UIEdgeInsets scrubberBarInsets; // @synthesize scrubberBarInsets=_scrubberBarInsets;
@property(nonatomic) struct UIEdgeInsets documentLabelInsets; // @synthesize documentLabelInsets=_documentLabelInsets;
@property(nonatomic) struct UIEdgeInsets pageLabelInsets; // @synthesize pageLabelInsets=_pageLabelInsets;
@property(nonatomic) __weak id <PSPDFPresentationContext> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewObserverDidChangeSlidingSpreadIndex:(id)arg1;
- (void)pageLabelView:(id)arg1 didPressThumbnailGridButton:(id)arg2;
- (void)thumbnailBar:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2;
- (void)scrubberBar:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2;
- (void)stateManagerChangedState:(id)arg1;
- (void)setPageWithUserInterfaceReason:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)sizeIsChangingNotification:(id)arg1;
- (void)visiblePagesChangedNotification:(id)arg1;
- (unsigned long long)thumbnailBarMode;
- (_Bool)isValidDocument;
- (void)updateRedactionInfoButtonTitle;
- (void)updateSelectedSpreadIndex:(long long)arg1;
- (void)updateNavigationBarVisibility:(id)arg1 withAnimationDuration:(double)arg2;
- (_Bool)setUserInterfaceVisible:(_Bool)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 shouldAppearAnimated:(_Bool)arg4 isStatusBarHandled:(_Bool)arg5 animateAlongsideBlock:(CDUnknownBlockType)arg6;
- (void)updateBottomElementsViewFrame;
- (void)updateBottomFramesAnimated:(_Bool)arg1;
- (void)updateDocumentLabelAnimated:(_Bool)arg1;
- (void)placePageLabelToDefaultPosition;
- (void)updatePageLabelAnimated:(_Bool)arg1;
- (void)updateUserInterfaceObjectVisibilityForView:(id)arg1 animated:(_Bool)arg2 visibilityCondition:(_Bool)arg3;
- (void)updateRedactionInfoButtonAnimated:(_Bool)arg1;
- (void)updateBackForwardButtonsAnimated:(_Bool)arg1;
- (void)updateBackForwardButtonsForList:(id)arg1;
- (void)updateBarFrameWithFrameSetter:(CDUnknownBlockType)arg1 transverseSize:(double)arg2 edge:(unsigned int)arg3 animated:(_Bool)arg4;
@property(readonly, nonatomic) struct UIEdgeInsets safeInsets;
@property(readonly, nonatomic) unsigned int thumbnailBarEdge;
@property(readonly, nonatomic) double transverseSize;
- (_Bool)shouldHideThumbnailBarForCurrentDocument;
- (_Bool)isUserInterfaceVisible;
- (void)reloadData;
- (void)layoutSubviewsAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataSource:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)classForClass:(Class)arg1;
- (void)updateScrubberBarFrameAnimated:(_Bool)arg1;
- (void)updateThumbnailBarFrameAnimated:(_Bool)arg1;
- (void)updateDocumentLabelFrameAnimated:(_Bool)arg1;
- (void)updatePageLabelFrameAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
