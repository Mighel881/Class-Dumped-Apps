//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface GDKBackfillOptionsBuilder : NSObject
{
    _Bool _allowLinkedBackfill_19;
    int _standardBackfillItemLimit_25;
    int _pageSize_8;
    int _queryItemLimit;
    NSArray *_backfillQueries_15;
    NSNumber *_backfillQueries_hazzer;
    NSNumber *_standardBackfillItemLimit_hazzer;
    NSNumber *_pageSize_hazzer;
    NSNumber *_allowLinkedBackfill_hazzer;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builder;
@property(retain, nonatomic) NSNumber *allowLinkedBackfill_hazzer; // @synthesize allowLinkedBackfill_hazzer=_allowLinkedBackfill_hazzer;
@property(retain, nonatomic) NSNumber *pageSize_hazzer; // @synthesize pageSize_hazzer=_pageSize_hazzer;
@property(retain, nonatomic) NSNumber *standardBackfillItemLimit_hazzer; // @synthesize standardBackfillItemLimit_hazzer=_standardBackfillItemLimit_hazzer;
@property(retain, nonatomic) NSNumber *backfillQueries_hazzer; // @synthesize backfillQueries_hazzer=_backfillQueries_hazzer;
@property(nonatomic) int queryItemLimit; // @synthesize queryItemLimit=_queryItemLimit;
- (void).cxx_destruct;
- (id)build;
@property(nonatomic) _Bool allowLinkedBackfill; // @synthesize allowLinkedBackfill=_allowLinkedBackfill_19;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize_8;
@property(nonatomic) int standardBackfillItemLimit; // @synthesize standardBackfillItemLimit=_standardBackfillItemLimit_25;
@property(copy, nonatomic) NSArray *backfillQueries; // @synthesize backfillQueries=_backfillQueries_15;

@end

