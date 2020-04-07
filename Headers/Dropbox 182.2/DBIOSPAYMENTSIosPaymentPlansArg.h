//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSString;

@interface DBIOSPAYMENTSIosPaymentPlansArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_appVersion;
    NSString *_sysModel;
    NSString *_sysVersion;
    NSString *_deviceId;
    NSString *_clientLocale;
    NSString *_appName;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *clientLocale; // @synthesize clientLocale=_clientLocale;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *sysVersion; // @synthesize sysVersion=_sysVersion;
@property(readonly, copy, nonatomic) NSString *sysModel; // @synthesize sysModel=_sysModel;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;
- (_Bool)isEqualToIosPaymentPlansArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithAppVersion:(id)arg1 sysModel:(id)arg2 sysVersion:(id)arg3 deviceId:(id)arg4 clientLocale:(id)arg5 appName:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
