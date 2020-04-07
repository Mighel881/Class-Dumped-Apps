//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HeimdallrModule-Protocol.h"

@class HMDModuleConfig, HMDReportLimitSizeTool, Heimdallr, NSString;

@interface HeimdallrModule : NSObject <HeimdallrModule>
{
    _Bool _isRunning;
    Heimdallr *_heimdallr;
    HMDModuleConfig *_config;
    HMDReportLimitSizeTool *_sizeLimitTool;
}

@property(readonly, nonatomic) __weak HMDReportLimitSizeTool *sizeLimitTool; // @synthesize sizeLimitTool=_sizeLimitTool;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain) HMDModuleConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) __weak Heimdallr *heimdallr; // @synthesize heimdallr=_heimdallr;
- (void).cxx_destruct;
- (void)updateConfig:(id)arg1;
- (id)moduleName;
- (void)cleanupWithConfig:(id)arg1;
- (Class)storeClass;
- (void)stop;
- (void)start;
- (void)setupWithHeimdallrReportSizeLimimt:(id)arg1;
- (void)setupWithHeimdallr:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
