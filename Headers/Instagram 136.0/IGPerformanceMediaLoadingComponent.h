//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGPhotosRenderedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoPlaybackStateListener-Protocol.h>

@class IGPerformanceComponent, NSString;
@protocol IGPhotosRenderedListenerAnnouncer, IGVideoPlaybackStateListenerAnnouncer;

@interface IGPerformanceMediaLoadingComponent : NSObject <IGPhotosRenderedListener, IGVideoPlaybackStateListener>
{
    IGPerformanceComponent *_pendingComponent;
    IGPerformanceComponent *_photoComponent;
    IGPerformanceComponent *_videoComponent;
    id <IGPhotosRenderedListenerAnnouncer> _photoRenderAnnouncer;
    id <IGVideoPlaybackStateListenerAnnouncer> _videoStateAnnouncer;
    NSString *_mediaId;
    long long _mediaType;
    _Bool _isMediaThumbnail;
}

- (void).cxx_destruct;
- (void)videoWithMediaId:(id)arg1 transitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)photoDidEnterScreenWithItem:(id)arg1 module:(id)arg2 isMediaThumbnail:(_Bool)arg3 isCarousel:(_Bool)arg4 isAds:(_Bool)arg5;
- (void)photoDidRenderPreviewWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 progressiveJPEGScanNumber:(id)arg3;
- (void)photoDidExitScreenWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2;
- (void)photoDidFailToRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 error:(id)arg3 networkRequestSummary:(id)arg4;
- (void)photoDidRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)photoWillRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 igImageURL:(id)arg3;
- (_Bool)_isValidMediaId:(id)arg1 mediaType:(long long)arg2 isMediaThumbnail:(_Bool)arg3;
- (void)_endTracking;
- (void)trackFeedItemOnce:(id)arg1 isMediaThumbnail:(_Bool)arg2;
- (void)trackMediaIdOnce:(id)arg1 mediaType:(long long)arg2 isMediaThumbnail:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 pendingComponent:(id)arg2 photoComponent:(id)arg3 videoComponent:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

