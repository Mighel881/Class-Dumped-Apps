//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZegoError : NSObject
{
}

+ (id)getErrorMsg:(int)arg1;
+ (_Bool)isRoomSessionError:(int)arg1;
+ (_Bool)isManualKickoutError:(int)arg1;
+ (_Bool)isMultiLoginError:(int)arg1;
+ (_Bool)isLiveRoomError:(int)arg1;
+ (_Bool)isReqFrequencyLimitError:(int)arg1;
+ (_Bool)isHttpProtocolError:(int)arg1;
+ (_Bool)isNetworkUnreachError:(int)arg1;
+ (_Bool)isDNSResolveError:(int)arg1;
+ (_Bool)isPlayDeniedError:(int)arg1;
+ (_Bool)isPlayForbidError:(int)arg1;
+ (_Bool)isPublishDeniedError:(int)arg1;
+ (_Bool)isPublishStopError:(int)arg1;
+ (_Bool)isPublishForbidError:(int)arg1;
+ (_Bool)isPublishBadNameError:(int)arg1;
+ (_Bool)isPlayStreamNotExistError:(int)arg1;
+ (_Bool)isMixStreamNotExistError:(int)arg1;
+ (_Bool)isLogicServerNetWrokError:(int)arg1;
+ (_Bool)isMediaServerNetWorkError:(int)arg1;
+ (_Bool)isNotLoginError:(int)arg1;
+ (_Bool)isInitSDKError:(int)arg1;

@end
