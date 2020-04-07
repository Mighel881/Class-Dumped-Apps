//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/TGMediaEditableItem-Protocol.h>
#import <TelegramUI/TGMediaSelectableItem-Protocol.h>

@class AVURLAsset, NSString;

@interface TGCameraCapturedVideo : NSObject <TGMediaEditableItem, TGMediaSelectableItem>
{
    struct CGSize _cachedSize;
    double _cachedDuration;
    AVURLAsset *_avAsset;
}

@property(readonly, nonatomic) AVURLAsset *avAsset; // @synthesize avAsset=_avAsset;
- (void).cxx_destruct;
- (id)originalImageSignal:(double)arg1;
- (id)screenImageSignal:(double)arg1;
- (id)thumbnailImageSignal;
@property(readonly, nonatomic) double originalDuration;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) struct CGSize originalSize;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool isVideo;
- (void)_cleanUp;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
