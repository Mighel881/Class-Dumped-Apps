//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGBrowserTitleBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGWebViewControllerChromeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGWebViewControllerScrollDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGWebViewToolbarDelegate-Protocol.h>

@class CAShapeLayer, IABLoggingCoordinator, IGBrowserChromeCoordinator, IGBrowserTitleBar, IGWebViewController, IGWebViewToolbar, NSString, UIView;
@protocol IGBrowserChromeViewControllerDelegate;

@interface IGBrowserChromeViewController : IGViewController <IGBrowserTitleBarDelegate, IGWebViewControllerChromeDelegate, IGWebViewControllerScrollDelegate, IGWebViewToolbarDelegate, IGGestureHandler>
{
    IGWebViewController *_webViewController;
    IGWebViewToolbar *_webViewToolbar;
    UIView *_backgroundView;
    unsigned long long _leftButtonType;
    unsigned long long _rightButtonType;
    IGBrowserChromeCoordinator *_browserChromeCoordinator;
    CAShapeLayer *_titleBarBackdrop;
    IABLoggingCoordinator *_loggingCoordinator;
    _Bool _isToolbarFixEnabled;
    _Bool _titleBarBottomSeparatorHidden;
    _Bool _fullscreenExperienceEnabled;
    _Bool _shouldShowTopRoundCorners;
    id <IGBrowserChromeViewControllerDelegate> _delegate;
    IGBrowserTitleBar *_titleBar;
    UIView *_statusBarPaddingView;
    unsigned long long _browserHeaderStyle;
}

@property(nonatomic, getter=hasShownTopRoundCorners) _Bool shouldShowTopRoundCorners; // @synthesize shouldShowTopRoundCorners=_shouldShowTopRoundCorners;
@property(nonatomic, getter=isFullscreenExperienceEnabled) _Bool fullscreenExperienceEnabled; // @synthesize fullscreenExperienceEnabled=_fullscreenExperienceEnabled;
@property(nonatomic) unsigned long long browserHeaderStyle; // @synthesize browserHeaderStyle=_browserHeaderStyle;
@property(nonatomic) _Bool titleBarBottomSeparatorHidden; // @synthesize titleBarBottomSeparatorHidden=_titleBarBottomSeparatorHidden;
@property(retain, nonatomic) UIView *statusBarPaddingView; // @synthesize statusBarPaddingView=_statusBarPaddingView;
@property(readonly, nonatomic) IGBrowserTitleBar *titleBar; // @synthesize titleBar=_titleBar;
@property(nonatomic) __weak id <IGBrowserChromeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (void)webViewController:(id)arg1 progressChanged:(double)arg2;
- (void)webViewControllerChromeShouldPresentToolbar:(id)arg1;
- (_Bool)webViewController:(id)arg1 scrollViewShouldScrollToTop:(id)arg2;
- (void)webViewController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)webViewController:(id)arg1 scrollViewDidEndDecelerating:(id)arg2;
- (void)webViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)webViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)webViewToolbar:(id)arg1 didTapButtonWithType:(unsigned long long)arg2;
- (void)browserTitleBarDidTapTitleBar:(id)arg1;
- (void)browserTitleBar:(id)arg1 didTapButtonWithType:(unsigned long long)arg2;
- (void)hideToolBar;
- (void)presentToolBar;
- (void)_layoutWithoutToolbarFix;
- (void)_layoutWithToolbarFix;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithWebViewController:(id)arg1 leftTitleBarButtonType:(unsigned long long)arg2 rightTitleBarButtonType:(unsigned long long)arg3 loggingCoordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

