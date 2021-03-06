//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGDiscoverAccountsHeroModuleCellSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListDisplayDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGViewDisappearListener-Protocol.h>

@class IGDiscoverAccountsHeroModulesSectionViewModel, IGListAdapter, NSString;
@protocol IGDiscoverAccountsHeroModuleSectionControllerDelegate;

@interface IGDiscoverAccountsHeroModuleSectionController : IGListSectionController <IGListAdapterDataSource, IGListDisplayDelegate, IGDiscoverAccountsHeroModuleCellSectionControllerDelegate, IGViewDisappearListener>
{
    id <IGDiscoverAccountsHeroModuleSectionControllerDelegate> _delegate;
    IGListAdapter *_listAdapter;
    IGDiscoverAccountsHeroModulesSectionViewModel *_heroModules;
    NSString *_analyticsModule;
    double _storedContentOffsetX;
}

- (void).cxx_destruct;
- (void)_updateContentOffsetX;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)discoverAccountsHeroModuleCellSectionControllerDidSelect:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

