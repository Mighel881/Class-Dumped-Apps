//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMediaDownloadBaseStage.h"

@interface AWEMediaDownloadSaveStage : AWEMediaDownloadBaseStage
{
}

- (void)handleProgress:(double)arg1;
- (void)saveLivePhotoToAlbum:(id)arg1 imageURL:(id)arg2;
- (void)saveGIFToAlbum;
- (void)saveImageToAlbum;
- (void)saveVideoToAlbum;
- (void)run;

@end
