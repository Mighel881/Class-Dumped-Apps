//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFURequestPreprocessor-Protocol.h>

@class NFNetworkCategoryManager, NSString;
@protocol OS_dispatch_queue;

@interface NFNetworkStatisticsPreprocessor : NSObject <NFURequestPreprocessor>
{
    _Bool _enabled;
    unsigned long long _connectionType;
    NSObject<OS_dispatch_queue> *_processingQueue;
    const struct __SCNetworkReachability *_reachabilityRef;
    NFNetworkCategoryManager *_categoryManager;
}

+ (unsigned long long)categoryForMslRequest:(id)arg1;
+ (unsigned long long)categoryForPBOActionHeaderValue:(id)arg1;
+ (unsigned long long)categoryForBladeRunnerActionHeaderValue:(id)arg1;
+ (unsigned long long)categoryForUrlString:(id)arg1;
@property(retain, nonatomic) NFNetworkCategoryManager *categoryManager; // @synthesize categoryManager=_categoryManager;
@property(nonatomic) const struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveResponse:(id)arg2 forTask:(id)arg3 withError:(id)arg4;
- (id)requestForURLSession:(id)arg1 withInputRequest:(id)arg2;
- (void)handleReachabilityChanged:(unsigned long long)arg1;
- (void)teardownReachabilityNotifications;
- (void)setupReachabilityNotifications;
- (id)statisticsForXids;
- (id)statisticsForCategories;
- (_Bool)isEnabled;
@property(nonatomic) unsigned long long connectionType; // @synthesize connectionType=_connectionType;
- (id)serialQueue;
- (void)setupSerialQueue;
- (void)recordBytesDownloaded:(unsigned long long)arg1 bytesUploaded:(unsigned long long)arg2 forNetworkCategory:(unsigned long long)arg3 forXid:(id)arg4;
- (void)recordCategoryStatsForTask:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

