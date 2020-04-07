//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Helper)
+ (id)dbFormatString;
+ (id)timestampFormatString;
+ (id)timeFormatString;
+ (id)dateFormatString;
+ (id)stringForDisplayFromDate:(id)arg1;
+ (id)stringForDisplayFromDate:(id)arg1 prefixed:(_Bool)arg2;
+ (id)stringForDisplayFromDate:(id)arg1 prefixed:(_Bool)arg2 alwaysDisplayTime:(_Bool)arg3;
+ (id)stringFromDate:(id)arg1;
+ (id)stringFromDate:(id)arg1 withFormat:(id)arg2;
+ (id)dateFromString:(id)arg1 withFormat:(id)arg2;
+ (id)dateFromString:(id)arg1;
+ (id)sharedDateFormatter;
+ (id)sharedCalendar;
+ (void)initializeStatics;
+ (unsigned char)using12hClockFormat;
- (id)endOfWeek;
- (id)beginningOfDay;
- (id)beginningOfWeek;
- (id)stringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
- (id)string;
- (id)stringWithFormatISO8601;
- (id)stringWithFormat:(id)arg1;
- (unsigned long long)weekNumber;
- (unsigned long long)weekday;
- (long long)utcTimeStamp;
- (unsigned long long)second;
- (unsigned long long)day;
- (unsigned long long)month;
- (unsigned long long)year;
- (unsigned long long)minute;
- (unsigned long long)hour;
- (id)stringDaysAgoAgainstMidnight:(_Bool)arg1;
- (id)stringDaysAgo;
- (unsigned long long)daysAgoAgainstMidnight;
- (unsigned long long)daysAgo;
@end
