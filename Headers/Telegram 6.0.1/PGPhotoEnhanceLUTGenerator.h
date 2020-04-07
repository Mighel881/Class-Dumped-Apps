//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/GPUImageInput-Protocol.h>

@class GLProgram, GPUImageFramebuffer, NSString;

@interface PGPhotoEnhanceLUTGenerator : NSObject <GPUImageInput>
{
    double _clipLimit;
    struct CGSize _imageSize;
    int _inputRotation;
    GPUImageFramebuffer *_firstInputFramebuffer;
    GPUImageFramebuffer *_outputFramebuffer;
    GPUImageFramebuffer *_retainedFramebuffer;
    GLProgram *_dataProgram;
    int _dataPositionAttribute;
    int _dataTextureCoordinateAttribute;
    int _dataInputTextureUniform;
    _Bool _hasReadCurrentFrame;
    char *_rawBytesForImage;
    _Bool _lockNextFramebuffer;
    _Bool _skip;
    _Bool _enabled;
    CDUnknownBlockType _lutDataReady;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool skip; // @synthesize skip=_skip;
@property(copy, nonatomic) CDUnknownBlockType lutDataReady; // @synthesize lutDataReady=_lutDataReady;
- (void).cxx_destruct;
- (char *)_rawBytes;
- (void)_render;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
