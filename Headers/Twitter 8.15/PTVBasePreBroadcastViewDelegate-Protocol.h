//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSString, PTVBasePreBroadcastView, UITextView;

@protocol PTVBasePreBroadcastViewDelegate <NSObject>
- (void)preBroadcastViewDidPressShareTwitterButton:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidPressChatTypeButton:(PTVBasePreBroadcastView *)arg1 withChatType:(unsigned long long)arg2;
- (void)preBroadcastView:(PTVBasePreBroadcastView *)arg1 didStartBroadcastWithText:(NSString *)arg2 sharingLocation:(_Bool)arg3;

@optional
- (void)preBroadcastViewDidPressAudioScope:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidPressAcceptGuestBroadcasting:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidChangeSelectionOfBroadcastTitleTextView:(UITextView *)arg1;
- (void)preBroadcastViewDidEditBroadcastTitle;
- (void)preBroadcastViewDidPressExitButton:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidPressAudienceSelector:(PTVBasePreBroadcastView *)arg1;
- (_Bool)preBroadcastView:(PTVBasePreBroadcastView *)arg1 didChangeLocationServicesTo:(_Bool)arg2;
- (void)preBroadcastViewDidPressAcceptGifts:(PTVBasePreBroadcastView *)arg1;
@end
