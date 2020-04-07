//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEpidLynxView, NSNumber, NSString, NSURL;

@interface AWELynxChannelModel : AWEBaseApiModel
{
    _Bool _bannerLiveMutex;
    _Bool _hasLiveCard;
    NSNumber *_height;
    NSURL *_schema;
    NSString *_rawData;
}

+ (id)schemaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSURL *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(nonatomic) _Bool hasLiveCard; // @synthesize hasLiveCard=_hasLiveCard;
@property(nonatomic) _Bool bannerLiveMutex; // @synthesize bannerLiveMutex=_bannerLiveMutex;
- (void).cxx_destruct;
- (_Bool)hasLynxSchema;
@property(retain, nonatomic) AWEpidLynxView *bindLynxView;

@end
