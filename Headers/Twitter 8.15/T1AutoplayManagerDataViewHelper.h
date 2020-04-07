//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1AutoplayableManagerDelegate-Protocol.h>
#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSString, T1StatusMediaHandler, TFNDataViewController;

@interface T1AutoplayManagerDataViewHelper : NSObject <UIScrollViewDelegate, TFNViewControllerEventObserver, T1AutoplayableManagerDelegate>
{
    TFNDataViewController *_dataViewController;
    T1StatusMediaHandler *_statusMediaHandler;
    long long _autoplayManagerMode;
}

- (void).cxx_destruct;
- (void)viewControllerViewWillFullyAppear:(id)arg1;
- (void)viewControllerViewDidFullyAppear:(id)arg1;
- (void)viewControllerViewWillFullyDisappear:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateForScrollView;
- (void)autoplayableManager:(id)arg1 willAddAutoplayable:(id)arg2;
- (struct CGRect)contentFrameForAutoplayableManager:(id)arg1;
- (struct CGRect)insetBoundsForAutoplayableManager:(id)arg1;
- (long long)autoplayableManagerMode;
@property(readonly, nonatomic) _Bool isSuspendingAutoplay;
- (void)visitDataViewControllerAndChildrenWithBlock:(CDUnknownBlockType)arg1;
- (void)dataViewDidDisplay:(id)arg1;
- (void)autoplayConditionsDidChange;
- (void)networkQualityDidChange;
- (void)voiceOverConditionsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithDataViewController:(id)arg1 statusMediaHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
