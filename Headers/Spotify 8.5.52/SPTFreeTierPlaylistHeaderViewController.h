//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"
#import "SPTFreeTierPlaylistHeader-Protocol.h"

@class NSString, SPTFreeTierPlaylistHeaderView, UILayoutGuide, UIScrollView;
@protocol SPTFreeTierPlaylistHeaderConfigurator;

@interface SPTFreeTierPlaylistHeaderViewController : UIViewController <SPTEntityHeaderContentController, SPTFreeTierPlaylistHeader>
{
    _Bool _headerHasAppeared;
    SPTFreeTierPlaylistHeaderView *_headerView;
    UIScrollView *_parentScrollView;
    id <SPTFreeTierPlaylistHeaderConfigurator> _configurator;
    UILayoutGuide *_parentLayoutGuide;
}

@property(nonatomic) _Bool headerHasAppeared; // @synthesize headerHasAppeared=_headerHasAppeared;
@property(readonly, nonatomic) UILayoutGuide *parentLayoutGuide; // @synthesize parentLayoutGuide=_parentLayoutGuide;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistHeaderConfigurator> configurator; // @synthesize configurator=_configurator;
@property(nonatomic) __weak UIScrollView *parentScrollView; // @synthesize parentScrollView=_parentScrollView;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didAttachToScrollView:(id)arg2 inViewController:(id)arg3;
- (id)supplementaryViewForEntityHeaderViewController:(id)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (struct CGPoint)snapOffset;
- (void)update;
- (id)navigationTitleViewWrappedInContainer;
- (void)updateTitleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)headerDidAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithConfigurator:(id)arg1 parentLayoutGuide:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
