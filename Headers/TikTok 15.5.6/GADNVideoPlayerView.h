//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADNVideoPlayerViewLoading-Protocol.h"

@class AVPlayerLayer, GADNObserverCollection, GADNVideoPlayer, NSString;

@interface GADNVideoPlayerView : UIView <GADNVideoPlayerViewLoading>
{
    GADNVideoPlayer *_player;
    AVPlayerLayer *_playerLayer;
    GADNObserverCollection *_observers;
}

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)resetPlayerLayerWithError:(id *)arg1;
- (void)setUpWithPlayer:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
