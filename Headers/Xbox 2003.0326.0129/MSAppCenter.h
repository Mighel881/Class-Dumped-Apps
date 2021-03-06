//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSOneCollectorChannelDelegate, NSMutableArray, NSNumber, NSString, NSUUID;
@protocol MSChannelGroupProtocol, MSChannelUnitProtocol;

@interface MSAppCenter : NSObject
{
    _Bool _sdkConfigured;
    _Bool _configuredFromApplication;
    _Bool _enabledStateUpdating;
    _Bool _setMaxStorageSizeHasBeenCalled;
    NSUUID *_installId;
    NSString *_logUrl;
    id <MSChannelUnitProtocol> _channelUnit;
    MSOneCollectorChannelDelegate *_oneCollectorChannelDelegate;
    id <MSChannelGroupProtocol> _channelGroup;
    NSMutableArray *_services;
    NSMutableArray *_startedServiceNames;
    NSString *_appSecret;
    NSString *_defaultTransmissionTargetToken;
    NSNumber *_requestedMaxStorageSizeInBytes;
    CDUnknownBlockType _maxStorageSizeCompletionHandler;
}

+ (void)resetSharedInstance;
+ (void)setCountryCode:(id)arg1;
+ (void)setUserId:(id)arg1;
+ (void)setMaxStorageSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)groupId;
+ (id)logTag;
+ (id)sdkVersion;
+ (_Bool)isDebuggerAttached;
+ (void)setCustomProperties:(id)arg1;
+ (void)setWrapperSdk:(id)arg1;
+ (void)setLogHandler:(CDUnknownBlockType)arg1;
+ (void)setLogLevel:(unsigned long long)arg1;
+ (unsigned long long)logLevel;
+ (id)installId;
+ (_Bool)isAppDelegateForwarderEnabled;
+ (_Bool)isEnabled;
+ (void)setEnabled:(_Bool)arg1;
+ (void)setLogUrl:(id)arg1;
+ (_Bool)isRunningInAppCenterTestCloud;
+ (_Bool)isConfigured;
+ (void)startFromLibraryWithServices:(id)arg1;
+ (void)startService:(Class)arg1;
+ (void)startWithServices:(id)arg1;
+ (void)start:(id)arg1 withServices:(id)arg2;
+ (void)configure;
+ (void)configureWithAppSecret:(id)arg1;
+ (id)sharedInstance;
@property _Bool setMaxStorageSizeHasBeenCalled; // @synthesize setMaxStorageSizeHasBeenCalled=_setMaxStorageSizeHasBeenCalled;
@property(copy, nonatomic) CDUnknownBlockType maxStorageSizeCompletionHandler; // @synthesize maxStorageSizeCompletionHandler=_maxStorageSizeCompletionHandler;
@property(nonatomic, getter=isEnabledStateUpdating) _Bool enabledStateUpdating; // @synthesize enabledStateUpdating=_enabledStateUpdating;
@property(nonatomic, getter=isConfiguredFromApplication) _Bool configuredFromApplication; // @synthesize configuredFromApplication=_configuredFromApplication;
@property(nonatomic, getter=isSdkConfigured) _Bool sdkConfigured; // @synthesize sdkConfigured=_sdkConfigured;
@property(retain, nonatomic) NSNumber *requestedMaxStorageSizeInBytes; // @synthesize requestedMaxStorageSizeInBytes=_requestedMaxStorageSizeInBytes;
@property(copy, nonatomic) NSString *defaultTransmissionTargetToken; // @synthesize defaultTransmissionTargetToken=_defaultTransmissionTargetToken;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSMutableArray *startedServiceNames; // @synthesize startedServiceNames=_startedServiceNames;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) id <MSChannelGroupProtocol> channelGroup; // @synthesize channelGroup=_channelGroup;
@property(retain, nonatomic) MSOneCollectorChannelDelegate *oneCollectorChannelDelegate; // @synthesize oneCollectorChannelDelegate=_oneCollectorChannelDelegate;
@property(retain, nonatomic) id <MSChannelUnitProtocol> channelUnit; // @synthesize channelUnit=_channelUnit;
- (void).cxx_destruct;
- (_Bool)shouldDisable:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)sendCustomPropertiesLog:(id)arg1;
- (void)sendStartServiceLog:(id)arg1;
- (_Bool)canBeUsed;
@property(readonly, nonatomic) NSUUID *installId; // @synthesize installId=_installId;
- (void)initializeChannelGroup;
- (void)applyPipelineEnabledState:(_Bool)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setCustomProperties:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setMaxStorageSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy) NSString *logUrl; // @synthesize logUrl=_logUrl;
- (_Bool)startService:(Class)arg1 withAppSecret:(id)arg2 transmissionTargetToken:(id)arg3 fromApplication:(_Bool)arg4;
- (id)sortServices:(id)arg1;
- (void)startServices:(id)arg1 withAppSecret:(id)arg2 transmissionTargetToken:(id)arg3 fromApplication:(_Bool)arg4;
- (void)start:(id)arg1 withServices:(id)arg2 fromApplication:(_Bool)arg3;
- (_Bool)configureWithAppSecret:(id)arg1 transmissionTargetToken:(id)arg2 fromApplication:(_Bool)arg3;
- (id)init;

@end

