//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol TFNTwitterFeatureSwitches <NSObject>
- (NSDictionary *)rawFeatureSwitchesDictionary;
- (id)overriddenRawValueForKey:(NSString *)arg1;
- (void)removeOverrideForKey:(NSString *)arg1 employeeBuildOrOverrideEnabledAccountID:(NSString *)arg2;
- (void)overrideAllValuesInDictionary:(NSDictionary *)arg1 employeeBuildOrOverrideEnabledAccountID:(NSString *)arg2;
- (void)overrideRawValue:(id)arg1 forKey:(NSString *)arg2 employeeBuildOrOverrideEnabledAccountID:(NSString *)arg3;
- (NSDictionary *)secondaryConfigurationForKey:(NSString *)arg1;
- (NSString *)bucketNameForExperimentKey:(NSString *)arg1 honoringLongtermHoldbackKey:(NSString *)arg2;
- (double)unsafePeekDoubleForKey:(NSString *)arg1;
- (_Bool)unsafePeekBoolForKey:(NSString *)arg1;
- (NSArray *)unsafePeekArrayForKey:(NSString *)arg1;
- (NSString *)unsafePeekStringForKey:(NSString *)arg1;
- (long long)unsafePeekIntegerForKey:(NSString *)arg1;
- (_Bool)hasNonDefaultValueForKey:(NSString *)arg1;
- (_Bool)isInExperimentForKey:(NSString *)arg1;
- (void)applyPendingDeviceFeatureSwitches;
- (void)partiallyApplyPendingWithAccountID:(NSString *)arg1 keys:(NSArray *)arg2;
- (void)applyPendingWithAccountID:(NSString *)arg1;
- (void)forceRefreshDeviceFeatureSwitchesWithCompletion:(void (^)(_Bool))arg1;
- (void)forceRefreshWithAccountID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)refreshDeviceFeatureSwitchesIfNecessaryWithCompletion:(void (^)(_Bool))arg1;
- (void)refreshIfNecessaryWithAccountID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)refreshWithAccountID:(NSString *)arg1 maxStale:(double)arg2 timeout:(double)arg3 completion:(void (^)(_Bool))arg4;
- (void)refreshWithAccountID:(NSString *)arg1 maxStale:(double)arg2 completion:(void (^)(_Bool))arg3;
- (id)rawValueForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (NSNumber *)numberForKey:(NSString *)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (double)CGFloatForKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg1;
- (_Bool)boolForKey:(NSString *)arg1;
@end

