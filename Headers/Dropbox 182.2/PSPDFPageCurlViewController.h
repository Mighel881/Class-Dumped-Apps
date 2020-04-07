//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import <PSPDFKitUI/UIPageViewControllerDataSource-Protocol.h>
#import <PSPDFKitUI/UIPageViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PSPDFDocument, PSPDFPageCurlLayout, PSPDFReusableObjectCache;
@protocol PSPDFPageCurlViewControllerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface PSPDFPageCurlViewController : UIPageViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource>
{
    NSArray *_lastNotifiedViewControllers;
    PSPDFPageCurlLayout *_layout;
    id <PSPDFPageCurlViewControllerDelegate> _pspdfDelegate;
    PSPDFReusableObjectCache *_pageViewCache;
    PSPDFDocument *_currentDocument;
}

@property(nonatomic) __weak PSPDFDocument *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(readonly, nonatomic) PSPDFReusableObjectCache *pageViewCache; // @synthesize pageViewCache=_pageViewCache;
@property(nonatomic) __weak id <PSPDFPageCurlViewControllerDelegate> pspdfDelegate; // @synthesize pspdfDelegate=_pspdfDelegate;
@property(readonly, nonatomic) PSPDFPageCurlLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)advanceFromViewController:(id)arg1 after:(_Bool)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (long long)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)notifyTransitionToViewControllers:(id)arg1 triggeredByPageCurl:(_Bool)arg2 completed:(_Bool)arg3;
- (void)endTransitionToViewControllers:(id)arg1 triggeredByPageCurl:(_Bool)arg2 completed:(_Bool)arg3;
- (void)beginTransitionToViewControllers:(id)arg1 triggeredByPageCurl:(_Bool)arg2;
- (id)viewControllerForPageAtIndex:(long long)arg1;
- (_Bool)doubleSidedModeForSpineLocation:(long long)arg1;
- (long long)spineLocationForSpreadMode:(long long)arg1 document:(id)arg2;
- (void)updateFrameToRequiredSize;
- (void)updateControllersForSpreadIndex:(long long)arg1 animated:(_Bool)arg2 forceCompletionBlockCall:(_Bool)arg3;
@property(nonatomic) long long spreadIndex;
- (void)setSpreadIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)installPointInsideViewOnContentViewModification;
- (void)viewDidLoad;
- (id)initWithLayout:(id)arg1 pageViewCache:(id)arg2 pspdfDelegate:(id)arg3;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <UIPageViewControllerDataSource> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UIPageViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
