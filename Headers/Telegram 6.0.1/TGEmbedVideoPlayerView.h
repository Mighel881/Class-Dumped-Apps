//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGEmbedPlayerView.h>

@class AVPlayer, NSString, TGModernGalleryVideoView, UIImageView;

@interface TGEmbedVideoPlayerView : TGEmbedPlayerView
{
    NSString *_url;
    _Bool _started;
    AVPlayer *_player;
    TGModernGalleryVideoView *_videoView;
    UIImageView *_watermarkView;
    long long _playbackTicks;
    _Bool _playingStarted;
}

+ (_Bool)_supportsWebPage:(id)arg1;
- (void).cxx_destruct;
- (id)_webView;
- (void)_setupCustomPlayerWithURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didBeginPlayback;
- (void)_onPageReady;
- (int)_controlsType;
- (void)setupWithEmbedSize:(struct CGSize)arg1;
- (void)seekToPosition:(double)arg1;
- (void)pauseVideo:(_Bool)arg1;
- (void)playVideo;
- (void)dealloc;
- (id)initWithWebPageAttachment:(id)arg1 thumbnailSignal:(id)arg2 alternateCachePathSignal:(id)arg3;

@end
