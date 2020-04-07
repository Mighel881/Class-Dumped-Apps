//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UIImage;

@interface LiveStreamConfiguration : NSObject
{
    _Bool _enableBFrame;
    _Bool _enableNTP;
    _Bool _enableOpenGOP;
    _Bool _enableInEarMonitoring;
    _Bool _enableBlueToothEarMonitoring;
    _Bool _allowsRealTimeVoicePowerLevel;
    _Bool _enableBackgroundMode;
    _Bool _useCustomizedSEI;
    NSString *_rtmpURL;
    NSArray *_URLs;
    NSDictionary *_sdkParams;
    NSString *_project_key;
    long long _streamMode;
    unsigned long long _audioSource;
    NSString *_capturePreset;
    unsigned long long _bitrate;
    unsigned long long _maxBitrate;
    unsigned long long _minBitrate;
    unsigned long long _audioBitrate;
    unsigned long long _videoFPS;
    long long _gopSec;
    long long _bitrateAdaptStrategy;
    unsigned long long _audioChannelCount;
    unsigned long long _audioSampleRate;
    long long _streamLogTimeInterval;
    long long _aCodec;
    unsigned long long _vCodec;
    long long _profileLevel;
    UIImage *_backgroundImage;
    long long _dtsAdjustParam;
    struct CGSize _outputSize;
}

+ (struct CGSize)suggestedFullScreenVideoSize;
+ (id)defaultConfiguration;
@property(nonatomic) long long dtsAdjustParam; // @synthesize dtsAdjustParam=_dtsAdjustParam;
@property(nonatomic) _Bool useCustomizedSEI; // @synthesize useCustomizedSEI=_useCustomizedSEI;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool enableBackgroundMode; // @synthesize enableBackgroundMode=_enableBackgroundMode;
@property(nonatomic) long long profileLevel; // @synthesize profileLevel=_profileLevel;
@property(nonatomic) unsigned long long vCodec; // @synthesize vCodec=_vCodec;
@property(nonatomic) long long aCodec; // @synthesize aCodec=_aCodec;
@property(nonatomic) _Bool allowsRealTimeVoicePowerLevel; // @synthesize allowsRealTimeVoicePowerLevel=_allowsRealTimeVoicePowerLevel;
@property(nonatomic) long long streamLogTimeInterval; // @synthesize streamLogTimeInterval=_streamLogTimeInterval;
@property(nonatomic) _Bool enableBlueToothEarMonitoring; // @synthesize enableBlueToothEarMonitoring=_enableBlueToothEarMonitoring;
@property(nonatomic) _Bool enableInEarMonitoring; // @synthesize enableInEarMonitoring=_enableInEarMonitoring;
@property(nonatomic) unsigned long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) unsigned long long audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(nonatomic) _Bool enableOpenGOP; // @synthesize enableOpenGOP=_enableOpenGOP;
@property(nonatomic) long long bitrateAdaptStrategy; // @synthesize bitrateAdaptStrategy=_bitrateAdaptStrategy;
@property(nonatomic) _Bool enableNTP; // @synthesize enableNTP=_enableNTP;
@property(nonatomic) _Bool enableBFrame; // @synthesize enableBFrame=_enableBFrame;
@property(nonatomic) long long gopSec; // @synthesize gopSec=_gopSec;
@property(nonatomic) unsigned long long videoFPS; // @synthesize videoFPS=_videoFPS;
@property(nonatomic) unsigned long long audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned long long minBitrate; // @synthesize minBitrate=_minBitrate;
@property(nonatomic) unsigned long long maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(copy, nonatomic) NSString *capturePreset; // @synthesize capturePreset=_capturePreset;
@property(nonatomic) unsigned long long audioSource; // @synthesize audioSource=_audioSource;
@property(nonatomic) long long streamMode; // @synthesize streamMode=_streamMode;
@property(copy, nonatomic) NSString *project_key; // @synthesize project_key=_project_key;
@property(copy, nonatomic) NSDictionary *sdkParams; // @synthesize sdkParams=_sdkParams;
@property(copy, nonatomic) NSArray *URLs; // @synthesize URLs=_URLs;
@property(copy, nonatomic) NSString *rtmpURL; // @synthesize rtmpURL=_rtmpURL;
- (void).cxx_destruct;
- (void)dealloc;

@end
