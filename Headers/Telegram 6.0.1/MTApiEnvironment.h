//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTNetworkSettings, MTSocksProxySettings, NSData, NSDictionary, NSNumber, NSString;

@interface MTApiEnvironment : NSObject
{
    _Bool _disableUpdates;
    int _apiId;
    NSString *_deviceModel;
    NSString *_systemVersion;
    NSString *_appVersion;
    NSString *_systemLangCode;
    NSNumber *_layer;
    NSData *_systemCode;
    NSString *_langPack;
    NSString *_langPackCode;
    NSString *_apiInitializationHash;
    NSData *_tcpPayloadPrefix;
    NSDictionary *_datacenterAddressOverrides;
    NSString *_accessHostOverride;
    MTSocksProxySettings *_socksProxySettings;
    MTNetworkSettings *_networkSettings;
    CDUnknownBlockType _passwordInputHandler;
}

@property(copy, nonatomic) CDUnknownBlockType passwordInputHandler; // @synthesize passwordInputHandler=_passwordInputHandler;
@property(readonly, nonatomic) MTNetworkSettings *networkSettings; // @synthesize networkSettings=_networkSettings;
@property(readonly, nonatomic) MTSocksProxySettings *socksProxySettings; // @synthesize socksProxySettings=_socksProxySettings;
@property(retain, nonatomic) NSString *accessHostOverride; // @synthesize accessHostOverride=_accessHostOverride;
@property(retain, nonatomic) NSDictionary *datacenterAddressOverrides; // @synthesize datacenterAddressOverrides=_datacenterAddressOverrides;
@property(retain, nonatomic) NSData *tcpPayloadPrefix; // @synthesize tcpPayloadPrefix=_tcpPayloadPrefix;
@property(nonatomic) _Bool disableUpdates; // @synthesize disableUpdates=_disableUpdates;
@property(readonly, nonatomic) NSString *apiInitializationHash; // @synthesize apiInitializationHash=_apiInitializationHash;
@property(readonly, nonatomic) NSString *langPackCode; // @synthesize langPackCode=_langPackCode;
@property(retain, nonatomic) NSString *langPack; // @synthesize langPack=_langPack;
@property(readonly, nonatomic) NSData *systemCode; // @synthesize systemCode=_systemCode;
@property(retain, nonatomic) NSNumber *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) NSString *systemLangCode; // @synthesize systemLangCode=_systemLangCode;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(nonatomic) int apiId; // @synthesize apiId=_apiId;
- (void).cxx_destruct;
- (id)withUpdatedSystemCode:(id)arg1;
- (id)withUpdatedNetworkSettings:(id)arg1;
- (id)withUpdatedSocksProxySettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)withUpdatedLangPackCode:(id)arg1;
- (id)platform;
- (id)getSysInfoByName:(char *)arg1;
- (unsigned long long)platformType;
- (id)macHWName;
- (id)platformString;
- (void)setLangPackCode:(id)arg1;
- (void)_updateApiInitializationHash;
- (id)init;

@end
