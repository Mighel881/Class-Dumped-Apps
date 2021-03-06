//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCollectionViewController.h>

#import <Module_Framework/YTInnerTubeCollectionAppearanceResponderProvider-Protocol.h>
#import <Module_Framework/YTInnerTubeSectionFooterResponderProvider-Protocol.h>

@class GIMMe, NSString;
@protocol YTSectionControllerProtocol, YTShareContentViewControllerDelegate;

@interface YTShareContentViewController : YTInnerTubeCollectionViewController <YTInnerTubeSectionFooterResponderProvider, YTInnerTubeCollectionAppearanceResponderProvider>
{
    id <YTSectionControllerProtocol> _activeSectionController;
    id <YTShareContentViewControllerDelegate> _contentDelegate;
}

@property(nonatomic) __weak id <YTShareContentViewControllerDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void).cxx_destruct;
- (_Bool)innerTubeCollectionViewShowsVerticalScrollIndicator;
- (id)innerTubeCollectionViewDarkBackgroundColor;
- (id)innerTubeCollectionViewBackgroundColor;
- (int)innerTubeCollectionStatusViewStyle;
- (void)limitUserInteractionAndVisibilityToSection:(id)arg1 collectionViewController:(id)arg2;
- (unsigned long long)numberOfSelectedItemsWithCollectionViewController:(id)arg1;
- (void)entriesForSelectedItemsOfCollectionView:(id)arg1 resultsArray:(id)arg2;
- (void)didDeselectItemInSection:(id)arg1;
- (void)didSelectItemInSection:(id)arg1;
- (void)selectionChangedWithSectionController:(id)arg1;
- (void)updateFooter:(id)arg1 forSection:(id)arg2 sectionController:(id)arg3;
- (struct CGSize)sizeForFooterWithSize:(struct CGSize)arg1 section:(id)arg2 sectionController:(id)arg3;
- (Class)footerClassForSection:(id)arg1 sectionController:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)limitUserInteractionAndVisibilityToSection:(id)arg1;
- (id)entriesForSelectedItems;
- (void)loadWithModel:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 UIFormatter:(id)arg3 layout:(id)arg4 controllerFactory:(id)arg5;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

