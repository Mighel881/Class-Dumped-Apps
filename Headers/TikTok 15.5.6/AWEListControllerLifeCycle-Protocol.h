//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AWEListControllerLifeCycle <NSObject>

@optional
- (void)viewControllerDidReceiveMemoryWarning;
- (void)viewControllerDidDisappear:(_Bool)arg1;
- (void)viewControllerWillDisappear:(_Bool)arg1 isBeingDismissed:(_Bool)arg2 isMovingFromParentViewController:(_Bool)arg3;
- (void)viewControllerDidAppear:(_Bool)arg1;
- (void)viewControllerWillAppear:(_Bool)arg1 isBeingPresented:(_Bool)arg2 isMovingToParentViewController:(_Bool)arg3;
@end
