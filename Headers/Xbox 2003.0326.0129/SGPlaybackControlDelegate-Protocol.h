//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGProgressBarControlDelegate-Protocol.h"

@class SGPlaybackControl;

@protocol SGPlaybackControlDelegate <SGProgressBarControlDelegate>
- (void)playbackControlDidLongPressRewindButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidLongFastForwardButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidLongPressPrevButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidLongPressNextButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidRewindButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidFastForwardButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidPressPrevButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidPressNextButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidPressPauseButton:(SGPlaybackControl *)arg1;
- (void)playbackControlDidPressPlayButton:(SGPlaybackControl *)arg1;
@end

