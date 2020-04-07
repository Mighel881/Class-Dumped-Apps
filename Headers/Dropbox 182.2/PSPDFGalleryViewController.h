//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFBaseViewController.h>

#import <PSPDFKitUI/PSPDFDownloadManagerDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFGalleryVideoContentControllerDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFGalleryViewDataSource-Protocol.h>
#import <PSPDFKitUI/PSPDFGalleryViewDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFMultimediaViewController-Protocol.h>
#import <PSPDFKitUI/PSPDFOverridable-Protocol.h>
#import <PSPDFKitUI/PSPDFStyleable-Protocol.h>
#import <PSPDFKitUI/PSPDFViewControllerFullscreenTransitioning-Protocol.h>
#import <PSPDFKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSSet, NSString, PSPDFDownloadManager, PSPDFFullscreenTransitionViewController, PSPDFGalleryConfiguration, PSPDFGalleryContainerView, PSPDFGalleryImageContentController, PSPDFGalleryManifest, PSPDFGalleryUnknownContentController, PSPDFGalleryVideoContentController, PSPDFGalleryView, PSPDFGalleryWebContentController, PSPDFLinkAnnotation, PSPDFReachabilityObserver, UIImage, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController;
@protocol PSPDFGalleryContentViewLoading, PSPDFOverridable;

@interface PSPDFGalleryViewController : PSPDFBaseViewController <PSPDFGalleryViewDataSource, PSPDFGalleryViewDelegate, PSPDFDownloadManagerDelegate, UIGestureRecognizerDelegate, PSPDFGalleryVideoContentControllerDelegate, PSPDFStyleable, PSPDFViewControllerFullscreenTransitioning, PSPDFOverridable, PSPDFMultimediaViewController>
{
    _Bool _forcesStatusBarHidden;
    _Bool _visible;
    _Bool _barsHidden;
    _Bool _barsHiddenBeforePan;
    _Bool _ignoreStatusBarChange;
    _Bool _didSetCustomConfiguration;
    double _zoomScale;
    id <PSPDFOverridable> _overrideDelegate;
    PSPDFGalleryConfiguration *_configuration;
    unsigned long long _state;
    NSArray *_items;
    PSPDFLinkAnnotation *_linkAnnotation;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UIViewController<PSPDFOverridable> *_overridableParentViewController;
    PSPDFReachabilityObserver *_reachabilityObserver;
    PSPDFDownloadManager *_downloadManager;
    PSPDFGalleryManifest *_manifest;
    PSPDFGalleryVideoContentController *_videoContentController;
    PSPDFGalleryImageContentController *_imageContentController;
    PSPDFGalleryUnknownContentController *_unknownContentController;
    PSPDFGalleryWebContentController *_webContentController;
    NSSet *_contentControllers;
    UIImage *_appearanceStreamImage;
    PSPDFGalleryContainerView *_containerView;
    PSPDFFullscreenTransitionViewController *_fullscreenController;
}

@property(retain, nonatomic) PSPDFFullscreenTransitionViewController *fullscreenController; // @synthesize fullscreenController=_fullscreenController;
@property(retain, nonatomic) PSPDFGalleryContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImage *appearanceStreamImage; // @synthesize appearanceStreamImage=_appearanceStreamImage;
@property(nonatomic) _Bool didSetCustomConfiguration; // @synthesize didSetCustomConfiguration=_didSetCustomConfiguration;
@property(nonatomic) _Bool ignoreStatusBarChange; // @synthesize ignoreStatusBarChange=_ignoreStatusBarChange;
@property(nonatomic) _Bool barsHiddenBeforePan; // @synthesize barsHiddenBeforePan=_barsHiddenBeforePan;
@property(nonatomic) _Bool barsHidden; // @synthesize barsHidden=_barsHidden;
@property(readonly, nonatomic) NSSet *contentControllers; // @synthesize contentControllers=_contentControllers;
@property(retain, nonatomic) PSPDFGalleryWebContentController *webContentController; // @synthesize webContentController=_webContentController;
@property(retain, nonatomic) PSPDFGalleryUnknownContentController *unknownContentController; // @synthesize unknownContentController=_unknownContentController;
@property(retain, nonatomic) PSPDFGalleryImageContentController *imageContentController; // @synthesize imageContentController=_imageContentController;
@property(retain, nonatomic) PSPDFGalleryVideoContentController *videoContentController; // @synthesize videoContentController=_videoContentController;
@property(retain, nonatomic) PSPDFGalleryManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) PSPDFDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) PSPDFReachabilityObserver *reachabilityObserver; // @synthesize reachabilityObserver=_reachabilityObserver;
@property(nonatomic) __weak UIViewController<PSPDFOverridable> *overridableParentViewController; // @synthesize overridableParentViewController=_overridableParentViewController;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) PSPDFLinkAnnotation *linkAnnotation; // @synthesize linkAnnotation=_linkAnnotation;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) PSPDFGalleryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <PSPDFOverridable> overrideDelegate; // @synthesize overrideDelegate=_overrideDelegate;
@property(nonatomic) _Bool forcesStatusBarHidden; // @synthesize forcesStatusBarHidden=_forcesStatusBarHidden;
- (void).cxx_destruct;
- (void)updateContentControllerConfigurations;
- (void)updateWithConfiguration:(id)arg1;
- (id)currentContentController;
- (id)contentControllerForItem:(id)arg1;
- (id)contentControllerForContentView:(id)arg1;
- (id)currentItem;
@property(readonly, nonatomic) UIView<PSPDFGalleryContentViewLoading> *loadingView;
@property(readonly, nonatomic) PSPDFGalleryView *galleryView;
- (void)galleryItemStateDidChangeNotification:(id)arg1;
- (void)didDoubleTap:(id)arg1;
- (void)didSingleTap:(id)arg1;
- (void)didTransitionToFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willTransitionToFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didEndFullscreenPanGesture:(_Bool)arg1;
- (void)didBeginFullscreenPanGesture;
@property(readonly, nonatomic) UIView *transitionEmbeddedBackgroundView;
@property(readonly, nonatomic) UIView *transitionFullscreenBackgroundView;
@property(readonly, nonatomic) UIView *transitionContentView;
@property(readonly, nonatomic) UIView *transitionContainerView;
- (void)configure:(id)arg1;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
- (void)performRichMediaExecuteAction:(id)arg1;
- (void)performRenditionAction:(id)arg1;
- (void)performAction:(id)arg1;
- (_Bool)canShowFullscreen;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
- (id)currentMediaPlayerController;
- (void)setItems:(id)arg1;
- (void)galleryVideoContentController:(id)arg1 didUpdatePlayerStateForItem:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)shouldEnqueueRemoteItem:(id)arg1;
- (void)enqueueItemsStartingAtIndex:(unsigned long long)arg1;
- (void)downloadManager:(id)arg1 didChangeObject:(id)arg2;
- (void)galleryView:(id)arg1 willReuseContentView:(id)arg2;
- (void)galleryView:(id)arg1 willScrollToItemAtIndex:(unsigned long long)arg2;
- (id)galleryView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInGalleryView:(id)arg1;
- (void)reachabilityDidChangeNotification:(id)arg1;
- (void)loadItemsFromManifest;
- (void)updateAppearanceStreamImage;
- (void)extractAppearanceStreamImageIfNecessary;
- (void)setBarsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)updateActiveContentViews;
- (void)configureContentView:(id)arg1 item:(id)arg2;
- (void)configureFullscreenBackgroundView;
- (void)configureBackgroundView;
- (void)configureGalleryView;
- (void)configureContainerView;
- (void)configureViewAnimated:(_Bool)arg1;
- (void)updateZoomScale;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateViewControllerForPresentationInPopover:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hookUpGestureRecognizers;
- (void)loadContainerView;
- (void)configureViewWithPropertiesFromScreenAnnotation:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)setUpReachabilityObserver;
- (void)setUpGalleryItemNotification;
- (void)setUpManifest;
- (void)setUpDownloadManager;
- (void)setUpFullscreenController;
- (void)setUpContentControllers;
- (void)setUpDefaultPropertyValues;
- (void)setUpSingleTapGestureRecognizer;
- (void)setUpDoubleTapGestureRecognizer;
- (id)initWithLinkAnnotation:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (Class)classForClass:(Class)arg1;

// Remaining properties
@property(nonatomic) long long barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBarTranslucent;
@property(readonly) Class superclass;

@end
