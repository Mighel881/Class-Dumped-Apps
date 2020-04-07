//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGBridgeSubscription.h>

@interface TGBridgeMediaThumbnailSubscription : TGBridgeSubscription
{
    _Bool _notification;
    int _messageId;
    long long _peerId;
    struct CGSize _size;
}

+ (id)subscriptionName;
@property(readonly, nonatomic) _Bool notification; // @synthesize notification=_notification;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) int messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (void)_unserializeParametersWithCoder:(id)arg1;
- (void)_serializeParametersWithCoder:(id)arg1;
- (_Bool)renewable;
- (id)initWithPeerId:(long long)arg1 messageId:(int)arg2 size:(struct CGSize)arg3 notification:(_Bool)arg4;

@end
