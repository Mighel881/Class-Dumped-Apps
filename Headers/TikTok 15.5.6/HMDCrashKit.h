//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCrashUploader, NSDictionary, NSString;
@protocol HMDCrashKitDelegate, OS_dispatch_queue;

@interface HMDCrashKit : NSObject
{
    _Bool _needEncrypt;
    _Bool _lastTimeCrash;
    id <HMDCrashKitDelegate> _delegate;
    NSDictionary *_extraMetaData;
    HMDCrashUploader *_uploader;
    NSString *_commitID;
    NSString *_sdkVersion;
    double _launchCrashThreshold;
    NSObject<OS_dispatch_queue> *_dynamicDataQueue;
}

+ (id)extraMetaData;
+ (void)setExtraMetaData:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dynamicDataQueue; // @synthesize dynamicDataQueue=_dynamicDataQueue;
@property(nonatomic) _Bool lastTimeCrash; // @synthesize lastTimeCrash=_lastTimeCrash;
@property(nonatomic) double launchCrashThreshold; // @synthesize launchCrashThreshold=_launchCrashThreshold;
@property(nonatomic) _Bool needEncrypt; // @synthesize needEncrypt=_needEncrypt;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *commitID; // @synthesize commitID=_commitID;
@property(retain, nonatomic) HMDCrashUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) NSDictionary *extraMetaData; // @synthesize extraMetaData=_extraMetaData;
@property(nonatomic) __weak id <HMDCrashKitDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeDynamicValue:(id)arg1;
- (void)syncDynamicValue:(id)arg1 key:(id)arg2;
- (void)setDynamicValue:(id)arg1 key:(id)arg2;
- (void)setup;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

@end
