//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCDuoEndpointData, HMEContentAnalyticsEvent, NSString, UIViewController;
@protocol UINavigationControllerDelegate;

@protocol HMEDuoCoreCoordinator <NSObject>
@property(readonly, nonatomic) UIViewController<UINavigationControllerDelegate> *navigationController;
- (void)showDropInBottomSheetInViewController:(UIViewController *)arg1 endpointData:(GHCDuoEndpointData *)arg2 deviceName:(NSString *)arg3 analyticsEvent:(HMEContentAnalyticsEvent *)arg4 withCompletion:(void (^)(NSError *))arg5;
@end

