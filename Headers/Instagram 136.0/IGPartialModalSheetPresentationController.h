//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@protocol IGPartialModalSheetPresentationControllerDismissDelegate;

@interface IGPartialModalSheetPresentationController : UIPresentationController
{
    _Bool _shouldHidePresentersView;
    id <IGPartialModalSheetPresentationControllerDismissDelegate> _dismissDelegate;
}

@property(nonatomic) __weak id <IGPartialModalSheetPresentationControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) _Bool shouldHidePresentersView; // @synthesize shouldHidePresentersView=_shouldHidePresentersView;
- (void).cxx_destruct;
- (void)_updatePresentersViewHidden:(_Bool)arg1;
- (_Bool)shouldPresentInFullscreen;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;

@end

