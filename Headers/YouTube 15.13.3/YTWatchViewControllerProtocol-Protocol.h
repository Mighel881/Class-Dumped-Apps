//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, YTWatchTransition;

@protocol YTWatchViewControllerProtocol <NSObject>
@property(retain, nonatomic) YTWatchTransition *watchTransition;
- (_Bool)isPlaybackBackgroundable;
- (_Bool)isWatchFullScreen;
- (_Bool)isWatchExpanded;
- (_Bool)isWatchHidden;
- (_Bool)isCollapsed;
- (UIViewController *)focusedViewController;
- (_Bool)shouldReloadVideoForWatchTransition:(YTWatchTransition *)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
- (void)reload;
- (void)prepareForWatchTransition:(YTWatchTransition *)arg1;
- (void)clearNavEndpoint;
@end
