//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DKImagePickerController/_TtC23DKImagePickerController24DKUINavigationController.h>

@class NSArray, _TtC23DKImagePickerController20DKImageAssetExporter, _TtC23DKImagePickerController22DKPermissionViewColors, _TtC23DKImagePickerController23DKImageGroupDataManager, _TtC23DKImagePickerController37DKImagePickerControllerBaseUIDelegate;

@interface _TtC23DKImagePickerController23DKImagePickerController : _TtC23DKImagePickerController24DKUINavigationController
{
    // Error parsing type: , name: UIDelegate
    // Error parsing type: , name: singleSelect
    // Error parsing type: , name: autoCloseOnSingleSelect
    // Error parsing type: , name: maxSelectableCount
    // Error parsing type: , name: containsGPSInMetadata
    // Error parsing type: , name: defaultAssetGroup
    // Error parsing type: , name: allowSwipeToSelect
    // Error parsing type: , name: allowSelectAll
    // Error parsing type: , name: inline
    // Error parsing type: , name: assetType
    // Error parsing type: , name: sourceType
    // Error parsing type: , name: allowMultipleTypes
    // Error parsing type: , name: allowsLandscape
    // Error parsing type: , name: showsEmptyAlbums
    // Error parsing type: , name: showsCancelButton
    // Error parsing type: , name: fetchLimit
    // Error parsing type: , name: didCancel
    // Error parsing type: , name: didSelectAssets
    // Error parsing type: , name: selectedChanged
    // Error parsing type: , name: permissionViewColors
    // Error parsing type: , name: exportsWhenCompleted
    // Error parsing type: , name: exporter
    // Error parsing type: , name: exportStatus
    // Error parsing type: , name: exportStatusChanged
    // Error parsing type: , name: $__lazy_storage_$_groupDataManager
    // Error parsing type: , name: selectedAssetIdentifiers
    // Error parsing type: , name: assets
    // Error parsing type: , name: $__lazy_storage_$_extensionController
    // Error parsing type: , name: proxyObserver
    // Error parsing type: , name: rootVC
    // Error parsing type: , name: $__lazy_storage_$_doSetupOnce
    // Error parsing type: , name: needShowInlineCamera
    // Error parsing type: , name: exportRequestID
    // Error parsing type: , name: metadataFromCamera
    // Error parsing type: , name: internalSelectedAssetsCache
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) _Bool shouldAutorotate;
- (_Bool)canSelectWithAsset:(id)arg1 showAlert:(_Bool)arg2;
@property(nonatomic, readonly) NSArray *selectedAssets;
- (_Bool)containsWithAsset:(id)arg1;
- (void)setSelectedAssetsWithAssets:(id)arg1;
- (void)deselectAll;
- (void)removeSelectionWithAsset:(id)arg1;
- (void)deselectWithAsset:(id)arg1;
- (void)handleSelectAll;
- (void)selectWithAssets:(id)arg1;
- (void)selectWithAsset:(id)arg1;
- (id)writeMetadata:(id)arg1 into:(id)arg2;
- (void)saveImageDataToAlbumForiOS9:(id)arg1:(CDUnknownBlockType)arg2;
- (void)saveImageDataToAlbumForiOS8:(id)arg1:(id)arg2:(CDUnknownBlockType)arg3;
- (void)saveImageToAlbum:(id)arg1:(CDUnknownBlockType)arg2;
- (void)saveImage:(id)arg1:(id)arg2:(CDUnknownBlockType)arg3;
- (void)reloadWith:(id)arg1;
- (void)done;
- (void)dismiss;
- (void)dismissCameraWithIsInline:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCamera;
- (id)makeRootVC;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic, retain) _TtC23DKImagePickerController23DKImageGroupDataManager *groupDataManager;
@property(nonatomic, copy) CDUnknownBlockType exportStatusChanged;
@property(nonatomic) long long exportStatus; // @synthesize exportStatus;
@property(nonatomic, retain) _TtC23DKImagePickerController20DKImageAssetExporter *exporter; // @synthesize exporter;
@property(nonatomic) _Bool exportsWhenCompleted; // @synthesize exportsWhenCompleted;
@property(nonatomic, retain) _TtC23DKImagePickerController22DKPermissionViewColors *permissionViewColors; // @synthesize permissionViewColors;
@property(nonatomic, copy) CDUnknownBlockType selectedChanged;
@property(nonatomic, copy) CDUnknownBlockType didSelectAssets;
@property(nonatomic, copy) CDUnknownBlockType didCancel;
@property(nonatomic) long long fetchLimit; // @synthesize fetchLimit;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton;
@property(nonatomic) _Bool showsEmptyAlbums; // @synthesize showsEmptyAlbums;
@property(nonatomic) _Bool allowsLandscape; // @synthesize allowsLandscape;
@property(nonatomic) _Bool allowMultipleTypes; // @synthesize allowMultipleTypes;
@property(nonatomic) long long sourceType; // @synthesize sourceType;
@property(nonatomic) long long assetType; // @synthesize assetType;
@property(nonatomic) _Bool inline; // @synthesize inline;
@property(nonatomic) _Bool allowSelectAll; // @synthesize allowSelectAll;
@property(nonatomic) _Bool allowSwipeToSelect; // @synthesize allowSwipeToSelect;
@property(nonatomic) long long maxSelectableCount; // @synthesize maxSelectableCount;
@property(nonatomic) _Bool autoCloseOnSingleSelect; // @synthesize autoCloseOnSingleSelect;
@property(nonatomic) _Bool singleSelect; // @synthesize singleSelect;
@property(nonatomic, retain) _TtC23DKImagePickerController37DKImagePickerControllerBaseUIDelegate *UIDelegate; // @synthesize UIDelegate;

@end
