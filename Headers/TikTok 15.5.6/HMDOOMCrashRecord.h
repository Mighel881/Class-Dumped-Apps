//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDTrackerRecord.h"

@class NSDictionary, NSString;

@interface HMDOOMCrashRecord : HMDTrackerRecord
{
    NSString *_internalStorageSession;
    double _appUsedMemory;
    double _deviceFreeMemory;
    double _freeDiskSpace;
    NSString *_business;
    NSString *_lastScene;
    NSDictionary *_customParams;
    NSDictionary *_filters;
    NSDictionary *_operationTrace;
}

+ (id)newRecord;
+ (id)aggregateDataForRecords:(id)arg1;
+ (id)reportDataForRecords:(id)arg1;
+ (id)tableName;
@property(retain, nonatomic) NSDictionary *operationTrace; // @synthesize operationTrace=_operationTrace;
@property(retain, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSDictionary *customParams; // @synthesize customParams=_customParams;
@property(retain, nonatomic) NSString *lastScene; // @synthesize lastScene=_lastScene;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) double freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(nonatomic) double deviceFreeMemory; // @synthesize deviceFreeMemory=_deviceFreeMemory;
@property(nonatomic) double appUsedMemory; // @synthesize appUsedMemory=_appUsedMemory;
@property(retain, nonatomic) NSString *internalStorageSession; // @synthesize internalStorageSession=_internalStorageSession;
- (void).cxx_destruct;

@end
