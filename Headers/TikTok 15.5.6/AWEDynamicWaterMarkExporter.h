//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeModel, HTSVideoData, IESMMTransProcessData;
@protocol IESMMTranscoderProtocol, IVEEffectProcess;

@interface AWEDynamicWaterMarkExporter : NSObject
{
    _Bool _appInBackground;
    _Bool _canceling;
    _Bool _needSaveToAlbum;
    id <IESMMTranscoderProtocol> _transcoder;
    HTSVideoData *_videoData;
    IESMMTransProcessData *_transConfig;
    id <IVEEffectProcess> _videoProcess;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
    double _progress;
    long long _backgroundCount;
    long long _retryCount;
    AWEAwemeModel *_model;
    long long _status;
}

+ (id)defaultExporter;
+ (void)cancel;
+ (void)addWaterMarkWithUrl:(id)arg1 composeOptions:(long long)arg2 model:(id)arg3 shouldMuteVideo:(_Bool)arg4 needSaveToAlbum:(_Bool)arg5 userName:(id)arg6 videoOutputSize:(struct CGSize)arg7 edgeData:(id)arg8 canDirectAddVideoheader:(_Bool)arg9 progress:(CDUnknownBlockType)arg10 complete:(CDUnknownBlockType)arg11 onlyForCrop:(_Bool)arg12 watermarkTaskType:(unsigned long long)arg13 removeSourceFile:(_Bool)arg14;
+ (void)configWatermarkBackground:(id)arg1;
+ (id)backgroundImageWithSize:(struct CGSize)arg1;
+ (id)endingWaterMarkImageWithVideoSize:(struct CGSize)arg1 douyinID:(id)arg2 name:(id)arg3 logoImage:(id)arg4 stickerIDArray:(id)arg5;
+ (id)endingWaterMarkLogoImage;
+ (id)endingWatermarkIDTextWithUser:(id)arg1;
+ (id)endingWatermarkNameTextWithUser:(id)arg1;
+ (id)lifeStoryWaterDataWithSize:(struct CGSize)arg1 timeToStart:(double)arg2 videoDuration:(double)arg3;
+ (id)generateLifeStoryWaterImageWithSize:(struct CGSize)arg1;
+ (id)endingWaterMarkImageWithVideoSize:(struct CGSize)arg1 user:(id)arg2 avatar:(id)arg3 forInstagram:(_Bool)arg4;
+ (id)watermarkLogoImageArray;
+ (id)generateImagesWithUserName:(id)arg1 videoWidth:(double)arg2 videoHeight:(double)arg3 alignment:(unsigned long long)arg4 isCurrentUser:(_Bool)arg5 profileIconType:(unsigned long long)arg6;
+ (id)generateImagesWithUserName:(id)arg1 videoWidth:(double)arg2 videoHeight:(double)arg3 alignment:(unsigned long long)arg4 isCurrentUser:(_Bool)arg5;
+ (id)generateStaticImageName:(id)arg1 videoWidth:(double)arg2 videoHeight:(double)arg3 alignment:(unsigned long long)arg4;
+ (id)generateStaticImagesWithUserName:(id)arg1 videoWidth:(double)arg2 videoHeight:(double)arg3 alignment:(unsigned long long)arg4;
+ (id)imageByScalingImage:(id)arg1 toTargetSize:(struct CGSize)arg2;
@property(nonatomic) _Bool needSaveToAlbum; // @synthesize needSaveToAlbum=_needSaveToAlbum;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool canceling; // @synthesize canceling=_canceling;
@property(nonatomic) long long backgroundCount; // @synthesize backgroundCount=_backgroundCount;
@property(nonatomic) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) id <IVEEffectProcess> videoProcess; // @synthesize videoProcess=_videoProcess;
@property(retain, nonatomic) IESMMTransProcessData *transConfig; // @synthesize transConfig=_transConfig;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) id <IESMMTranscoderProtocol> transcoder; // @synthesize transcoder=_transcoder;
- (void).cxx_destruct;
- (void)appDidBecomeActiveNotification;
- (void)appWillResignActiveNotification;
- (void)addNotificationObservers;
- (void)cancel;
- (void)waterMarkExporterFinished:(id)arg1;
- (void)p_export;
- (void)export;
- (void)exportWithProgress:(CDUnknownBlockType)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)clearResource;
- (id)init;
- (void)dealloc;

@end
