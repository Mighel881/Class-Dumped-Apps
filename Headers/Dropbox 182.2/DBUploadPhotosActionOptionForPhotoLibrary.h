//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBUploadPhotosActionOptions.h"

@class NSArray, NSCache, NSObject, NSSet;
@protocol DBDbxGetPhotoDataRequestHandle, OS_dispatch_queue;

@interface DBUploadPhotosActionOptionForPhotoLibrary : DBUploadPhotosActionOptions
{
    id <DBDbxGetPhotoDataRequestHandle> _photoDataRequestHandle;
    NSSet *_transcodableAssetLocalIds;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSCache *_photoAssets;
    NSArray *_photoAssetLocalIdentifiers;
}

- (id)photoAssetLocalIdentifiers;
- (id)photoAssets;
- (void).cxx_destruct;
- (_Bool)shouldUseSinglePhotoView;
- (_Bool)shouldTranscodeAssetToJpegForAsset:(id)arg1;
- (_Bool)shouldTranscodeAssetToJpegForAssetLocalIdentifier:(id)arg1;
- (void)setFileBaseName:(id)arg1;
- (id)fileBaseName;
- (id)fileExtension;
- (id)fileName;
- (_Bool)hasTranscodableImages;
- (_Bool)transcodingImageToJpegAllowed;
- (_Bool)updatePhotoAssetLocalIdentifiersWithSubset:(id)arg1;
- (void)updatePhotoAssetLocalIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithForcedDestination:(id)arg1 modalPresenter:(id)arg2;

@end
