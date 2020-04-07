//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSKVODispatcher;

@interface T1MediaAutoplaySettings : NSObject
{
    _Bool _userDidUpdateSettings;
    _Bool _isAutoplayAudioEnabled;
    long long _currentValue;
    TFSKVODispatcher *_autoplayDataSensitiveKVODispatcher;
}

+ (void)initialize;
+ (id)sharedSettings;
@property(retain, nonatomic) TFSKVODispatcher *autoplayDataSensitiveKVODispatcher; // @synthesize autoplayDataSensitiveKVODispatcher=_autoplayDataSensitiveKVODispatcher;
@property(nonatomic) _Bool isAutoplayAudioEnabled; // @synthesize isAutoplayAudioEnabled=_isAutoplayAudioEnabled;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
@property(readonly, nonatomic) _Bool shouldStartAutoplayWithCurrentNetworkQuality;
@property(readonly, nonatomic, getter=isAutoplayEnabledWithCurrentSetting) _Bool autoplayEnabledWithCurrentSetting;
@property(readonly, nonatomic) _Bool shouldUpdateAutoplayWithCurrentSetting;
- (long long)defaultValue;
@property(nonatomic) long long currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) _Bool userDidUpdateSettings; // @synthesize userDidUpdateSettings=_userDidUpdateSettings;
- (void)_setValue:(long long)arg1 fromUserUpdate:(_Bool)arg2;
- (id)init;

@end
