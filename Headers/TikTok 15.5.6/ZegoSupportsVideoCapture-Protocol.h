//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIView;

@protocol ZegoSupportsVideoCapture

@optional
- (int)zego_setPowerlineFreq:(unsigned int)arg1;
- (int)zego_takeSnapshot;
- (int)zego_enableTorch:(_Bool)arg1;
- (int)zego_stopPreview;
- (int)zego_startPreview;
- (int)zego_setCaptureRotation:(int)arg1;
- (int)zego_setViewRotation:(int)arg1;
- (int)zego_setViewMode:(int)arg1;
- (int)zego_setView:(UIView *)arg1;
- (int)zego_setFrontCam:(int)arg1;
- (int)zego_setWidth:(int)arg1 andHeight:(int)arg2;
- (int)zego_setFrameRate:(int)arg1;
@end
