//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1DockingControllerInteractionHandler;

@protocol T1DockingControllerInteractionHandlerDelegate <NSObject>
- (void)dockingControllerInteractionHandlerDidTap:(T1DockingControllerInteractionHandler *)arg1;
- (void)dockingControllerInteractionHandler:(T1DockingControllerInteractionHandler *)arg1 didPanAtPoint:(struct CGPoint)arg2;
- (void)dockingControllerInteractionHandlerDidBecomeInactive:(T1DockingControllerInteractionHandler *)arg1 atCorner:(long long)arg2;
- (void)dockingControllerInteractionHandlerDidBecomeActive:(T1DockingControllerInteractionHandler *)arg1;
@end
