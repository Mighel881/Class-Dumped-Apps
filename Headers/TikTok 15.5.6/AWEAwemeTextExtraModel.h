//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWEAwemeTextExtraModel : AWEBaseApiModel
{
    _Bool _isCommerce;
    NSNumber *_start;
    NSNumber *_end;
    NSString *_userID;
    NSString *_hashtagName;
    NSString *_hashtagId;
    NSString *_awemeId;
    long long _type;
    long long _subtype;
    NSNumber *_stickerID;
    AWEURLModel *_stickerURL;
    unsigned long long _stickerType;
}

+ (id)stickerURLJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(retain, nonatomic) AWEURLModel *stickerURL; // @synthesize stickerURL=_stickerURL;
@property(retain, nonatomic) NSNumber *stickerID; // @synthesize stickerID=_stickerID;
@property(nonatomic) _Bool isCommerce; // @synthesize isCommerce=_isCommerce;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *awemeId; // @synthesize awemeId=_awemeId;
@property(retain, nonatomic) NSString *hashtagId; // @synthesize hashtagId=_hashtagId;
@property(retain, nonatomic) NSString *hashtagName; // @synthesize hashtagName=_hashtagName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
- (void).cxx_destruct;

@end

