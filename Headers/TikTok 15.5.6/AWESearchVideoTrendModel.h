//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel, NSNumber;

@interface AWESearchVideoTrendModel : AWEBaseApiModel
{
    AWEAwemeModel *_awemeModel;
    unsigned long long _labelType;
    NSNumber *_hotCount;
}

+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *hotCount; // @synthesize hotCount=_hotCount;
@property(nonatomic) unsigned long long labelType; // @synthesize labelType=_labelType;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
- (void).cxx_destruct;

@end
