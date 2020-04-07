//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESGLMovieWriterDelegate-Protocol.h"

@class HTSFilterInterface, HTSGLFilterInput, HTSVideoData, IESGLMovieWriter, NSString;
@protocol VECameraWriterDelegate;

@interface IESCameraWriter : NSObject <IESGLMovieWriterDelegate>
{
    _Bool _movieWriterStatus;
    _Bool _hasMusic;
    int _frameRate;
    IESGLMovieWriter *_movieWriter;
    id <VECameraWriterDelegate> _cameraWriterDelegate;
    HTSGLFilterInput *_inputFilter;
    HTSFilterInterface *_filter;
    HTSVideoData *_videoData;
    struct CGSize _outputSize;
    CDStruct_1b6d18a9 _maxLimitTime;
}

+ (void)removeVideoFragmentFileAtUrl:(id)arg1;
@property(nonatomic) _Bool hasMusic; // @synthesize hasMusic=_hasMusic;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) __weak HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) __weak HTSFilterInterface *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak HTSGLFilterInput *inputFilter; // @synthesize inputFilter=_inputFilter;
@property(nonatomic) CDStruct_1b6d18a9 maxLimitTime; // @synthesize maxLimitTime=_maxLimitTime;
@property(nonatomic) __weak id <VECameraWriterDelegate> cameraWriterDelegate; // @synthesize cameraWriterDelegate=_cameraWriterDelegate;
@property(retain) IESGLMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(nonatomic) _Bool movieWriterStatus; // @synthesize movieWriterStatus=_movieWriterStatus;
@property(nonatomic) int frameRate; // @synthesize frameRate=_frameRate;
- (void).cxx_destruct;
- (void)movieRecordingDuration:(double)arg1;
- (void)movieRecordingReachedLimitMaxTime;
- (void)resetFrameRate:(int)arg1;
- (void)trackerParam;
- (id)videoOutputConfiguration;
- (void)clearMovieWriter;
- (void)removeAllVideoFragments;
- (void)removeLastVideoFragment;
- (unsigned long long)fragmentCount;
- (void)cancelWriting;
- (void)pauseWritingWithRate:(double)arg1 and:(_Bool)arg2 and:(double)arg3 and:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (id)getMetadataItem;
- (void)audioPlayerStatus:(_Bool)arg1;
- (void)setRecordRate:(double)arg1;
- (void)startWriting:(CDUnknownBlockType)arg1 hasMusic:(_Bool)arg2 forceRecordAudio:(_Bool)arg3;
- (id)initWithInputFilter:(id)arg1 filter:(id)arg2 videoData:(id)arg3 outputSize:(struct CGSize)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
