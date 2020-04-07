//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLivePortalBuy, HTSLivePortalFinish, HTSLivePortalInvite;

@interface HTSLivePortalMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasPortalBuy; // @dynamic hasPortalBuy;
@property(nonatomic) _Bool hasPortalFinish; // @dynamic hasPortalFinish;
@property(nonatomic) _Bool hasPortalInvite; // @dynamic hasPortalInvite;
@property(retain, nonatomic) HTSLivePortalBuy *portalBuy; // @dynamic portalBuy;
@property(retain, nonatomic) HTSLivePortalFinish *portalFinish; // @dynamic portalFinish;
@property(nonatomic) long long portalId; // @dynamic portalId;
@property(retain, nonatomic) HTSLivePortalInvite *portalInvite; // @dynamic portalInvite;
@property(nonatomic) long long roomId; // @dynamic roomId;
@property(nonatomic) long long type; // @dynamic type;

@end
