//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDCrashModel.h"

@class HMDCrashHeaderInfo, HMDCrashMetaData, HMDCrashProcessState, HMDCrashRuntimeInfo, HMDCrashStorage, HMDCrashThreadInfo, NSArray, NSDictionary, NSMutableString, NSString;

@interface HMDCrashInfo : HMDCrashModel
{
    NSMutableString *_str;
    _Bool _isJailBroken;
    _Bool _isCorrupted;
    _Bool _fileIOError;
    _Bool _isInvalid;
    NSArray *_regions;
    NSArray *_images;
    HMDCrashMetaData *_meta;
    HMDCrashHeaderInfo *_headerInfo;
    NSArray *_threads;
    HMDCrashThreadInfo *_stackRecord;
    NSArray *_queueNames;
    NSArray *_threadNames;
    HMDCrashProcessState *_processState;
    HMDCrashStorage *_storage;
    NSDictionary *_dynamicInfo;
    HMDCrashRuntimeInfo *_runtimeInfo;
    NSArray *_registerAnalysis;
    NSArray *_stackAnalysis;
    NSString *_sdklog;
}

@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(copy, nonatomic) NSString *sdklog; // @synthesize sdklog=_sdklog;
@property(nonatomic) _Bool fileIOError; // @synthesize fileIOError=_fileIOError;
@property(nonatomic) _Bool isCorrupted; // @synthesize isCorrupted=_isCorrupted;
@property(nonatomic) _Bool isJailBroken; // @synthesize isJailBroken=_isJailBroken;
@property(copy, nonatomic) NSArray *stackAnalysis; // @synthesize stackAnalysis=_stackAnalysis;
@property(copy, nonatomic) NSArray *registerAnalysis; // @synthesize registerAnalysis=_registerAnalysis;
@property(retain, nonatomic) HMDCrashRuntimeInfo *runtimeInfo; // @synthesize runtimeInfo=_runtimeInfo;
@property(copy, nonatomic) NSDictionary *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) HMDCrashStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) HMDCrashProcessState *processState; // @synthesize processState=_processState;
@property(copy, nonatomic) NSArray *threadNames; // @synthesize threadNames=_threadNames;
@property(copy, nonatomic) NSArray *queueNames; // @synthesize queueNames=_queueNames;
@property(retain, nonatomic) HMDCrashThreadInfo *stackRecord; // @synthesize stackRecord=_stackRecord;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) HMDCrashHeaderInfo *headerInfo; // @synthesize headerInfo=_headerInfo;
@property(retain, nonatomic) HMDCrashMetaData *meta; // @synthesize meta=_meta;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSArray *regions; // @synthesize regions=_regions;
- (void).cxx_destruct;
- (void)tag:(id)arg1 format:(id)arg2 args:(char *)arg3;
- (void)error:(id)arg1;
- (void)warn:(id)arg1;
- (void)info:(id)arg1;
@property(readonly, nonatomic) NSString *processLog;
@property(readonly, nonatomic) _Bool isComplete;
- (id)init;

@end
