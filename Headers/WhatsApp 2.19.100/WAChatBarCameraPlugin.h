//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAChatBarMenuPlugin-Protocol.h"
#import "WAMultiShotCameraControllerDelegate-Protocol.h"

@class NSString, UIButton, UIViewController;
@protocol WAMultiSendMediaPickerControllerDelegate><WAChatBarCameraPluginDelegate;

@interface WAChatBarCameraPlugin : NSObject <WAChatBarMenuPlugin, WAMultiShotCameraControllerDelegate>
{
    UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarCameraPluginDelegate> *_viewController;
    UIButton *_cameraButton;
    UIButton *_attachMediaButton;
}

@property(nonatomic) __weak UIButton *attachMediaButton; // @synthesize attachMediaButton=_attachMediaButton;
@property(nonatomic) __weak UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, nonatomic) __weak UIViewController<WAMultiSendMediaPickerControllerDelegate><WAChatBarCameraPluginDelegate> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)multiShotCameraController:(id)arg1 didRequestAddContactWithDetails:(id)arg2;
- (void)multiShotCameraController:(id)arg1 didRequestPresentPhotoLibraryWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)multiShotCameraController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)multiShotCameraController:(id)arg1 didCaptureItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)showMultiShotCameraFromChatBar:(_Bool)arg1 withChatSession:(id)arg2;
- (void)showCameraFromChatBarWithChatSession:(id)arg1;
- (void)showCameraFromChatBar:(_Bool)arg1 withChatSession:(id)arg2;
- (void)showCameraFromActionSheetWithChatSession:(id)arg1;
- (void)presentInsufficientDiskSpaceAlert;
- (_Bool)hasSufficientDiskSpaceToUseCamera;
- (void)addMenuItemToActionSheet:(id)arg1 withChatSession:(id)arg2;
- (_Bool)shouldShowInMenu;
- (id)initWithHostViewController:(id)arg1 cameraButton:(id)arg2 attachMediaButton:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
