//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSArray, NSNumber, NSString;

@interface NFUIContentAdvisoryEntity : COEntity
{
    NSString *_rating;
    NSString *_advisories;
    NSNumber *_displayDurationInSeconds;
    NSString *_ratingsBoard;
    NSArray *_reasons;
    unsigned long long _ratingBoardType;
}

+ (id)nicamIconMappingDict;
+ (id)kmrbIconMappingDict;
+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(nonatomic) unsigned long long ratingBoardType; // @synthesize ratingBoardType=_ratingBoardType;
@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(copy, nonatomic) NSString *ratingsBoard; // @synthesize ratingsBoard=_ratingsBoard;
@property(copy, nonatomic) NSNumber *displayDurationInSeconds; // @synthesize displayDurationInSeconds=_displayDurationInSeconds;
@property(copy, nonatomic) NSString *advisories; // @synthesize advisories=_advisories;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (id)iconNameForRating:(id)arg1 usingBoardType:(unsigned long long)arg2 asSmallSize:(_Bool)arg3;
- (id)ratingIconNameWithSmallOption:(_Bool)arg1;
- (id)smallRatingIconName;
- (id)ratingIconName;
- (id)iconNameForId:(id)arg1;
- (_Bool)isBBFC;
- (_Bool)isNicam;
- (_Bool)isBrazil;
- (_Bool)isKMRB;

@end

