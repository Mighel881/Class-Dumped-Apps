//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWEOneDayStoryViewerModel : AWEBaseApiModel
{
    NSNumber *_total;
    NSArray *_userList;
}

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(copy, nonatomic) NSNumber *total; // @synthesize total=_total;
- (void).cxx_destruct;

@end
