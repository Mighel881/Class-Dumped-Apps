//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBAppStoreReviewManager : NSObject
{
}

+ (void)db_logDidShowAppStoreReview;
+ (_Bool)db_stormcrowEnabled;
+ (void)db_setLastDateShownToNow;
+ (_Bool)shouldShowAppStoreReview;
+ (void)resetAllSignals;
+ (id)lastDateShown;
+ (void)decrementDateByTenDays;
+ (long long)fileViewCount;
+ (void)showAppStoreReviewPromptIfEligible;
+ (void)markFileView;

@end
