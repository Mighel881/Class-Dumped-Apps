//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1PhotoGalleryViewControllerDelegate-Protocol.h>

@class NSString, T1NewsCameraCaptureViewController, T1PhotoGalleryViewController, TFSTwitterScribeContext;
@protocol T1NewsCameraCaptureReactModePhotoGalleryViewControllerDelegate;

@interface T1NewsCameraCaptureReactModePhotoGalleryViewController : TFNViewController <T1PhotoGalleryViewControllerDelegate>
{
    TFSTwitterScribeContext *_scribeContext;
    id <T1NewsCameraCaptureReactModePhotoGalleryViewControllerDelegate> _delegate;
    T1NewsCameraCaptureViewController *_captureViewController;
    T1PhotoGalleryViewController *_photoGalleryViewController;
}

@property(readonly, nonatomic) T1PhotoGalleryViewController *photoGalleryViewController; // @synthesize photoGalleryViewController=_photoGalleryViewController;
@property(nonatomic) __weak T1NewsCameraCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(nonatomic) __weak id <T1NewsCameraCaptureReactModePhotoGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void).cxx_destruct;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)photoGalleryViewController:(id)arg1 didEndSessionWithAttachments:(id)arg2;
- (void)_t1_loadGalleryViewController;
- (_Bool)_t1_loadAuthorizationInterstistialIfNeeded;
- (void)viewDidLoad;
- (id)initWithCaptureViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

