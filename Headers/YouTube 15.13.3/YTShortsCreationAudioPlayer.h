//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEditCompositionAssetObserver-Protocol.h"
#import "YTShortsCreationPlayer-Protocol.h"

@class AVAudioPlayer, NSString, NSURL;
@protocol YTEditCompositionAsset;

@interface YTShortsCreationAudioPlayer : NSObject <YTEditCompositionAssetObserver, YTShortsCreationPlayer>
{
    AVAudioPlayer *_player;
    id <YTEditCompositionAsset> _compositionAsset;
    _Bool _isPlaying;
    NSURL *_assetURL;
    CDStruct_1b6d18a9 _trackOffset;
}

@property(nonatomic) CDStruct_1b6d18a9 trackOffset; // @synthesize trackOffset=_trackOffset;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (void)cameraCompositionDidUpdate:(id)arg1;
@property(nonatomic) float playbackRate;
@property(nonatomic, getter=isLooping) _Bool looping;
- (void)invalidate;
- (void)restart;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)play;
- (void)compositionAssetUpdateFailed:(id)arg1 withError:(id)arg2;
- (void)compositionAssetDidUpdate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startObservingAsset:(id)arg1;
- (void)dealloc;
- (id)initWithAssetURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
