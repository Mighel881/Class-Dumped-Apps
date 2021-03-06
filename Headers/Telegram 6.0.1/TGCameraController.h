//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGOverlayController.h>

#import <TelegramUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, PGCamera, PGCameraVolumeButtonHandler, TGCameraFocusCrosshairsControl, TGCameraMainView, TGCameraPreviewView, TGMediaEditingContext, TGMediaPickerGallerySelectedItemsModel, TGMediaSelectionContext, TGModernGalleryVideoView, TGModernGalleryZoomableScrollViewSwipeGestureRecognizer, TGSuggestionContext, UIPinchGestureRecognizer, UISwipeGestureRecognizer, UIView;
@protocol LegacyComponentsContext;

@interface TGCameraController : TGOverlayController <UIGestureRecognizerDelegate>
{
    _Bool _standalone;
    int _intent;
    PGCamera *_camera;
    PGCameraVolumeButtonHandler *_buttonHandler;
    UIView *_autorotationCorrectionView;
    UIView *_backgroundView;
    TGCameraPreviewView *_previewView;
    TGCameraMainView *_interfaceView;
    UIView *_overlayView;
    TGCameraFocusCrosshairsControl *_focusControl;
    TGModernGalleryVideoView *_segmentPreviewView;
    _Bool _previewingSegment;
    UISwipeGestureRecognizer *_photoSwipeGestureRecognizer;
    UISwipeGestureRecognizer *_videoSwipeGestureRecognizer;
    TGModernGalleryZoomableScrollViewSwipeGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    double _dismissProgress;
    _Bool _dismissing;
    _Bool _finishedWithResult;
    TGMediaPickerGallerySelectedItemsModel *_selectedItemsModel;
    NSMutableArray *_items;
    TGMediaEditingContext *_editingContext;
    TGMediaSelectionContext *_selectionContext;
    NSTimer *_switchToVideoTimer;
    NSTimer *_startRecordingTimer;
    _Bool _recordingByShutterHold;
    _Bool _stopRecordingOnRelease;
    _Bool _shownMicrophoneAlert;
    id <LegacyComponentsContext> _context;
    _Bool _saveEditedPhotos;
    _Bool _saveCapturedMedia;
    _Bool _shutterIsBusy;
    NSMutableSet *_previousQRCodes;
    _Bool _liveUploadEnabled;
    _Bool _shouldStoreCapturedAssets;
    _Bool _allowCaptions;
    _Bool _allowCaptionEntities;
    _Bool _allowGrouping;
    _Bool _inhibitDocumentCaptions;
    _Bool _inhibitMultipleCapture;
    _Bool _inhibitMute;
    _Bool _hasTimer;
    _Bool _hasSilentPosting;
    _Bool _hasSchedule;
    _Bool _reminder;
    _Bool _shortcut;
    TGSuggestionContext *_suggestionContext;
    NSString *_forcedCaption;
    NSArray *_forcedEntities;
    NSString *_recipientName;
    CDUnknownBlockType _finishedWithResults;
    CDUnknownBlockType _finishedWithPhoto;
    CDUnknownBlockType _finishedWithVideo;
    CDUnknownBlockType _recognizedQRCode;
    CDUnknownBlockType _beginTransitionOut;
    CDUnknownBlockType _finishedTransitionOut;
    CDUnknownBlockType _customPresentOverlayController;
    CDUnknownBlockType _presentScheduleController;
}

+ (long long)generateGroupedId;
+ (id)resultSignalsForSelectionContext:(id)arg1 editingContext:(id)arg2 currentItem:(id)arg3 storeAssets:(_Bool)arg4 saveEditedPhotos:(_Bool)arg5 descriptionGenerator:(CDUnknownBlockType)arg6;
+ (_Bool)useLegacyCamera;
+ (long long)_interfaceOrientationForDeviceOrientation:(long long)arg1;
+ (struct CGRect)_cameraPreviewFrameForScreenSize:(struct CGSize)arg1 mode:(int)arg2;
@property(copy, nonatomic) CDUnknownBlockType presentScheduleController; // @synthesize presentScheduleController=_presentScheduleController;
@property(copy, nonatomic) CDUnknownBlockType customPresentOverlayController; // @synthesize customPresentOverlayController=_customPresentOverlayController;
@property(copy, nonatomic) CDUnknownBlockType finishedTransitionOut; // @synthesize finishedTransitionOut=_finishedTransitionOut;
@property(copy, nonatomic) CDUnknownBlockType beginTransitionOut; // @synthesize beginTransitionOut=_beginTransitionOut;
@property(copy, nonatomic) CDUnknownBlockType recognizedQRCode; // @synthesize recognizedQRCode=_recognizedQRCode;
@property(copy, nonatomic) CDUnknownBlockType finishedWithVideo; // @synthesize finishedWithVideo=_finishedWithVideo;
@property(copy, nonatomic) CDUnknownBlockType finishedWithPhoto; // @synthesize finishedWithPhoto=_finishedWithPhoto;
@property(copy, nonatomic) CDUnknownBlockType finishedWithResults; // @synthesize finishedWithResults=_finishedWithResults;
@property(retain, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
@property(retain, nonatomic) NSArray *forcedEntities; // @synthesize forcedEntities=_forcedEntities;
@property(retain, nonatomic) NSString *forcedCaption; // @synthesize forcedCaption=_forcedCaption;
@property(nonatomic) _Bool shortcut; // @synthesize shortcut=_shortcut;
@property(retain, nonatomic) TGSuggestionContext *suggestionContext; // @synthesize suggestionContext=_suggestionContext;
@property(nonatomic) _Bool reminder; // @synthesize reminder=_reminder;
@property(nonatomic) _Bool hasSchedule; // @synthesize hasSchedule=_hasSchedule;
@property(nonatomic) _Bool hasSilentPosting; // @synthesize hasSilentPosting=_hasSilentPosting;
@property(nonatomic) _Bool hasTimer; // @synthesize hasTimer=_hasTimer;
@property(nonatomic) _Bool inhibitMute; // @synthesize inhibitMute=_inhibitMute;
@property(nonatomic) _Bool inhibitMultipleCapture; // @synthesize inhibitMultipleCapture=_inhibitMultipleCapture;
@property(nonatomic) _Bool inhibitDocumentCaptions; // @synthesize inhibitDocumentCaptions=_inhibitDocumentCaptions;
@property(nonatomic) _Bool allowGrouping; // @synthesize allowGrouping=_allowGrouping;
@property(nonatomic) _Bool allowCaptionEntities; // @synthesize allowCaptionEntities=_allowCaptionEntities;
@property(nonatomic) _Bool allowCaptions; // @synthesize allowCaptions=_allowCaptions;
@property(nonatomic) _Bool shouldStoreCapturedAssets; // @synthesize shouldStoreCapturedAssets=_shouldStoreCapturedAssets;
@property(nonatomic) _Bool liveUploadEnabled; // @synthesize liveUploadEnabled=_liveUploadEnabled;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleSwipe:(id)arg1;
- (double)dismissProgressForSwipeDistance:(double)arg1;
- (void)handleDeviceOrientationChangedTo:(long long)arg1;
- (void)resizePreviewViewForCameraMode:(int)arg1;
- (void)_updateDismissTransitionWithProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_updateDismissTransitionMovementWithDistance:(double)arg1 animated:(_Bool)arg2;
- (void)simpleTransitionOutWithVelocity:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissTransitionForResultController:(id)arg1;
- (void)beginTransitionOutWithVelocity:(double)arg1;
- (void)beginTransitionInFromRect:(struct CGRect)arg1;
- (struct CGRect)transitionBackFromResultControllerWithReferenceFrame:(struct CGRect)arg1;
- (void)_saveVideoToCameraRollWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_savePhotoToCameraRollWithOriginalImage:(id)arg1 editedImage:(id)arg2;
- (void)presentPhotoResultControllerWithImage:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_signalForItem:(id)arg1;
- (void)presentResultControllerForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)prepareGalleryItemsForResults:(CDUnknownBlockType)arg1;
- (_Bool)maybePresentResultControllerForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldPresentResultController;
- (_Bool)willPresentResultController;
- (void)addResultItem:(id)arg1;
- (void)cancelPressed;
- (void)shutterReleased;
- (void)shutterPressed;
- (void)startVideoRecording;
- (void)setInterfaceHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applyAutorotationCorrectingTransformForOrientation:(long long)arg1;
- (_Bool)shouldCorrectAutorotation;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_configureCamera;
- (void)loadView;
- (void)dealloc;
- (id)initWithContext:(id)arg1 saveEditedPhotos:(_Bool)arg2 saveCapturedMedia:(_Bool)arg3 camera:(id)arg4 previewView:(id)arg5 intent:(int)arg6;
- (id)initWithContext:(id)arg1 saveEditedPhotos:(_Bool)arg2 saveCapturedMedia:(_Bool)arg3 intent:(int)arg4;
- (id)initWithContext:(id)arg1 saveEditedPhotos:(_Bool)arg2 saveCapturedMedia:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

