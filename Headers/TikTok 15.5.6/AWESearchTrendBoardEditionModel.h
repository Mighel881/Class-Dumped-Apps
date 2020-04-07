//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWESearchTrendBoardEditionModel : AWEBaseApiModel
{
    _Bool _isLatest;
    NSString *_boardID;
    long long _edition;
    NSString *_startTime;
    NSString *_endTime;
    NSNumber *_start;
    NSNumber *_end;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isLatest; // @synthesize isLatest=_isLatest;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long edition; // @synthesize edition=_edition;
@property(copy, nonatomic) NSString *boardID; // @synthesize boardID=_boardID;
- (void).cxx_destruct;

@end
