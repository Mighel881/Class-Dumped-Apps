//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

#import "IESMMEffectAlgorithmFilterProtocol-Protocol.h"
#import "IESMMEffectChangeFaceProtocol-Protocol.h"
#import "IESMMEffectSLAMProtocol-Protocol.h"
#import "IVEAlgorithmForwardProtocol-Protocol.h"
#import "IVEGestureAmazingEngineProtocol-Protocol.h"
#import "IVEGestureProtocol-Protocol.h"

@class IESMMEffectAlgorithm, NSArray, NSMutableDictionary, NSString;
@protocol IVEEffectAlgorithmProtocol;

@interface IESMMEffectAlgorithmFilter : HTSGLFilter <IVEAlgorithmForwardProtocol, IESMMEffectChangeFaceProtocol, IESMMEffectSLAMProtocol, IVEGestureProtocol, IVEGestureAmazingEngineProtocol, IESMMEffectAlgorithmFilterProtocol>
{
    _Bool _isFrontCamera;
    _Bool _slamWithoutExtraDeviceMotionData;
    unsigned long long _usedEffect;
    struct __CVBuffer *_currentPixelBuffer;
    CDUnknownBlockType _facePointBlock;
    CDUnknownBlockType _algorithmDetectStatus;
    double _timeStamp;
    IESMMEffectAlgorithm *_algorithm;
    NSMutableDictionary *_existAuxiliaryImageTextures;
    NSArray *_auxiliaryTextureKeys;
}

@property(retain, nonatomic) NSArray *auxiliaryTextureKeys; // @synthesize auxiliaryTextureKeys=_auxiliaryTextureKeys;
@property(retain, nonatomic) NSMutableDictionary *existAuxiliaryImageTextures; // @synthesize existAuxiliaryImageTextures=_existAuxiliaryImageTextures;
@property(retain, nonatomic) IESMMEffectAlgorithm *algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) CDUnknownBlockType algorithmDetectStatus; // @synthesize algorithmDetectStatus=_algorithmDetectStatus;
@property(copy, nonatomic) CDUnknownBlockType facePointBlock; // @synthesize facePointBlock=_facePointBlock;
@property(nonatomic) struct __CVBuffer *currentPixelBuffer; // @synthesize currentPixelBuffer=_currentPixelBuffer;
@property(nonatomic) _Bool slamWithoutExtraDeviceMotionData; // @synthesize slamWithoutExtraDeviceMotionData=_slamWithoutExtraDeviceMotionData;
@property(nonatomic) unsigned long long usedEffect; // @synthesize usedEffect=_usedEffect;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
- (void).cxx_destruct;
- (_Bool)toggleGestureRecognition:(_Bool)arg1 type:(int)arg2;
- (_Bool)isTouchGestureRecognitionEnabled:(int)arg1;
- (_Bool)updateTouchInfoForRecognition:(struct _VETouchInfo)arg1;
- (_Bool)handleDoubleClickEvent:(struct CGPoint)arg1;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handlePanEventWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (_Bool)handleLongPressEventWithLocation:(struct CGPoint)arg1;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleTouchDown:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)isSLAMRunning;
- (_Bool)getSLAMPlaneDetectStatus;
- (long long)getSLAMStatus;
- (id)getAuxiliaryTextureKeys;
- (void)setAuxiliaryImage:(id)arg1 withKey:(id)arg2;
- (void)p_clearAuxiliaryImageTexturesIfNeeded;
- (void)deleteImageTextureForKey:(id)arg1;
- (void)removeAllAuxiliaryImages;
@property(readonly, nonatomic) id <IVEEffectAlgorithmProtocol> algorithmImp;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 effectHandle:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
