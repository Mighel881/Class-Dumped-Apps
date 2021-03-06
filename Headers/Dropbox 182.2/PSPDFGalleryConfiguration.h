//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFBaseConfiguration.h>

@interface PSPDFGalleryConfiguration : PSPDFBaseConfiguration
{
    _Bool _displayModeUserInteractionEnabled;
    _Bool _fullscreenZoomEnabled;
    _Bool _loopEnabled;
    _Bool _loopHUDEnabled;
    _Bool _usesExternalPlaybackWhileExternalScreenIsActive;
    _Bool _allowPlayingMultipleInstances;
    unsigned long long _maximumConcurrentDownloads;
    unsigned long long _maximumPrefetchDownloads;
    double _fullscreenDismissPanThreshold;
    double _maximumFullscreenZoomScale;
    double _minimumFullscreenZoomScale;
}

@property(readonly, nonatomic) _Bool allowPlayingMultipleInstances; // @synthesize allowPlayingMultipleInstances=_allowPlayingMultipleInstances;
@property(readonly, nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(readonly, nonatomic, getter=isLoopHUDEnabled) _Bool loopHUDEnabled; // @synthesize loopHUDEnabled=_loopHUDEnabled;
@property(readonly, nonatomic, getter=isLoopEnabled) _Bool loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(readonly, nonatomic) double minimumFullscreenZoomScale; // @synthesize minimumFullscreenZoomScale=_minimumFullscreenZoomScale;
@property(readonly, nonatomic) double maximumFullscreenZoomScale; // @synthesize maximumFullscreenZoomScale=_maximumFullscreenZoomScale;
@property(readonly, nonatomic, getter=isFullscreenZoomEnabled) _Bool fullscreenZoomEnabled; // @synthesize fullscreenZoomEnabled=_fullscreenZoomEnabled;
@property(readonly, nonatomic) double fullscreenDismissPanThreshold; // @synthesize fullscreenDismissPanThreshold=_fullscreenDismissPanThreshold;
@property(readonly, nonatomic) _Bool displayModeUserInteractionEnabled; // @synthesize displayModeUserInteractionEnabled=_displayModeUserInteractionEnabled;
@property(readonly, nonatomic) unsigned long long maximumPrefetchDownloads; // @synthesize maximumPrefetchDownloads=_maximumPrefetchDownloads;
@property(readonly, nonatomic) unsigned long long maximumConcurrentDownloads; // @synthesize maximumConcurrentDownloads=_maximumConcurrentDownloads;

@end

