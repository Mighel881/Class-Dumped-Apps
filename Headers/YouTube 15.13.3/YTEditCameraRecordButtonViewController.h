//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/YTEditCameraRecording-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, UIButton, UILongPressGestureRecognizer, UIView, YTInteractionLoggingProxyButton, YTMonotonicDate;
@protocol YTEditCameraRecordButtonViewControllerDelegate, YTEditCameraRecording, YTInteractionLoggingButtonProtocol, YTResponder;

@interface YTEditCameraRecordButtonViewController : UIViewController <UIGestureRecognizerDelegate, YTEditCameraRecording, YTResponder>
{
    UIButton<YTEditCameraRecording> *_button;
    UILongPressGestureRecognizer *_recordGestureRecognizer;
    YTMonotonicDate *_recordPressStart;
    YTInteractionLoggingProxyButton *_cameraStopButton;
    _Bool _didShowCameraStop;
    _Bool _recording;
    _Bool _useRecordGesture;
    double _timeLimit;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTEditCameraRecordButtonViewControllerDelegate> _delegate;
    long long _recordButtonType;
    Class _viewClass;
}

@property(nonatomic, getter=shouldUseRecordGesture) _Bool useRecordGesture; // @synthesize useRecordGesture=_useRecordGesture;
@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
@property(nonatomic) long long recordButtonType; // @synthesize recordButtonType=_recordButtonType;
@property(nonatomic) __weak id <YTEditCameraRecordButtonViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
- (void).cxx_destruct;
- (void)logClickForGestureType:(long long)arg1;
- (void)handleRecordGesture:(id)arg1;
- (void)logCameraStopButtonAsShown;
@property(readonly, nonatomic) id <YTInteractionLoggingButtonProtocol> cameraStopButton;
@property(readonly, nonatomic) id <YTInteractionLoggingButtonProtocol> cameraStartButton;
@property(readonly, nonatomic) UIButton<YTEditCameraRecording> *button;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 viewClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<YTEditCameraRecording> *view; // @dynamic view;

@end
