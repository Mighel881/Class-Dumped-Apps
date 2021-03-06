//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol XBXIUserBroadcastPresence, XBXIUserTitlePresence;

@protocol XBXIUserPresence <NSObject>
- (_Bool)isBroadcasting;
- (id <XBXIUserTitlePresence>)lastSeen;
- (id <XBXIUserBroadcastPresence>)broadcastProvider:(int)arg1;
- (id <XBXIUserBroadcastPresence>)broadcastStatus:(NSString *)arg1 onDevice:(int)arg2;
- (id <XBXIUserTitlePresence>)titlePresenceForPlacement:(int)arg1 onDevice:(int)arg2;
- (int)onlineStatus;
@end

