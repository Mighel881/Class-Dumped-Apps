//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, TWMessageView, _TtC6Twitch13MessageString;

@protocol TWMessageViewInteractionDelegate <NSObject>
- (void)messageViewReceivedLongPress:(TWMessageView *)arg1;
- (void)messageViewReceivedNonActionableTap:(TWMessageView *)arg1;
- (void)messageView:(TWMessageView *)arg1 tappedEmoteWithID:(NSString *)arg2;
- (void)messageView:(TWMessageView *)arg1 tappedUrl:(NSURL *)arg2 atPoint:(struct CGPoint)arg3 inMessageString:(_TtC6Twitch13MessageString *)arg4;
@end

