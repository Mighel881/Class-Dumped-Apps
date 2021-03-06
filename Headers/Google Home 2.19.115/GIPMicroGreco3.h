//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAKAudioSink-Protocol.h"

@class GIPMicroSpeakerIDEnroller, GIPMicroSpeechModelRetriever, NSCondition, NSMutableData, NSString;
@protocol GIPMicroGreco3Delegate, OS_dispatch_queue;

@interface GIPMicroGreco3 : NSObject <GAKAudioSink>
{
    NSString *_language;
    long long _hotwordModelType;
    NSMutableData *_hotwordModel;
    NSString *_hotwordModelID;
    GIPMicroSpeechModelRetriever *_speechModelRetriever;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _numSamplesProcessed;
    NSCondition *_threadRunningCond;
    _Bool _threadRunning;
    NSCondition *_audioDataQueueCond;
    NSMutableData *_audioDataQueue;
    _Bool _running;
    long long _sampleRate;
    int _runCount;
    _Bool _speakerIDEnabled;
    GIPMicroSpeakerIDEnroller *_speakerIDEnroller;
    id <GIPMicroGreco3Delegate> _delegate;
}

+ (_Bool)supportsLanguage:(id)arg1 modelType:(long long)arg2;
+ (_Bool)supportsLanguage:(id)arg1;
@property(nonatomic) id <GIPMicroGreco3Delegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *hotwordModelID; // @synthesize hotwordModelID=_hotwordModelID;
- (void).cxx_destruct;
- (void)handleAudio:(struct AudioBufferList *)arg1 fromSource:(id)arg2;
- (void)notifyDelegateThatStopRecognizerDidFailWithErrorCode:(long long)arg1;
- (void)notifyDelegateThatStopDidFailWithErrorCode:(long long)arg1;
- (void)notifyDelegateThatStartDidFailWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)notifyDelegateThatStartDidFailWithErrorCode:(long long)arg1;
- (void)notifyDelegateThatMicroGreco3DidStopSuccessfully;
- (void)notifyDelegateThatMicroGreco3DidStartSuccessfully;
- (int)runCount;
- (_Bool)processAudioDataSegment:(id)arg1 withState:(struct GoogleHotwordState *)arg2 hotwordData:(struct GoogleHotwordData *)arg3;
- (id)dequeueNextAudioDataSegmentWithHotwordData:(struct GoogleHotwordData *)arg1;
- (void)startWithHotwordModelData:(id)arg1 speakerIDModelData:(id)arg2 speakerIDProperties:(id)arg3;
- (void)retrieveSpeakerIDModelWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveHotwordModelWithCompletion:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)stopRecognizer;
- (_Bool)isRunning;
- (void)start;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

