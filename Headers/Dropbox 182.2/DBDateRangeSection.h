//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDateRange, NSMutableArray, NSString;

@interface DBDateRangeSection : NSObject
{
    DBDateRange *_dateRange;
    NSMutableArray *_dateEntries;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *dateEntries; // @synthesize dateEntries=_dateEntries;
@property(readonly, nonatomic) DBDateRange *dateRange; // @synthesize dateRange=_dateRange;
- (void).cxx_destruct;
- (id)initWithDateRange:(id)arg1;

@end
