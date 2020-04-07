//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MtUserCertInfoStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int appId; // @dynamic appId;
@property(nonatomic) int certCategory; // @dynamic certCategory;
@property(copy, nonatomic) NSString *certName; // @dynamic certName;
@property(nonatomic) int certType; // @dynamic certType;
@property(nonatomic) int channel; // @dynamic channel;
@property(nonatomic) long long createdAt; // @dynamic createdAt;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasCertCategory; // @dynamic hasCertCategory;
@property(nonatomic) _Bool hasCertName; // @dynamic hasCertName;
@property(nonatomic) _Bool hasCertType; // @dynamic hasCertType;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasCreatedAt; // @dynamic hasCreatedAt;
@property(nonatomic) _Bool hasLastMaterialId; // @dynamic hasLastMaterialId;
@property(nonatomic) _Bool hasSecUid; // @dynamic hasSecUid;
@property(nonatomic) _Bool hasUpdatedAt; // @dynamic hasUpdatedAt;
@property(nonatomic) long long lastMaterialId; // @dynamic lastMaterialId;
@property(copy, nonatomic) NSString *secUid; // @dynamic secUid;
@property(nonatomic) long long updatedAt; // @dynamic updatedAt;

@end
