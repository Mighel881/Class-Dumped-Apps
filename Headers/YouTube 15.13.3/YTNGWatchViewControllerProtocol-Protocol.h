//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTNGWatchCollectionViewControllerEventObserver-Protocol.h"

@class UIView, UIViewController, YTNGWatchView;
@protocol YTNGWatchFlexyUIDelegate, YTWatchPlayerViewControllerDelegate;

@protocol YTNGWatchViewControllerProtocol <YTNGWatchCollectionViewControllerEventObserver>
- (void)setFlexyUIDelegate:(id <YTNGWatchFlexyUIDelegate>)arg1;
- (_Bool)isPlayerAlignmentNonStandard;
- (void)setExpansionFraction:(double)arg1;
- (void)startCountdownIfEndscreenActive;
- (void)autonavCountdownDidStopWithEndscreenCancelled:(_Bool)arg1;
- (YTNGWatchView *)watchView;
- (struct CGRect)frameForPlayerView:(_Bool)arg1;
- (unsigned long long)preferredFullscreenOrientations;
- (double)watchNextViewOriginY;
- (void)setPlayerViewController:(UIViewController<YTWatchPlayerViewControllerDelegate> *)arg1;
- (void)setFullscreen:(_Bool)arg1;
- (void)setThumbnailView:(UIView *)arg1;
@end
