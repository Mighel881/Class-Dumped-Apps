//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class PSPDFMediaPlayer;

@protocol PSPDFMediaPlayerDelegate <NSObject>
- (void)playerDidPreroll:(PSPDFMediaPlayer *)arg1;
- (void)player:(PSPDFMediaPlayer *)arg1 timeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)player:(PSPDFMediaPlayer *)arg1 statusDidChange:(long long)arg2;
- (void)player:(PSPDFMediaPlayer *)arg1 externalPlaybackActiveDidChange:(_Bool)arg2;
- (void)player:(PSPDFMediaPlayer *)arg1 rateDidChange:(double)arg2;
- (void)player:(PSPDFMediaPlayer *)arg1 didSeekToTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)playerShouldPauseOtherInstances:(PSPDFMediaPlayer *)arg1;
@end
