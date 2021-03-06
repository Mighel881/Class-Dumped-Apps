//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKActionItemVCDelegate-Protocol.h"
#import "GDKDialogControllerDelegate-Protocol.h"
#import "GDKFileNavigationManaging-Protocol.h"
#import "GDKTeamDriveActionProviderDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GDKFileDropController, NSString, UINavigationController;
@protocol GDAActionPanelManaging, GDAFilePresenting, GDKActionItemVCDelegate, GDKAlertControlling, GDKFileActionProvider, GDKFilesVCFactory, GDKPermissionsMutating, GDKSnackbarControlling, GDKTeamDriveTrashVCFactory, GDKURLOpening, GDKUploadService, SSOIdentity;

@interface GDAFileNavigationManager : NSObject <UIGestureRecognizerDelegate, GDKFileNavigationManaging, GDKTeamDriveActionProviderDelegate, GDKActionItemVCDelegate, GDKDialogControllerDelegate>
{
    _Bool _shortcutUpgradeWarningEnabled;
    _Bool _shortcutResolutionEnabled;
    _Bool _improvedSearchZeroStateEnabled;
    _Bool _activeSearchEnabled;
    id <GDKFilesVCFactory> _filesVCFactory;
    id <GDKTeamDriveTrashVCFactory> _teamDriveTrashVCFactory;
    UINavigationController *_navigationController;
    id <GDKUploadService> _uploadService;
    id <GDAFilePresenting> _filePresenter;
    id <GDAActionPanelManaging> _actionPanelManager;
    GDKFileDropController *_fileDropController;
    NSString *_searchPlaceholderText;
    id <SSOIdentity> _ssoIdentity;
    id <GDKFileActionProvider> _fileActionProvider;
    id <GDKAlertControlling> _alertController;
    id <GDKActionItemVCDelegate> _actionItemVCDelegate;
    id <GDKPermissionsMutating> _sharingClient;
    id <GDKURLOpening> _urlOpener;
    id <GDKSnackbarControlling> _snackbarController;
    unsigned long long _searchDebounceDelayMilliseconds;
}

@property(readonly, nonatomic) unsigned long long searchDebounceDelayMilliseconds; // @synthesize searchDebounceDelayMilliseconds=_searchDebounceDelayMilliseconds;
@property(readonly, nonatomic) _Bool activeSearchEnabled; // @synthesize activeSearchEnabled=_activeSearchEnabled;
@property(readonly, nonatomic) _Bool improvedSearchZeroStateEnabled; // @synthesize improvedSearchZeroStateEnabled=_improvedSearchZeroStateEnabled;
@property(readonly, nonatomic) _Bool shortcutResolutionEnabled; // @synthesize shortcutResolutionEnabled=_shortcutResolutionEnabled;
@property(readonly, nonatomic) _Bool shortcutUpgradeWarningEnabled; // @synthesize shortcutUpgradeWarningEnabled=_shortcutUpgradeWarningEnabled;
@property(readonly, nonatomic) id <GDKSnackbarControlling> snackbarController; // @synthesize snackbarController=_snackbarController;
@property(readonly, nonatomic) id <GDKURLOpening> urlOpener; // @synthesize urlOpener=_urlOpener;
@property(readonly, nonatomic) id <GDKPermissionsMutating> sharingClient; // @synthesize sharingClient=_sharingClient;
@property(readonly, nonatomic) __weak id <GDKActionItemVCDelegate> actionItemVCDelegate; // @synthesize actionItemVCDelegate=_actionItemVCDelegate;
@property(readonly, nonatomic) id <GDKAlertControlling> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <GDKFileActionProvider> fileActionProvider; // @synthesize fileActionProvider=_fileActionProvider;
@property(readonly, nonatomic) id <SSOIdentity> ssoIdentity; // @synthesize ssoIdentity=_ssoIdentity;
@property(readonly, copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText;
@property(readonly, nonatomic) GDKFileDropController *fileDropController; // @synthesize fileDropController=_fileDropController;
@property(readonly, nonatomic) id <GDAActionPanelManaging> actionPanelManager; // @synthesize actionPanelManager=_actionPanelManager;
@property(readonly, nonatomic) id <GDAFilePresenting> filePresenter; // @synthesize filePresenter=_filePresenter;
@property(readonly, nonatomic) id <GDKUploadService> uploadService; // @synthesize uploadService=_uploadService;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) __weak id <GDKTeamDriveTrashVCFactory> teamDriveTrashVCFactory; // @synthesize teamDriveTrashVCFactory=_teamDriveTrashVCFactory;
@property(readonly, nonatomic) __weak id <GDKFilesVCFactory> filesVCFactory; // @synthesize filesVCFactory=_filesVCFactory;
- (void).cxx_destruct;
- (void)dismissCurrentViewController;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dialogControllerDidCancel:(id)arg1;
- (void)actionItemVC:(id)arg1 didPerformAction:(long long)arg2 forFile:(id)arg3;
- (_Bool)teamDriveActionProviderAllowAvatarTaps:(id)arg1;
- (void)teamDriveActionProvider:(id)arg1 didSelectViewTrashForTeamDrive:(id)arg2;
- (void)teamDriveActionProvider:(id)arg1 didRemoveSelfFromTeamDrive:(id)arg2;
- (void)teamDriveActionProvider:(id)arg1 didDeleteTeamDrive:(id)arg2;
- (void)popTopFilesVCForTeamDrive:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (void)displaySearchVCForFolder:(id)arg1;
- (void)handleAction:(id)arg1 onFile:(id)arg2 dataSource:(id)arg3 presentingViewController:(id)arg4 userInfo:(id)arg5;
- (void)presentTrashedFolder:(id)arg1;
- (void)displayVCForFile:(id)arg1 fromView:(id)arg2 dataSource:(id)arg3;
- (_Bool)canDisplayVCForFile:(id)arg1;
- (void)postNotificationForOpenFolder:(id)arg1;
- (void)pushViewControllerForFolder:(id)arg1;
- (id)initWithNavigationController:(id)arg1 filesVCFactory:(id)arg2 teamDriveTrashVCFactory:(id)arg3 filePresenter:(id)arg4 fileDropController:(id)arg5 actionPanelManager:(id)arg6 uploadService:(id)arg7 searchPlaceholderText:(id)arg8 ssoIdentity:(id)arg9 fileActionProvider:(id)arg10 alertController:(id)arg11 actionItemVCDelegate:(id)arg12 sharingClient:(id)arg13 urlOpener:(id)arg14 snackbarController:(id)arg15 shortcutUpgradeWarningEnabled:(_Bool)arg16 shortcutResolutionEnabled:(_Bool)arg17 improvedSearchZeroStateEnabled:(_Bool)arg18 activeSearchEnabled:(_Bool)arg19 searchDebounceDelayMilliseconds:(unsigned long long)arg20;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

