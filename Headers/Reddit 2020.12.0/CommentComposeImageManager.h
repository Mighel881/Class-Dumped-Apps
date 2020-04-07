//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIViewController;

@interface CommentComposeImageManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIViewController *_viewControllerForPresentation;
}

@property(nonatomic) __weak UIViewController *viewControllerForPresentation; // @synthesize viewControllerForPresentation=_viewControllerForPresentation;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)presentImagePickerForSourceType:(long long)arg1;
- (void)showPermissionModalWithCompletion:(CDUnknownBlockType)arg1;
- (void)showCamera;
- (void)showPhotoPicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
