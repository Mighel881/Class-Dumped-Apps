//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGActionableConfirmationProgressToastHandler;

@protocol IGActionableConfirmationProgressToastHandlerDelegate <NSObject>
- (void)actionableConfirmationProgressToastHandlerDidSucceed:(IGActionableConfirmationProgressToastHandler *)arg1;
- (void)actionableConfirmationProgressToastHandlerDidFail:(IGActionableConfirmationProgressToastHandler *)arg1 retryHandler:(void (^)(void))arg2;
- (void)actionableConfirmationProgressToastHandler:(IGActionableConfirmationProgressToastHandler *)arg1 didUpdateProgress:(double)arg2;
@end

