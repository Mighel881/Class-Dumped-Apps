//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol IESLivePOIProtocol <NSObject>
- (UIViewController *)createLiveLocationManagerViewControllerWithScene:(unsigned long long)arg1 viewControllerWillHideBlock:(void (^)(void))arg2 poiIDDidChangeBlock:(void (^)(NSString *))arg3 roomID:(NSString *)arg4 anchorID:(NSString *)arg5 poiID:(NSString *)arg6 fetchRoomRelatedPOI:(_Bool)arg7 liveEnterFrom:(NSString *)arg8;
@end
