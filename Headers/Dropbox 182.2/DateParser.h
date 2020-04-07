//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DateParser : NSObject
{
}

+ (id)db_workaroundAppleBugLocalizedAgoStringFromDate:(id)arg1 withUnitsStyle:(long long)arg2;
+ (id)db_getTimeAgoComponentsFormatString:(unsigned long long)arg1 value:(long long)arg2 unitStyle:(long long)arg3;
+ (id)humanReadableStringForFileName:(id)arg1;
+ (id)readableDayStringForDate:(id)arg1;
+ (id)db_yearMonthAndDayDateFormatter;
+ (id)db_monthAndDayDateFormatter;
+ (id)db_weekdayDateFormatter;
+ (id)db_shortRelativelyDateFormatter;
+ (id)db_stringFromDateFormatter;
+ (id)db_dateFromStringFormatter;
+ (id)db_stringByReplacingColonAndSlash:(id)arg1;
+ (id)db_relativeComponentFormatter;
+ (id)db_localizedAgoStringFromDate:(id)arg1 withUnitsStyle:(long long)arg2;
+ (id)stringIntervalSinceDate:(id)arg1 abbreviated:(_Bool)arg2 justNowThreshold:(double)arg3;
+ (id)abbreviatedStringIntervalSinceDate:(id)arg1;
+ (id)stringIntervalSinceDate:(id)arg1;
+ (_Bool)db_shouldUseNumericTimestampInsteadOfRelativeInterval;
+ (id)dateOnlyStringFromDate:(id)arg1;
+ (id)timeOnlyStringFromDate:(id)arg1;
+ (id)dayOfWeekAndTimeStringFromDate:(id)arg1;
+ (id)dayOfWeekDateAndTimeStringFromDate:(id)arg1;
+ (id)shortFormattedDateAndTimeFromDate:(id)arg1;
+ (id)shortFormattedDateMediumFormattedTimeStringFromDate:(id)arg1;
+ (id)longFormattedDateShortFormattedTimeStringFromDate:(id)arg1;
+ (id)stringFromDate:(id)arg1;
+ (id)withDate:(id)arg1 format:(char *)arg2;
+ (id)dateFromString:(id)arg1;
+ (char *)shortDateFormat;
+ (char *)dateFormat;
+ (id)sharedFormatter;
+ (void)setUseWorkaroundForAppleBugInDateComponentsFormatter:(_Bool)arg1;

@end
