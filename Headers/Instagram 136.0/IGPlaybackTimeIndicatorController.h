//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedVideoTimeIndicatorView;

@interface IGPlaybackTimeIndicatorController : NSObject
{
    _Bool _disabled;
    _Bool _playerDidStartPlayback;
    _Bool _didStartHiding;
    _Bool _didShowIndicator;
    IGFeedVideoTimeIndicatorView *_indicatorView;
    double _playbackStartTime;
    double _lastRemainingTime;
}

@property(nonatomic) double lastRemainingTime; // @synthesize lastRemainingTime=_lastRemainingTime;
@property(nonatomic) double playbackStartTime; // @synthesize playbackStartTime=_playbackStartTime;
@property(nonatomic) _Bool didShowIndicator; // @synthesize didShowIndicator=_didShowIndicator;
@property(readonly, nonatomic) __weak IGFeedVideoTimeIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) _Bool didStartHiding; // @synthesize didStartHiding=_didStartHiding;
@property(nonatomic) _Bool playerDidStartPlayback; // @synthesize playerDidStartPlayback=_playerDidStartPlayback;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (_Bool)shouldUpdateLabelWithRemainingTime:(double)arg1;
- (void)updateProgress:(double)arg1 videoPlaybackController:(id)arg2;
- (void)trySetupIndicatorForVideoPlaybackController:(id)arg1;
- (void)reset;
- (void)layoutViewsInRect:(struct CGRect)arg1;
- (id)initWithIndicatorView:(id)arg1;

@end

