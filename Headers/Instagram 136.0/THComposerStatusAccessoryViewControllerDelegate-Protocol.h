//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class THComposerStatusAccessoryState, THComposerStatusAccessoryViewController, UIResponder;

@protocol THComposerStatusAccessoryViewControllerDelegate <NSObject>
- (void)composerStatusAccessoryViewDidReceiveSingleTap:(THComposerStatusAccessoryViewController *)arg1;
- (void)composerStatusAccessoryViewDidReceiveDoubleTap:(THComposerStatusAccessoryViewController *)arg1;
- (void)composerStatusAccessoryViewController:(THComposerStatusAccessoryViewController *)arg1 didUpdateToState:(THComposerStatusAccessoryState *)arg2;
- (UIResponder *)composer;
@end

