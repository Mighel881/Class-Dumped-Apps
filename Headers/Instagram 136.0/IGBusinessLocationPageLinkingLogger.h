//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IG4BLogger;

@interface IGBusinessLocationPageLinkingLogger : NSObject
{
    IG4BLogger *_locationPageLogger;
}

@property(readonly, nonatomic) IG4BLogger *locationPageLogger; // @synthesize locationPageLogger=_locationPageLogger;
- (void).cxx_destruct;
- (void)logLocationPageReportBusinessOfID:(id)arg1 forReason:(id)arg2;
- (void)logLocationPagTappedBusinessOfID:(id)arg1;
- (void)logLocationPageWithViewedBusinessOfID:(id)arg1;
- (void)logLocationPageFetchingDataWithError:(id)arg1;
- (void)logLocationPageFetchingdataWithBusinessUserID:(id)arg1;
- (void)logLocationPageStartStepWithPageID:(id)arg1 locationID:(id)arg2;
- (id)initWithAnalyticsLogger:(id)arg1 logger:(id)arg2 entrypoint:(id)arg3;
- (id)initWithEntrypoint:(id)arg1 analyticsLogger:(id)arg2;

@end

