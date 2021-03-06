//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXMediaItem.h"

@class NSArray, NSNumber, NSString;

@interface XBXTVSeason : XBXMediaItem
{
    unsigned int _episodeCount;
    NSArray *_actors;
    NSArray *_roles;
    NSArray *_providers;
    NSArray *_genres;
    NSString *_releaseDate;
    NSString *_duration;
    NSString *_seasonId;
    NSString *_seasonName;
    NSNumber *_metacriticScore;
    NSString *_networkName;
    NSString *_parentalRating;
    NSString *_tvSeriesEdsId;
}

@property(nonatomic) unsigned int episodeCount; // @synthesize episodeCount=_episodeCount;
@property(copy, nonatomic) NSString *tvSeriesEdsId; // @synthesize tvSeriesEdsId=_tvSeriesEdsId;
@property(copy, nonatomic) NSString *parentalRating; // @synthesize parentalRating=_parentalRating;
@property(copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(retain, nonatomic) NSNumber *metacriticScore; // @synthesize metacriticScore=_metacriticScore;
@property(retain, nonatomic) NSString *seasonName; // @synthesize seasonName=_seasonName;
@property(retain, nonatomic) NSString *seasonId; // @synthesize seasonId=_seasonId;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(retain, nonatomic) NSArray *actors; // @synthesize actors=_actors;
- (void).cxx_destruct;
- (id)getProvidersIfApplicable;

@end

