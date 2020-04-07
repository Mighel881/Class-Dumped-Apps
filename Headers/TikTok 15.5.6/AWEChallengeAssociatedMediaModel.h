//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEChallengeAssociatedMediaButtonModel, AWEURLModel, NSArray, NSString;

@interface AWEChallengeAssociatedMediaModel : MTLModel <MTLJSONSerializing>
{
    NSString *_title;
    NSString *_readMoreText;
    NSString *_readMoreURL;
    long long _mediaType;
    NSString *_mediaName;
    AWEURLModel *_coverURL;
    NSString *_releaseDate;
    long long _duration;
    long long _seqsCount;
    NSArray *_classification;
    double _rating;
    long long _ratingStatus;
    NSString *_mediaTag;
    AWEChallengeAssociatedMediaButtonModel *_buttonModel;
    long long _compassID;
}

+ (id)buttonModelJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long compassID; // @synthesize compassID=_compassID;
@property(retain, nonatomic) AWEChallengeAssociatedMediaButtonModel *buttonModel; // @synthesize buttonModel=_buttonModel;
@property(copy, nonatomic) NSString *mediaTag; // @synthesize mediaTag=_mediaTag;
@property(nonatomic) long long ratingStatus; // @synthesize ratingStatus=_ratingStatus;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSArray *classification; // @synthesize classification=_classification;
@property(nonatomic) long long seqsCount; // @synthesize seqsCount=_seqsCount;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) AWEURLModel *coverURL; // @synthesize coverURL=_coverURL;
@property(copy, nonatomic) NSString *mediaName; // @synthesize mediaName=_mediaName;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *readMoreURL; // @synthesize readMoreURL=_readMoreURL;
@property(copy, nonatomic) NSString *readMoreText; // @synthesize readMoreText=_readMoreText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
