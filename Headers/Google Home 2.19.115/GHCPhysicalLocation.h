//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCAddressVerificationStatus, GHCGeoCoordinate, NSString, PostalAddress;

@interface GHCPhysicalLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PostalAddress *address; // @dynamic address;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(retain, nonatomic) GHCGeoCoordinate *geoCoordinate; // @dynamic geoCoordinate;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasGeoCoordinate; // @dynamic hasGeoCoordinate;
@property(nonatomic) _Bool hasVerificationStatus; // @dynamic hasVerificationStatus;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) GHCAddressVerificationStatus *verificationStatus; // @dynamic verificationStatus;
@property(nonatomic) long long versionTimestamp; // @dynamic versionTimestamp;

@end

