//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol YTAdVideoPlayerOverlayProtocol, YTResponder, YTVideoPlayerOverlayProtocol;

@protocol YTPlayerOverlayFactory <NSObject>
- (UIViewController<YTAdVideoPlayerOverlayProtocol> *)adVideoPlayerOverlayWithParentResponder:(id <YTResponder>)arg1;
- (UIViewController<YTVideoPlayerOverlayProtocol> *)contentVideoPlayerOverlayWithParentResponder:(id <YTResponder>)arg1;

@optional
- (UIViewController<YTVideoPlayerOverlayProtocol> *)VRContentVideoPlayerOverlayWithParentResponder:(id <YTResponder>)arg1;
@end

