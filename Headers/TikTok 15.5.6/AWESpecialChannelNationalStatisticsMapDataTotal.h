//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@interface AWESpecialChannelNationalStatisticsMapDataTotal : AWEBaseApiModel
{
    long long _confirmedTotal;
    long long _suspectedTotal;
    long long _curesTotal;
    long long _deathsTotal;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long deathsTotal; // @synthesize deathsTotal=_deathsTotal;
@property(nonatomic) long long curesTotal; // @synthesize curesTotal=_curesTotal;
@property(nonatomic) long long suspectedTotal; // @synthesize suspectedTotal=_suspectedTotal;
@property(nonatomic) long long confirmedTotal; // @synthesize confirmedTotal=_confirmedTotal;

@end
