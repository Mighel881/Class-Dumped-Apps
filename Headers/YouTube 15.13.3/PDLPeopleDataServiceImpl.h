//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLPeopleDataInternalService-Protocol.h"
#import "PDLPeopleDataService-Protocol.h"

@class NSString, PDLLookupService, Reachability;
@protocol GIPAccountID, PDLCacheService, PDLConfigurationService, PDLDataService, PDLExperimentsService, PDLMetricsLoggerFactory, PDLPersonFieldFactory, PDLPhenotypeFlags;

@interface PDLPeopleDataServiceImpl : NSObject <PDLPeopleDataInternalService, PDLPeopleDataService>
{
    _Bool _isNonGAIAAccount;
    id <PDLPersonFieldFactory> _fieldFactory;
    id <PDLDataService> _autocompleteDataService;
    PDLLookupService *_lookupService;
    id <PDLCacheService> _cacheService;
    Reachability *_reachability;
    id <GIPAccountID> _accountID;
    id <PDLMetricsLoggerFactory> _metricsLoggerFactory;
    id <PDLConfigurationService> _configurationService;
    long long _mostRecentClientID;
    id <PDLExperimentsService> _experimentsService;
}

@property(retain, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(nonatomic) long long mostRecentClientID; // @synthesize mostRecentClientID=_mostRecentClientID;
@property(nonatomic) _Bool isNonGAIAAccount; // @synthesize isNonGAIAAccount=_isNonGAIAAccount;
@property(readonly, nonatomic) id <PDLConfigurationService> configurationService; // @synthesize configurationService=_configurationService;
@property(readonly, nonatomic) id <PDLMetricsLoggerFactory> metricsLoggerFactory; // @synthesize metricsLoggerFactory=_metricsLoggerFactory;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) id <PDLCacheService> cacheService; // @synthesize cacheService=_cacheService;
@property(readonly, nonatomic) PDLLookupService *lookupService; // @synthesize lookupService=_lookupService;
@property(retain, nonatomic) id <PDLDataService> autocompleteDataService; // @synthesize autocompleteDataService=_autocompleteDataService;
@property(readonly, nonatomic) id <PDLPersonFieldFactory> fieldFactory; // @synthesize fieldFactory=_fieldFactory;
- (void).cxx_destruct;
- (void)setTopNCacheUpdateIntervalWithClientID:(long long)arg1;
- (id)autocompleteDataServiceForClientConfig:(id)arg1;
- (id)prepareForAutocompleteSessionWithClientConfig:(id)arg1 sessionContext:(id)arg2 autocompleteDataService:(id)arg3 bootstrapStarlight:(_Bool)arg4;
- (id)autocompleteSessionForClientConfig:(id)arg1 callback:(CDUnknownBlockType)arg2 sessionContext:(id)arg3 autocompleteDataService:(id)arg4 bootstrapStarlight:(_Bool)arg5;
- (id)autocompleteSessionForClientConfig:(id)arg1 callback:(CDUnknownBlockType)arg2 sessionContext:(id)arg3;
- (void)forceUpdateServerDataCache:(long long)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <PDLPhenotypeFlags> phenotypeFlags;
- (void)updateDataCache:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (id)warmUpForClientID:(long long)arg1 withOptions:(id)arg2;
- (id)personWithID:(id)arg1 options:(id)arg2 clientID:(long long)arg3;
- (void)peopleWithIDs:(id)arg1 options:(id)arg2 clientID:(long long)arg3 callback:(CDUnknownBlockType)arg4;
- (id)beginAutocompleteSession:(long long)arg1 callback:(CDUnknownBlockType)arg2 sessionContext:(id)arg3;
- (id)initWithAccountID:(id)arg1 peopleDataServiceDependencies:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
