//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEPOIOwnerModel : AWEBaseApiModel
{
    NSString *_ownerID;
    NSString *_ownerName;
    NSString *_ownerSignature;
    NSString *_ownerAvatarURL;
    NSString *_businessDay;
    NSString *_businessHour;
    NSString *_claimURLString;
    NSString *_verifyReson;
    NSString *_securedOwnerID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *securedOwnerID; // @synthesize securedOwnerID=_securedOwnerID;
@property(copy, nonatomic) NSString *verifyReson; // @synthesize verifyReson=_verifyReson;
@property(copy, nonatomic) NSString *claimURLString; // @synthesize claimURLString=_claimURLString;
@property(copy, nonatomic) NSString *businessHour; // @synthesize businessHour=_businessHour;
@property(copy, nonatomic) NSString *businessDay; // @synthesize businessDay=_businessDay;
@property(copy, nonatomic) NSString *ownerAvatarURL; // @synthesize ownerAvatarURL=_ownerAvatarURL;
@property(copy, nonatomic) NSString *ownerSignature; // @synthesize ownerSignature=_ownerSignature;
@property(copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(copy, nonatomic) NSString *ownerID; // @synthesize ownerID=_ownerID;
- (void).cxx_destruct;

@end
