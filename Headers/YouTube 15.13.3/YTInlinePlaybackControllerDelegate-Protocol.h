//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIView, UIViewController, YTCommandResponderEvent;
@protocol YTCompanionAdSupportedRenderersProtocol;

@protocol YTInlinePlaybackControllerDelegate <NSObject>
- (void)handleNavigationEndpointResponderEvent:(YTCommandResponderEvent *)arg1;
- (void)playbackControllerStateDidChange;
- (_Bool)isFullScreen;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)hideWatch;
- (void)loadCompanionAd:(id <YTCompanionAdSupportedRenderersProtocol>)arg1;
- (void)didClearPlayerViewControllerWithSnapshotView:(UIView *)arg1;
- (void)didSetPlayerViewController:(UIViewController *)arg1;
@end
