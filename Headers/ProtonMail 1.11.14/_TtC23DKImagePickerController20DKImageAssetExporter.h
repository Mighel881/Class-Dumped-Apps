//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DKImagePickerController/_TtC23DKImagePickerController18DKImageBaseManager.h>

@interface _TtC23DKImagePickerController20DKImageAssetExporter : _TtC23DKImagePickerController18DKImageBaseManager
{
    // Error parsing type: , name: configuration
    // Error parsing type: , name: exportQueue
    // Error parsing type: , name: semaphore
    // Error parsing type: , name: operations
    // Error parsing type: , name: currentAVExportSession
    // Error parsing type: , name: currentAssetInRequesting
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)cancelAll;
- (void)cancelWithRequestID:(int)arg1;
- (int)exportAssetsAsynchronouslyWithAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
