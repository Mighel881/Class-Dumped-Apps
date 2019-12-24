//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TTPushMessageReceiver;

@interface TTPushMessageDispatcher : NSObject
{
    _Bool _isTheFirstMessage;
    _Bool _isBroadcasting;
    unsigned long long _lastMsgSequenceId;
    TTPushMessageReceiver *_msgReceiver;
}

+ (void)assignMessageBaseProperties_:(id)arg1 frame:(const struct Frame *)arg2;
+ (id)serializeObject:(id)arg1;
@property _Bool isBroadcasting; // @synthesize isBroadcasting=_isBroadcasting;
@property(retain, nonatomic) TTPushMessageReceiver *msgReceiver; // @synthesize msgReceiver=_msgReceiver;
@property unsigned long long lastMsgSequenceId; // @synthesize lastMsgSequenceId=_lastMsgSequenceId;
@property _Bool isTheFirstMessage; // @synthesize isTheFirstMessage=_isTheFirstMessage;
- (void).cxx_destruct;
- (void)broadcastReceivingMessage_:(const struct Frame *)arg1;
- (void)handleUnknownMessage_:(const struct Frame *)arg1;
- (void)setBroadcastingMessage:(_Bool)arg1;
- (void)setCustomizedMessageReceiver:(id)arg1;
- (void)dispatchMessage:(shared_ptr_51069d86)arg1;
- (id)init;

@end
