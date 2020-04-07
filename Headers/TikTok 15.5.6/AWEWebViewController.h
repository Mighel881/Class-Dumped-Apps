//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseWebViewController.h"

#import "AWEReactPage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSString;

@interface AWEWebViewController : AWEBaseWebViewController <AWEReactPage, BTDRouterViewControllerProtocol, NSURLConnectionDataDelegate>
{
    _Bool _isLocalResource;
    _Bool _isUrlBlocked;
    _Bool _visible;
}

+ (id)wkAllowList;
+ (_Bool)allowWKWebViewWithURL:(id)arg1;
+ (id)addParametersIfURLStringHasIronManScheme:(id)arg1;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool isUrlBlocked; // @synthesize isUrlBlocked=_isUrlBlocked;
@property(nonatomic) _Bool isLocalResource; // @synthesize isLocalResource=_isLocalResource;
- (void)closeWebView;
- (void)handleBridgeClose;
- (void)showMorePanel;
- (id)customUserAgent;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (void)setupMoreButtonOfNavigation;
- (long long)kernel;
- (void)sendWebEvent:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)handleDPBStatusNotification:(id)arg1;
- (void)setupNotification;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadRequest;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
