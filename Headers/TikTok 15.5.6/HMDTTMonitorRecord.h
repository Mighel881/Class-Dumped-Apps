//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDRecordStoreObject-Protocol.h"

@class NSDictionary, NSString;

@interface HMDTTMonitorRecord : NSObject <HMDRecordStoreObject>
{
    unsigned long long _localID;
    double _timestamp;
    NSString *_sessionID;
    double _inAppTime;
    NSString *_service;
    NSString *_log_type;
    NSString *_log_id;
    unsigned long long _needUpload;
    NSString *_appID;
    NSDictionary *_extra_values;
    NSString *_appVersion;
    NSString *_osVersion;
    NSString *_updateVersionCode;
}

+ (id)newRecord;
+ (id)tableName;
@property(copy, nonatomic) NSString *updateVersionCode; // @synthesize updateVersionCode=_updateVersionCode;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSDictionary *extra_values; // @synthesize extra_values=_extra_values;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned long long needUpload; // @synthesize needUpload=_needUpload;
@property(copy, nonatomic) NSString *log_id; // @synthesize log_id=_log_id;
@property(copy, nonatomic) NSString *log_type; // @synthesize log_type=_log_type;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(nonatomic) double inAppTime; // @synthesize inAppTime=_inAppTime;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long localID; // @synthesize localID=_localID;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
