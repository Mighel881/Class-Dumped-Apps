//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL, YTShortsCameraController;

@protocol YTShortsCameraControllerRecordingObserver <NSObject>

@optional
- (void)cameraController:(YTShortsCameraController *)arg1 recordingDidEnd:(struct GPCPromise *)arg2 error:(NSError *)arg3;
- (void)cameraController:(YTShortsCameraController *)arg1 recordingDidUpdate:(CDStruct_1b6d18a9)arg2;
- (void)cameraController:(YTShortsCameraController *)arg1 recordingDidBegin:(NSURL *)arg2 error:(NSError *)arg3;
@end

