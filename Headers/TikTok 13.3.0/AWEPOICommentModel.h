//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSArray, NSNumber, NSString;

@interface AWEPOICommentModel : AWEBaseApiModel
{
    NSString *_commentID;
    AWEURLModel *_avatarURL;
    NSString *_userName;
    NSString *_source;
    NSString *_commentTime;
    NSNumber *_rating;
    NSString *_content;
    NSNumber *_cost;
    NSArray *_photos;
    NSString *_thirdPartyURL;
    NSString *_referID;
}

+ (id)photosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *referID; // @synthesize referID=_referID;
@property(copy, nonatomic) NSString *thirdPartyURL; // @synthesize thirdPartyURL=_thirdPartyURL;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain) NSNumber *cost; // @synthesize cost=_cost;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *commentTime; // @synthesize commentTime=_commentTime;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) AWEURLModel *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;

@end
