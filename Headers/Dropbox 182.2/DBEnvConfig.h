//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBEnvConfig : NSObject
{
    _Bool _isInternalBuild;
    _Bool _isBetaBuild;
    NSString *_apiHost;
    NSString *_apiDebugHost;
    NSString *_contentHost;
    NSString *_webHost;
    NSString *_notifyHost;
    NSString *_photoContentHost;
    NSString *_boltHost;
    NSString *_thunderHost;
    NSString *_beaconHost;
    NSString *_cameraUploadApiHost;
    NSString *_cameraUploadContentHost;
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_appBuildType;
    NSString *_locale;
    NSString *_userAgent;
    NSString *_systemName;
    NSString *_logSystemManufacturer;
    NSString *_logSystemModel;
    NSString *_logSystemVersion;
    NSString *_logScreenSize;
    NSString *_logScreenDensity;
    NSString *_logMemoryAvailableMb;
    NSString *_logAppName;
    NSString *_logAppVersion;
    NSString *_logDeviceId;
}

+ (id)envConfigWithApiHost:(id)arg1 apiDebugHost:(id)arg2 contentHost:(id)arg3 webHost:(id)arg4 notifyHost:(id)arg5 photoContentHost:(id)arg6 boltHost:(id)arg7 thunderHost:(id)arg8 beaconHost:(id)arg9 cameraUploadApiHost:(id)arg10 cameraUploadContentHost:(id)arg11 appKey:(id)arg12 appSecret:(id)arg13 appBuildType:(id)arg14 locale:(id)arg15 userAgent:(id)arg16 systemName:(id)arg17 logSystemManufacturer:(id)arg18 logSystemModel:(id)arg19 logSystemVersion:(id)arg20 logScreenSize:(id)arg21 logScreenDensity:(id)arg22 logMemoryAvailableMb:(id)arg23 logAppName:(id)arg24 logAppVersion:(id)arg25 logDeviceId:(id)arg26 isInternalBuild:(_Bool)arg27 isBetaBuild:(_Bool)arg28;
@property(readonly, nonatomic) _Bool isBetaBuild; // @synthesize isBetaBuild=_isBetaBuild;
@property(readonly, nonatomic) _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(readonly, nonatomic) NSString *logDeviceId; // @synthesize logDeviceId=_logDeviceId;
@property(readonly, nonatomic) NSString *logAppVersion; // @synthesize logAppVersion=_logAppVersion;
@property(readonly, nonatomic) NSString *logAppName; // @synthesize logAppName=_logAppName;
@property(readonly, nonatomic) NSString *logMemoryAvailableMb; // @synthesize logMemoryAvailableMb=_logMemoryAvailableMb;
@property(readonly, nonatomic) NSString *logScreenDensity; // @synthesize logScreenDensity=_logScreenDensity;
@property(readonly, nonatomic) NSString *logScreenSize; // @synthesize logScreenSize=_logScreenSize;
@property(readonly, nonatomic) NSString *logSystemVersion; // @synthesize logSystemVersion=_logSystemVersion;
@property(readonly, nonatomic) NSString *logSystemModel; // @synthesize logSystemModel=_logSystemModel;
@property(readonly, nonatomic) NSString *logSystemManufacturer; // @synthesize logSystemManufacturer=_logSystemManufacturer;
@property(readonly, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *appBuildType; // @synthesize appBuildType=_appBuildType;
@property(readonly, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(readonly, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(readonly, nonatomic) NSString *cameraUploadContentHost; // @synthesize cameraUploadContentHost=_cameraUploadContentHost;
@property(readonly, nonatomic) NSString *cameraUploadApiHost; // @synthesize cameraUploadApiHost=_cameraUploadApiHost;
@property(readonly, nonatomic) NSString *beaconHost; // @synthesize beaconHost=_beaconHost;
@property(readonly, nonatomic) NSString *thunderHost; // @synthesize thunderHost=_thunderHost;
@property(readonly, nonatomic) NSString *boltHost; // @synthesize boltHost=_boltHost;
@property(readonly, nonatomic) NSString *photoContentHost; // @synthesize photoContentHost=_photoContentHost;
@property(readonly, nonatomic) NSString *notifyHost; // @synthesize notifyHost=_notifyHost;
@property(readonly, nonatomic) NSString *webHost; // @synthesize webHost=_webHost;
@property(readonly, nonatomic) NSString *contentHost; // @synthesize contentHost=_contentHost;
@property(readonly, nonatomic) NSString *apiDebugHost; // @synthesize apiDebugHost=_apiDebugHost;
@property(readonly, nonatomic) NSString *apiHost; // @synthesize apiHost=_apiHost;
- (void).cxx_destruct;
- (id)description;
- (id)initWithApiHost:(id)arg1 apiDebugHost:(id)arg2 contentHost:(id)arg3 webHost:(id)arg4 notifyHost:(id)arg5 photoContentHost:(id)arg6 boltHost:(id)arg7 thunderHost:(id)arg8 beaconHost:(id)arg9 cameraUploadApiHost:(id)arg10 cameraUploadContentHost:(id)arg11 appKey:(id)arg12 appSecret:(id)arg13 appBuildType:(id)arg14 locale:(id)arg15 userAgent:(id)arg16 systemName:(id)arg17 logSystemManufacturer:(id)arg18 logSystemModel:(id)arg19 logSystemVersion:(id)arg20 logScreenSize:(id)arg21 logScreenDensity:(id)arg22 logMemoryAvailableMb:(id)arg23 logAppName:(id)arg24 logAppVersion:(id)arg25 logDeviceId:(id)arg26 isInternalBuild:(_Bool)arg27 isBetaBuild:(_Bool)arg28;

@end
