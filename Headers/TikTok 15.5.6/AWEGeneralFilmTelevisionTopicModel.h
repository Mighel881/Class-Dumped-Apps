//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWEGeneralFilmTelevisionTopicModel : AWEBaseApiModel
{
    _Bool _showDivideLine;
    NSString *_name;
    NSArray *_topicArray;
}

+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool showDivideLine; // @synthesize showDivideLine=_showDivideLine;
@property(retain, nonatomic) NSArray *topicArray; // @synthesize topicArray=_topicArray;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
