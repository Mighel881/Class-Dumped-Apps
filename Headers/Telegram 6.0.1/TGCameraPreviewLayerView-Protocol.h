//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureVideoPreviewLayer, AVSampleBufferDisplayLayer, NSString;

@protocol TGCameraPreviewLayerView <NSObject>
@property(readonly, nonatomic) AVCaptureConnection *connection;
@property(retain, nonatomic) NSString *videoGravity;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;

@optional
- (AVCaptureVideoPreviewLayer *)previewLayer;
- (AVSampleBufferDisplayLayer *)displayLayer;
@end
