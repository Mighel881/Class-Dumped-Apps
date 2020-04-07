//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LiveStreamSessionProtocol-Protocol.h"

@class LiveCoreCamera, LiveCoreRunInfo, LiveStreamCapture, LiveStreamSession, MultiTimerManager, NSMutableDictionary, NSString, UIView;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LiveCore : NSObject <LiveStreamSessionProtocol>
{
    _Bool _shouldStartCameraCapture;
    int _deviceLevel;
    unsigned long long _enabledModule;
    CDUnknownBlockType _statusChangedBlock;
    long long _reconnectCount;
    unsigned long long _logLevel;
    CDUnknownBlockType _shouldUpdateOptimumIPAddress;
    CDUnknownBlockType _streamLogCallback;
    CDUnknownBlockType _debugLogBlock;
    LiveStreamSession *_liveSession;
    NSMutableDictionary *_user_layer_map;
    long long _runState;
    LiveCoreRunInfo *_runInfo;
    NSString *_mode;
    NSString *_category;
    unsigned long long _options;
    NSObject<OS_dispatch_source> *_logTimer;
    LiveStreamCapture *_capture;
    UIView *_previewView;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timer_quque;
    MultiTimerManager *_timerManager;
    NSMutableDictionary *_propertyDict;
    LiveCoreCamera *_camera;
}

@property(nonatomic) _Bool shouldStartCameraCapture; // @synthesize shouldStartCameraCapture=_shouldStartCameraCapture;
@property(retain, nonatomic) LiveCoreCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) NSMutableDictionary *propertyDict; // @synthesize propertyDict=_propertyDict;
@property(retain, nonatomic) MultiTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timer_quque; // @synthesize timer_quque=_timer_quque;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) int deviceLevel; // @synthesize deviceLevel=_deviceLevel;
@property(retain, nonatomic) LiveStreamCapture *capture; // @synthesize capture=_capture;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *logTimer; // @synthesize logTimer=_logTimer;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) LiveCoreRunInfo *runInfo; // @synthesize runInfo=_runInfo;
@property(nonatomic) long long runState; // @synthesize runState=_runState;
@property(retain, nonatomic) NSMutableDictionary *user_layer_map; // @synthesize user_layer_map=_user_layer_map;
@property(retain, nonatomic) LiveStreamSession *liveSession; // @synthesize liveSession=_liveSession;
@property(copy, nonatomic) CDUnknownBlockType debugLogBlock; // @synthesize debugLogBlock=_debugLogBlock;
@property(copy, nonatomic) CDUnknownBlockType streamLogCallback; // @synthesize streamLogCallback=_streamLogCallback;
@property(copy, nonatomic) CDUnknownBlockType shouldUpdateOptimumIPAddress; // @synthesize shouldUpdateOptimumIPAddress=_shouldUpdateOptimumIPAddress;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) long long reconnectCount; // @synthesize reconnectCount=_reconnectCount;
@property(copy, nonatomic) CDUnknownBlockType statusChangedBlock; // @synthesize statusChangedBlock=_statusChangedBlock;
@property(nonatomic) unsigned long long enabledModule; // @synthesize enabledModule=_enabledModule;
- (void).cxx_destruct;
- (void)original_mini_game_status_did_changed:(long long)arg1;
- (void)original_mini_game_deinit;
- (void)original_mini_game_init;
- (_Bool)replace_mini_game_installed;
- (void)original_ktv_processAudioBufferList:(struct AudioBufferList *)arg1 inNumberFrames:(unsigned int)arg2 processedData:(struct AudioBufferList *)arg3 headphonesMonitoringData:(struct AudioBufferList *)arg4;
- (void)original_ktv_stop;
- (void)original_ktv_init;
- (_Bool)original_ktv_installed;
- (void)original_interact_resumeMixedPushIfNeeded;
- (void)original_interact_pushVideoBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;
- (void)original_interact_pushAudioDataToInteractSDK:(struct AudioBufferList *)arg1 frames:(unsigned int)arg2;
- (void)original_interact_cleanup;
- (void)original_interact_setupCapture;
- (void)original_interact_init;
- (_Bool)original_interact_installed;
- (void)reportToServer:(id)arg1;
- (void)debugLog:(id)arg1;
- (void)reportLiveCoreLog:(id)arg1 params:(id)arg2;
- (id)commonLog;
- (void)invalidateTimer;
- (void)executeTimerBLocks;
- (void)removeTimerBlock:(CDUnknownBlockType)arg1;
- (void)addTimerBlock:(CDUnknownBlockType)arg1;
- (void)generateTimer;
- (void)streamSession:(id)arg1 onError:(long long)arg2;
- (void)streamSession:(id)arg1 onStatusChanged:(long long)arg2;
@property(nonatomic, getter=isEchoCancellationEnabled) _Bool echoCancellationEnabled;
@property(nonatomic) _Bool headphonesMonitoringEnabled;
- (id)liveConfig;
- (void)pushAudioBuffer:(char *)arg1 andDataLen:(unsigned long long)arg2 andInNumberFrames:(int)arg3 andCMTime:(CDStruct_1b6d18a9)arg4;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 andTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)pushEffectedVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (id)getStreamInfoForKey:(id)arg1;
- (int)sendSEIMsgWithKey:(id)arg1 value:(id)arg2 repeatTimes:(long long)arg3 keyFrameOnly:(_Bool)arg4 allowsCovered:(_Bool)arg5;
- (int)sendSEIMsgWithKey:(id)arg1 value:(id)arg2 repeatTimes:(long long)arg3;
- (void)setAudioMute:(_Bool)arg1;
- (_Bool)isStreaming;
- (void)stopStreaming;
- (void)startStreaming;
- (void)retryStreaming;
- (void)checkDeviceLevel;
- (id)getStreamSession;
- (void)setupLiveSessionWithConfig:(id)arg1;
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;
- (id)getEAGLContext;
- (void)restoreAVAudioSession;
- (void)saveAVAudioSession;
- (void)dealloc;
- (void)updateLiveCoreModule:(unsigned long long)arg1;
- (id)initWithMode:(unsigned long long)arg1;
- (id)init;
- (void)setEffectRenderCacheTextureWithImage:(id)arg1 algorithmType:(id)arg2;
- (void)fetchEffectDetectPhotoContentWithImage:(id)arg1 algorithmType:(id)arg2 isLastPhone:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)isSpeechRecognizing;
- (void)stopSpeechRecognizing;
- (void)startSpeechRecognizing;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 andCMTime:(CDStruct_1b6d18a9)arg2;
- (void)setupCapture;
- (void)setPreviewMode:(long long)arg1;
- (void)exposureAtPoint:(struct CGPoint)arg1;
- (void)setupVideoPath;
- (void)resetPreviewOn:(id)arg1;
- (void)checkCameraStatus;
- (void)stopCameraChecking;
- (void)startCameraChecking;
- (void)startCameraCaptureIfNeeded;
- (void)setupVideoCamera;
- (void)setEnableAudioCaptureInBackground:(_Bool)arg1;
- (void)audioCaptureInterrupted:(_Bool)arg1;
- (void)stopAudioCapture;
- (void)startAudioCapture;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (id)liveCapture;
- (void)setLiveCapture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
