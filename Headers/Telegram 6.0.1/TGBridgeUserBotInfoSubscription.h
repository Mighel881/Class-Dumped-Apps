//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGBridgeSubscription.h>

@class NSArray;

@interface TGBridgeUserBotInfoSubscription : TGBridgeSubscription
{
    NSArray *_userIds;
}

+ (id)subscriptionName;
@property(readonly, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;
- (void).cxx_destruct;
- (void)_unserializeParametersWithCoder:(id)arg1;
- (void)_serializeParametersWithCoder:(id)arg1;
- (_Bool)dropPreviouslyQueued;
- (id)initWithUserIds:(id)arg1;

@end
