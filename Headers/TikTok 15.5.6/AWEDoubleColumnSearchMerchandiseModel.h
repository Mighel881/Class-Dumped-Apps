//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel, AWEDoubleColumnSearchMerchandiseHashtag, AWEDoubleColumnSearchMerchandiseSeed, AWESearchMerchandiseModel;

@interface AWEDoubleColumnSearchMerchandiseModel : AWEBaseApiModel
{
    long long _type;
    AWESearchMerchandiseModel *_merchandise;
    AWEAwemeModel *_aweme;
    AWEDoubleColumnSearchMerchandiseHashtag *_hashtag;
    AWEDoubleColumnSearchMerchandiseSeed *_seed;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEDoubleColumnSearchMerchandiseSeed *seed; // @synthesize seed=_seed;
@property(retain, nonatomic) AWEDoubleColumnSearchMerchandiseHashtag *hashtag; // @synthesize hashtag=_hashtag;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
@property(retain, nonatomic) AWESearchMerchandiseModel *merchandise; // @synthesize merchandise=_merchandise;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)trackEventDict;

@end
