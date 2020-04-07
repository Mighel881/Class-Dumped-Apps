//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (ImageProcessing)
+ (id)imageFrom32BGRASampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withOrientation:(long long)arg2;
+ (id)imageFrom32BGRASampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (struct CGImage *)newCGImageFromRawData:(char *)arg1 withWidth:(int)arg2 height:(int)arg3 numberOfChannels:(int)arg4 strideInBytes:(unsigned long long)arg5 copy:(_Bool)arg6;
+ (struct CGImage *)newCGImageFromRawData:(char *)arg1 withWidth:(int)arg2 height:(int)arg3 numberOfChannels:(int)arg4 copy:(_Bool)arg5;
+ (struct CGImage *)newCGImagefromCIImage:(id)arg1;
+ (unsigned int)renderableBitmapInfoForCGImage:(struct CGImage *)arg1 forRenderingWithColor:(_Bool)arg2;
- (id)bytesForSavingToPNGwithBitsPerPixel:(unsigned long long)arg1;
- (id)thumbnailFromImageForSize:(double)arg1;
- (struct CGContext *)createBitmapContextWithFixedOrientationAndScaleToMaximumSize:(double)arg1 manuallyManagingBuffer:(_Bool)arg2 withBackgroundColor:(struct CGColor *)arg3 whileDeferringTransformInto:(struct CGAffineTransform *)arg4;
- (struct CGContext *)createBitmapContextWithFixedOrientationAndScaleToMaximumSize:(double)arg1 manuallyManagingBuffer:(_Bool)arg2 whileDeferringTransformInto:(struct CGAffineTransform *)arg3;
- (struct CGContext *)createBitmapContextWithFixedOrientationAndScaleToMaximumSize:(double)arg1 manuallyManagingBuffer:(_Bool)arg2 withColorSpace:(struct CGColorSpace *)arg3 withBitmapInfo:(unsigned int)arg4 withBackgroundColor:(struct CGColor *)arg5 whileDeferringTransformInto:(struct CGAffineTransform *)arg6;
- (id)imageWithFixedOrientationAndScaleToMaximumDisplaySize:(double)arg1;
- (id)imageWithFixedOrientation;
- (unsigned long long)numberOfComponentsPerPixel;
@end
