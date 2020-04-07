//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWELiveTrackEventProtocol-Protocol.h"

@class NSString;

@interface AWELiveTrackEventManager : NSObject <AWELiveTrackEventProtocol>
{
}

+ (id)sharedLiveTracker;
- (void)trackLiveShow:(id)arg1 enterFrom:(id)arg2 videoId:(id)arg3;
- (void)trackLiveShow:(id)arg1 anchorId:(id)arg2 roomId:(id)arg3 requestId:(id)arg4 enterFrom:(id)arg5 enterMethod:(id)arg6 extraParams:(id)arg7;
- (void)trackLiveShow:(id)arg1 anchorId:(id)arg2 roomId:(id)arg3 groupId:(id)arg4 requestId:(id)arg5 enterFrom:(id)arg6 enterMethod:(id)arg7 order:(id)arg8 roomType:(id)arg9;
- (void)trackLiveShow:(id)arg1 anchorId:(id)arg2 roomId:(id)arg3 groupId:(id)arg4 requestId:(id)arg5 enterFrom:(id)arg6 order:(id)arg7 roomType:(id)arg8;
- (void)trackLiveShow:(id)arg1 anchorId:(id)arg2 roomId:(id)arg3 requestId:(id)arg4 enterFrom:(id)arg5 order:(id)arg6 roomType:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
