//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHubViewController.h"

#import "HUBViewContentOffsetObserver-Protocol.h"

@class SPTFreeTierArtistContextMenuButtonViewModel, SPTFreeTierArtistFeedbackButtonViewModel, SPTFreeTierEntityNavigationDecorator, SPTProgressView, UIBarButtonItem;
@protocol VISREFIntegrationManager;

@interface SPTFreeTierArtistViewController : SPTHubViewController <HUBViewContentOffsetObserver>
{
    _Bool _viewDidAppear;
    SPTFreeTierArtistFeedbackButtonViewModel *_feedbackButtonViewModel;
    SPTFreeTierArtistContextMenuButtonViewModel *_contextMenuButtonViewModel;
    SPTFreeTierEntityNavigationDecorator *_navigationItemDecorator;
    UIBarButtonItem *_contextMenuBarButtonItem;
    SPTProgressView *_progressView;
    id <VISREFIntegrationManager> _visualRefreshIntegrationManager;
}

@property(retain, nonatomic) id <VISREFIntegrationManager> visualRefreshIntegrationManager; // @synthesize visualRefreshIntegrationManager=_visualRefreshIntegrationManager;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIBarButtonItem *contextMenuBarButtonItem; // @synthesize contextMenuBarButtonItem=_contextMenuBarButtonItem;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(readonly, nonatomic) SPTFreeTierEntityNavigationDecorator *navigationItemDecorator; // @synthesize navigationItemDecorator=_navigationItemDecorator;
@property(readonly, nonatomic) SPTFreeTierArtistContextMenuButtonViewModel *contextMenuButtonViewModel; // @synthesize contextMenuButtonViewModel=_contextMenuButtonViewModel;
@property(readonly, nonatomic) SPTFreeTierArtistFeedbackButtonViewModel *feedbackButtonViewModel; // @synthesize feedbackButtonViewModel=_feedbackButtonViewModel;
- (void).cxx_destruct;
- (id)URI;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewModelDidLoad:(id)arg1;
- (id)initWithTheme:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentRegistry:(id)arg4 componentLayoutManager:(id)arg5 imageLoaderFactory:(id)arg6 commandHandler:(id)arg7 viewModelProvider:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 feedbackButtonViewModel:(id)arg11 contextMenuButtonViewModel:(id)arg12 navigationItemDecorator:(id)arg13 visualRefreshIntegrationManager:(id)arg14 shareDragDelegateFactory:(id)arg15;

@end

