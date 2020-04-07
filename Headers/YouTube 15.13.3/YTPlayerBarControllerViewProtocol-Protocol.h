//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, YTDAIAdView, YTDoubleTapSeekChapterInfo, YTQTMButton, YTStoryboardFrame;
@protocol YTInlinePlayerBarContainerViewDelegate;

@protocol YTPlayerBarControllerViewProtocol <NSObject>
- (_Bool)isScrubberPeeking;

@optional
@property(nonatomic) _Bool shouldDisplayTimeRemaining;
@property(readonly, nonatomic) YTQTMButton *enterFullscreenButton;
@property(nonatomic) _Bool isCurrentVideoVertical;
@property(nonatomic, getter=isFlexyWatchEnabled) _Bool flexyWatchEnabled;
@property(nonatomic) _Bool fullscreenButtonDisabled;
@property(nonatomic) _Bool showOnlyFullscreenButton;
@property(nonatomic) _Bool useFullscreenVerticalButton;
@property(nonatomic) _Bool scrubbingGesturesEnabled;
@property(retain, nonatomic) YTDAIAdView *DAIAdView;
@property(nonatomic) int mode;
@property(nonatomic) int layout;
@property(nonatomic) __weak id <YTInlinePlayerBarContainerViewDelegate> delegate;
- (void)removeDidScrubTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidStartScrubTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidScrubTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidStartScrubTarget:(id)arg1 action:(SEL)arg2;
- (YTDoubleTapSeekChapterInfo *)doubleTapChapterInfoForTime:(double)arg1 interval:(double)arg2;
- (void)removeClipMarkers;
- (void)setClipMarkersWithStartTime:(double)arg1 endTime:(double)arg2;
- (void)setStoryboardFrame:(YTStoryboardFrame *)arg1;
- (void)setStoryboardEnabled:(_Bool)arg1;
- (void)setCardboardButtonEnabled:(_Bool)arg1;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)didScrubToPoint:(struct CGPoint)arg1 withTime:(double)arg2;
- (void)didEndScrubbing;
- (void)didStartScrubbing;
- (double)scrubRangeForScrubX:(double)arg1;
- (void)setChapters:(NSArray *)arg1;
- (void)setMarkers:(NSArray *)arg1;
- (void)setPlayerBarAlpha:(double)arg1;
- (void)hidePlayerBarButton;
- (void)showPlayerBarNextButton:(_Bool)arg1;
- (void)showPlayerBarButtonWithType:(long long)arg1;
- (void)peekWithShowScrubber:(_Bool)arg1;
- (void)hideScrubber;
- (void)setLiveIndicatorText:(NSString *)arg1;
@end
