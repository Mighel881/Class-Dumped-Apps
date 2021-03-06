//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "PDLTopNCacheStatusProvider-Protocol.h"

@class GPCPromise, NSArray, NSDate, NSDictionary, NSNumber, NSString, PDLAutocompletion, PDLClientConfigInternal;
@protocol PDLConfigurationService;

@protocol PDLTopNCache <NSObject, PDLTopNCacheStatusProvider>
@property(nonatomic) long long clientIDUsedToRefreshTopNCache;
@property(readonly) long long contactsCount;
@property(nonatomic) _Bool containsPartialResults;
@property(readonly, nonatomic) long long cacheSyncState;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSNumber *latestAffinityVersion;
@property(nonatomic) _Bool offlineMode;
@property(nonatomic) double refreshInterval;
@property(nonatomic) double invalidateInterval;
- (_Bool)isCacheCompatibleWithClientConfig:(PDLClientConfigInternal *)arg1 configurationService:(id <PDLConfigurationService>)arg2;
- (_Bool)isCacheExpired;
- (_Bool)isEmpty;
- (GPCPromise *)saveAll;
- (void)dropAutocompletionForGroupIDs:(NSArray *)arg1;
- (void)dropAutocompletionsForPersonIDs:(NSArray *)arg1;
- (void)drop;
- (GPCPromise *)cacheReadyPromise;
- (void)finishedAddingOrUpdatingAutocompletions;
- (void)addOrUpdateAutocompletion:(PDLAutocompletion *)arg1 groupID:(NSString *)arg2;
- (void)addOrUpdateAutocompletions:(NSArray *)arg1 personID:(NSString *)arg2;
- (NSArray *)allGroupAutocompletions;
- (NSDictionary *)allPersonAutocompletions;
- (NSArray *)allAutocompletions;
- (NSArray *)autocompletionsWithMethodFieldValues:(NSArray *)arg1;
- (PDLAutocompletion *)autocompletionWithGroupID:(NSString *)arg1;
- (NSArray *)autocompletionsWithPersonID:(NSString *)arg1;
- (_Bool)isCacheReady;
@end

