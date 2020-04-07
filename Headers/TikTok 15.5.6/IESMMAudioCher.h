//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEAudioEffectBase.h"

@class IESMMAudioProcessorEx, NSString;

@interface IESMMAudioCher : VEAudioEffectBase
{
    struct CherEffect *_cherHandle;
    _Bool _isProcessing;
    int _samplerate;
    int _channels;
    NSString *_matrixStr;
    double _cherCost;
    IESMMAudioProcessorEx *_audioProcessor;
    NSString *_audioPreprocessChunk;
}

@property(retain, nonatomic) NSString *audioPreprocessChunk; // @synthesize audioPreprocessChunk=_audioPreprocessChunk;
@property(retain, nonatomic) IESMMAudioProcessorEx *audioProcessor; // @synthesize audioProcessor=_audioProcessor;
@property(nonatomic) double cherCost; // @synthesize cherCost=_cherCost;
@property(nonatomic) _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(retain, nonatomic) NSString *matrixStr; // @synthesize matrixStr=_matrixStr;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) int samplerate; // @synthesize samplerate=_samplerate;
- (void).cxx_destruct;
- (_Bool)finishProcess;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)finishDetect;
- (void)detectAudio:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithSamplerate:(int)arg1 channels:(int)arg2 cherFilePath:(id)arg3;
- (id)initWithSamplerate:(int)arg1 channels:(int)arg2;
- (id)init;
- (void)dealloc;

@end
