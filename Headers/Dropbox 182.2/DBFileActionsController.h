//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCollectionModelObserving-Protocol.h"

@class DBCollectionViewModelObjectSelection, DBModalManager, DBObserverHandle, NSArray, NSMutableDictionary, NSString;
@protocol DBFileActionsControllerDelegate, DBFileEntry, DBToolbarActionManagerProtocol, DBToolbarActionRegistryProtocol, DBToolbarButtonFactory;

@interface DBFileActionsController : NSObject <DBCollectionModelObserving>
{
    DBObserverHandle *_batchSelectionObserverHandle;
    NSArray *_manualEntries;
    NSArray *_lastFloatingToolbarActions;
    NSMutableDictionary *_registeredHandlers;
    id <DBToolbarActionManagerProtocol> _toolbarActionManager;
    NSArray *_lastSharedFolderSettingsActions;
    NSArray *_lastFileViewerBottomBarViewActions;
    NSArray *_lastBatchEditToolbarActions;
    NSArray *_lastFileViewNavigationBarActions;
    NSArray *_lastFileCollectionNavigationBarActions;
    id <DBFileActionsControllerDelegate> _delegate;
    id <DBFileEntry> _containingFolder;
    DBCollectionViewModelObjectSelection *_batchSelection;
    DBModalManager *_modalManager;
    id <DBToolbarButtonFactory> _buttonFactory;
    id <DBToolbarActionRegistryProtocol> _actionsRegistry;
}

+ (void)db_dismissAllDialogsForActions:(id)arg1 animated:(_Bool)arg2;
+ (id)db_createPreviewActionWithFileAction:(id)arg1 withPresentingView:(id)arg2;
+ (id)db_batchEditToolbarActionPrototypesAllowingExport:(_Bool)arg1;
+ (id)db_fileViewerBottomBarViewPrototypes;
+ (id)db_filesHeroHeaderMembersButtonPrototypes;
+ (id)db_filesHeroHeaderShareButtonPrototypes;
+ (id)db_todayViewWidgetPrototypes;
+ (id)db_omniButtonCreateFileMenuAdditionalButtonsActionPrototypes;
+ (id)db_blankSlatePhotosTabUploadPhotosButtonActionPrototypes;
+ (id)db_CuJtbdBannerMpuButtonSkipOptionsActionPrototypes;
+ (id)db_CuJtbdBannerMpuButtonActionPrototypes;
+ (id)db_OnboardingShareUploadButtonSkipOptionsActionPrototypes;
+ (id)db_OnboardingShareUploadButtonActionPrototypes;
+ (id)db_MPUTourUploadPhotosButtonActionPrototypesSkipOptions;
+ (id)db_MPUTourUploadPhotosButtonActionPrototypes;
+ (id)db_fileCollectionTopNavigationBarActionPrototypes;
+ (id)db_arrayOfUnifiedFileActionPrototypesIn:(long long)arg1;
+ (id)db_moreActionsActionPrototypes;
+ (id)db_infoSheetActionPrototypes;
+ (id)db_sharedFolderSettingsActionPrototypes;
+ (id)db_topNavigationBarActionPrototypes;
+ (id)db_floatingToolbarActionPrototypes;
@property(readonly, nonatomic) id <DBToolbarActionRegistryProtocol> actionsRegistry; // @synthesize actionsRegistry=_actionsRegistry;
@property(readonly, nonatomic) id <DBToolbarButtonFactory> buttonFactory; // @synthesize buttonFactory=_buttonFactory;
@property(readonly, nonatomic) DBModalManager *modalManager; // @synthesize modalManager=_modalManager;
@property(readonly, nonatomic) DBCollectionViewModelObjectSelection *batchSelection; // @synthesize batchSelection=_batchSelection;
@property(readonly, nonatomic) id <DBFileEntry> containingFolder; // @synthesize containingFolder=_containingFolder;
@property __weak id <DBFileActionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)customBarButtonItemForAction:(id)arg1 context:(id)arg2;
- (void)willPerformAction:(id)arg1 sender:(id)arg2;
- (void)collectionModel:(id)arg1 didUpdateWithChanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)viewControllerForSnackbarPresentation;
- (_Bool)shouldForceDestinationInDestinationAndOptionsPicker;
- (void)db_refreshBatchEditToolbarActions;
- (void)refreshActions;
- (void)dismissAllDialogsAnimated:(_Bool)arg1;
- (_Bool)allowModalPresentationOverMaster;
- (id)viewToPresentFrom;
- (_Bool)isChromeCurrentlyAnimating;
- (id)commentsContainerDelegate;
- (id)viewControllerForPresentation;
- (id)findActionForItemWithActionID:(long long)arg1;
- (id)findBarButtonItemWithActionID:(long long)arg1;
- (id)actionsForBatchEditToolbarAllowingExport:(_Bool)arg1;
- (id)actionsForFileViewerBottomBarView;
- (id)actionsForFilesHeroHeaderMembersButton;
- (id)actionsForFilesHeroHeaderShareButton;
- (id)actionsForTodayViewWidget;
- (id)actionsForOmniButtonCreateFileMenuAdditionalButtons;
- (id)actionsForBlankSlatePhotosTabUploadPhotosButton;
- (id)actionsForCuJtbdBannerMpuButtonSkipOptions;
- (id)actionsForCuJtbdBannerMpuButton;
- (id)actionsForOnboardingShareUploadButtonSkipOptions;
- (id)actionsForOnboardingShareUploadButton;
- (id)actionsForMPUTourUploadPhotosButtonSkipOptions;
- (id)actionsForMPUTourUploadPhotosButton;
- (id)actionsForPeekPreviewWithPresentingView:(id)arg1;
- (id)actionsForOmniButton;
- (id)actionsForFloatingToolbar;
- (id)actionsForMoreActions;
- (id)actionsForSharedFolderSettings;
- (_Bool)hasActionsForInfoSheet;
- (id)actionsForInfoSheet;
- (id)fileCollectionBatchEditToolbarItemsAllowingExport:(_Bool)arg1;
- (id)fileViewerTopNavigationBarItems;
- (id)db_actionsForTopNavigationBar;
- (id)fileCollectionTopNavigationBarItems;
- (void)db_handleAction:(id)arg1 sender:(id)arg2;
- (id)db_itemsWithActionsArray:(id)arg1 context:(id)arg2;
- (id)db_actionsForToolbar;
- (id)db_omniButtonActionPrototypes;
- (id)db_actionForType:(long long)arg1 location:(long long)arg2 showByDefault:(_Bool)arg3;
- (id)db_actionFromActionPrototype:(id)arg1;
- (id)actionsFromActionPrototypes:(id)arg1 checkingShouldDisplay:(_Bool)arg2;
- (_Bool)hasActionsAfterFilteringActionPrototypes:(id)arg1;
- (void)db_refreshMetadataIfNotCached;
- (void)updateFileEntries:(id)arg1 dueToUserInteraction:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSArray *fileEntries;
- (void)dealloc;
- (id)initWithSelection:(id)arg1 containingFolder:(id)arg2 modalManager:(id)arg3;
- (id)initWithFileEntries:(id)arg1 modalManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
