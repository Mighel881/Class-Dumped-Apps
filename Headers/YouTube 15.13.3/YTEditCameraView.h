//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, GIMMe, QTMActivityIndicator, YTEditCameraFocusView, YTEditCameraSwitchButton, YTEditCameraZoomView;

@interface YTEditCameraView : UIView
{
    UIView *_cameraSwitchWrapper;
    long long _recordButtonType;
    _Bool _fullScreen;
    _Bool _lightweight;
    _Bool _toastDisplayed;
    CALayer *_videoPreviewLayer;
    UIView *_videoPreviewView;
    YTEditCameraFocusView *_focusView;
    YTEditCameraZoomView *_zoomView;
    UIView *_recordButton;
    YTEditCameraSwitchButton *_cameraSwitchButton;
    UIView *_cameraOverlayView;
    QTMActivityIndicator *_loadingIndicator;
    long long _deviceOrientation;
    double _bottomPadding;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic, getter=isToastDisplayed) _Bool toastDisplayed; // @synthesize toastDisplayed=_toastDisplayed;
@property(nonatomic, getter=isLightweight) _Bool lightweight; // @synthesize lightweight=_lightweight;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(retain, nonatomic) QTMActivityIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *cameraOverlayView; // @synthesize cameraOverlayView=_cameraOverlayView;
@property(retain, nonatomic) YTEditCameraSwitchButton *cameraSwitchButton; // @synthesize cameraSwitchButton=_cameraSwitchButton;
@property(retain, nonatomic) UIView *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) YTEditCameraZoomView *zoomView; // @synthesize zoomView=_zoomView;
@property(retain, nonatomic) YTEditCameraFocusView *focusView; // @synthesize focusView=_focusView;
@property(readonly, nonatomic) UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) CALayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
- (void).cxx_destruct;
- (void)layoutControlButtons;
- (void)layoutSubviewsNormal;
- (void)layoutBottomComponents;
- (void)layoutSubviewsLightweight;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateVideoOrientation;
- (void)setRecordButtonType:(long long)arg1 animated:(_Bool)arg2;
- (void)bounceView:(id)arg1;
- (void)applyShadowToView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

