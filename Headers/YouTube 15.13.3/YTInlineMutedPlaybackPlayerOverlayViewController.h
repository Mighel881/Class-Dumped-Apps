//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTInlineMutedPlaybackGlobalAudioSettingsProvider-Protocol.h"
#import "YTInlineMutedPlaybackOverlayDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTScrubberViewControllerDelegate-Protocol.h"
#import "YTVideoPlayerOverlayProtocol-Protocol.h"
#import "YTVideoPlayerOverlayStoryboardProtocol-Protocol.h"

@class GIMMe, MLNerdStatsPlaybackData, NSString, YTCaptionViewController, YTColdConfig, YTIWatchNextResponse, YTInlineMutedPlaybackPlayerOverlayView, YTInlineMutedPlaybackScrubberViewController, YTPaidContentViewController, YTPlayerOverlayAutoHideController, YTPlayerResponse;
@protocol MLCaptionDisplaySettingsProvider, YTInlineMutedPlaybackOverlayDelegate, YTPlayableEntry, YTResponder, YTSingleVideoObservable, YTVideoPlayerOverlayDelegate;

@interface YTInlineMutedPlaybackPlayerOverlayViewController : UIViewController <YTInlineMutedPlaybackOverlayDelegate, YTInlineMutedPlaybackGlobalAudioSettingsProvider, YTScrubberViewControllerDelegate, YTVideoPlayerOverlayProtocol, YTVideoPlayerOverlayStoryboardProtocol, YTResponder>
{
    YTInlineMutedPlaybackPlayerOverlayView *_playerOverlayView;
    int _playerViewLayout;
    double _expansionCoefficient;
    _Bool _captionsDidNotFail;
    _Bool _captionsAvailable;
    _Bool _isPending;
    YTCaptionViewController *_captionOverlayViewController;
    id <MLCaptionDisplaySettingsProvider> _captionDisplaySettingsProvider;
    id <YTInlineMutedPlaybackOverlayDelegate> _overlayDelegate;
    YTInlineMutedPlaybackScrubberViewController *_scrubberViewController;
    YTPlayerOverlayAutoHideController *_autoHideController;
    id <YTSingleVideoObservable> _singleVideoObservable;
    YTColdConfig *_coldConfig;
    _Bool _playerScrubbingEnabled;
    _Bool _storyboardEnabled;
    _Bool _playlistControlsHidden;
    _Bool _hasPreviousVideo;
    _Bool _hasNextVideo;
    _Bool _userScrubbing;
    _Bool _foregroundAudioOnly;
    _Bool _externalPlaybackActive;
    _Bool _MDXPlaybackActive;
    _Bool _currentVideoVertical;
    id <YTResponder> _parentResponder;
    id <YTVideoPlayerOverlayDelegate> _delegate;
    MLNerdStatsPlaybackData *_nerdStatsPlaybackData;
    GIMMe *_gimme;
    id <YTPlayableEntry> _entry;
    double _totalTime;
    double _mediaTime;
    double _downloadedTime;
    long long _playerState;
    YTPlayerResponse *_playerResponse;
    YTIWatchNextResponse *_watchNextResponse;
    YTPaidContentViewController *_paidContentViewController;
}

@property(retain, nonatomic) YTPaidContentViewController *paidContentViewController; // @synthesize paidContentViewController=_paidContentViewController;
@property(retain, nonatomic) YTIWatchNextResponse *watchNextResponse; // @synthesize watchNextResponse=_watchNextResponse;
@property(retain, nonatomic) YTPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) double downloadedTime; // @synthesize downloadedTime=_downloadedTime;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) id <YTPlayableEntry> entry; // @synthesize entry=_entry;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical; // @synthesize currentVideoVertical=_currentVideoVertical;
@property(retain, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData; // @synthesize nerdStatsPlaybackData=_nerdStatsPlaybackData;
@property(nonatomic) _Bool MDXPlaybackActive; // @synthesize MDXPlaybackActive=_MDXPlaybackActive;
@property(nonatomic) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(nonatomic) _Bool foregroundAudioOnly; // @synthesize foregroundAudioOnly=_foregroundAudioOnly;
@property(nonatomic, getter=isUserScrubbing) _Bool userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property(nonatomic) _Bool hasNextVideo; // @synthesize hasNextVideo=_hasNextVideo;
@property(nonatomic) _Bool hasPreviousVideo; // @synthesize hasPreviousVideo=_hasPreviousVideo;
@property(nonatomic, getter=arePlaylistControlsHidden) _Bool playlistControlsHidden; // @synthesize playlistControlsHidden=_playlistControlsHidden;
@property(nonatomic) __weak id <YTVideoPlayerOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)convertToFormattedString:(double)arg1;
- (void)processCaptionDidNotFailIfNeeded;
- (void)updateOverlayViewToActive;
- (void)updateOverlayViewToPending;
@property(readonly, nonatomic) YTInlineMutedPlaybackPlayerOverlayView *impPlayerOverlayView;
- (void)clearCaptions;
- (void)removePaidContentViewController;
- (void)setPaidContentWithPlayerData:(id)arg1;
- (_Bool)inlinePlaybackUnmutedAtStart;
- (void)overlayDidChangeWithStatusUpdate:(id)arg1;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setAirPlayAllowed:(_Bool)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (void)scrubberViewControllerDidEndScrubbing:(id)arg1;
- (void)scrubberViewController:(id)arg1 didScrubToTime:(double)arg2;
- (void)scrubberViewControllerDidStartScrubbing:(id)arg1;
- (void)scrubberViewControllerDidPressToggleFullscreen:(id)arg1;
- (id)storyboardControllerDelegate;
@property(nonatomic, getter=isStoryboardEnabled) _Bool storyboardEnabled;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
- (void)playerDidFailWithError:(id)arg1;
- (void)playerStateDidChangeToState:(long long)arg1;
- (void)resetAndShowLoading:(_Bool)arg1;
- (void)setPlayerResponse:(id)arg1 CPN:(id)arg2;
- (void)setPlayerHeartbeatController:(id)arg1;
- (void)setActiveSingleVideo:(id)arg1;
- (void)setMarkers:(id)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (void)setCaptionError:(id)arg1;
- (void)setCaptionViewController:(id)arg1;
- (void)setAvailableCaptionTracks:(id)arg1;
- (void)setActiveCaptionTrack:(id)arg1;
- (id)playerOverlayView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
