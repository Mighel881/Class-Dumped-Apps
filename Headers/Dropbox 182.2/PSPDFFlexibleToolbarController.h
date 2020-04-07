//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKitUI/PSPDFFlexibleToolbarContainerDelegate-Protocol.h>

@class NSString, PSPDFFlexibleToolbar, PSPDFFlexibleToolbarContainer, UIView, UIViewController;
@protocol PSPDFHook, PSPDFSystemBar;

@interface PSPDFFlexibleToolbarController : NSObject <PSPDFFlexibleToolbarContainerDelegate>
{
    struct {
        unsigned int animatingToolbars:1;
        unsigned int hostViewBarIsAnchoredToTop:1;
    } _flags;
    _Bool _toolbarVisible;
    PSPDFFlexibleToolbar *_toolbar;
    PSPDFFlexibleToolbarContainer *_flexibleToolbarContainer;
    UIView *_hostView;
    UIView<PSPDFSystemBar> *_hostToolbar;
    UIViewController *_hostViewController;
    id <PSPDFHook> _controllerDisappearHook;
}

@property(copy, nonatomic) id <PSPDFHook> controllerDisappearHook; // @synthesize controllerDisappearHook=_controllerDisappearHook;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) UIView<PSPDFSystemBar> *hostToolbar; // @synthesize hostToolbar=_hostToolbar;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
@property(nonatomic, getter=isToolbarVisible) _Bool toolbarVisible; // @synthesize toolbarVisible=_toolbarVisible;
@property(retain, nonatomic) PSPDFFlexibleToolbarContainer *flexibleToolbarContainer; // @synthesize flexibleToolbarContainer=_flexibleToolbarContainer;
@property(readonly, nonatomic) PSPDFFlexibleToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)flexibleToolbarContainerDidHide:(id)arg1;
- (void)flexibleToolbarContainerWillHide:(id)arg1;
- (void)flexibleToolbarContainerDidShow:(id)arg1;
- (void)updateHostView:(id)arg1 container:(id)arg2 viewController:(id)arg3;
- (_Bool)isBarAnchoredToTop:(id)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGesturesForViewController:(id)arg1;
- (void)setupHostViewControllerHook;
- (_Bool)hideToolbarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)showToolbarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleToolbarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIsToolbarVisible:(_Bool)arg1 willChangeWithAnimation:(_Bool)arg2;
- (void)dealloc;
- (id)initWithToolbar:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
