//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class HTSGLFilterGroup, NSData, NSString, UIImage;
@protocol IESMMEffectGroupProtocol;

@interface VEBenchmarkManager : IESMMObject
{
    NSString *_detectImagepath;
    UIImage *_detectImage;
    NSData *_bitmapImage;
    NSData *_bitmapImageRGB;
    NSData *_bitmapImageGray;
    void *_renderMangerHandle;
    HTSGLFilterGroup<IESMMEffectGroupProtocol> *_effectGroup;
}

+ (id)sharedInstance;
@property(retain, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectGroup; // @synthesize effectGroup=_effectGroup;
@property(nonatomic) void *renderMangerHandle; // @synthesize renderMangerHandle=_renderMangerHandle;
@property(retain, nonatomic) NSData *bitmapImageGray; // @synthesize bitmapImageGray=_bitmapImageGray;
@property(retain, nonatomic) NSData *bitmapImageRGB; // @synthesize bitmapImageRGB=_bitmapImageRGB;
@property(retain, nonatomic) NSData *bitmapImage; // @synthesize bitmapImage=_bitmapImage;
@property(retain, nonatomic) UIImage *detectImage; // @synthesize detectImage=_detectImage;
@property(retain, nonatomic) NSString *detectImagepath; // @synthesize detectImagepath=_detectImagepath;
- (void).cxx_destruct;
- (id)getGLVendorString;
- (id)getGLVersionString;
- (id)getGLRenderString;
- (long long)destroy;
- (long long)checkImageData:(id)arg1;
- (long long)embossProcessGpu;
- (long long)embossProcessWithTimes:(unsigned long long)arg1;
- (long long)faceBeauty;
- (long long)faceBeautyWithTimes:(unsigned long long)arg1;
- (long long)memoryCopy;
- (long long)memoryCopyWithTimes:(unsigned long long)arg1;
- (long long)histogramEqualization;
- (long long)histogramEqualizationWithTimes:(unsigned long long)arg1;
- (long long)gaussianBlurCPU;
- (long long)gaussianBlurCPUWithTimes:(unsigned long long)arg1;
- (long long)faceDetection;
- (long long)faceDetectionWithTimes:(unsigned long long)arg1;
- (long long)decodePNGImage;
- (long long)decodePNGImageWithTimes:(unsigned long long)arg1;
- (void)initResoruce;
- (long long)setImage:(id)arg1;
- (long long)setDetectImageUrl:(id)arg1;
- (id)init;

@end
