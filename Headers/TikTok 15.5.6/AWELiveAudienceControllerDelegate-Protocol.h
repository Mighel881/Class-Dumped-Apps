//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol AWELiveAudienceControllerDelegate <NSObject>
- (UIViewController *)responderViewController;
- (void)roomShouldSrollEnable:(_Bool)arg1;
- (void)roomUpdateWithAudienceViewController:(UIViewController *)arg1;
- (void)roomClosedWithFinishedViewController:(UIViewController *)arg1;
@end

