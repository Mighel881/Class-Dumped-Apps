//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/RegistrationHandler-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BRManifestCache : NSObject <RegistrationHandler>
{
    _Bool _isPruning;
    _Bool _isManifestCacheEnabled;
    long long _cacheMaxSize;
    NSDate *_lastPruneCheck;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_manifestCaches;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isManifestCacheEnabled; // @synthesize isManifestCacheEnabled=_isManifestCacheEnabled;
@property(retain, nonatomic) NSMutableDictionary *manifestCaches; // @synthesize manifestCaches=_manifestCaches;
@property(nonatomic) _Bool isPruning; // @synthesize isPruning=_isPruning;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSDate *lastPruneCheck; // @synthesize lastPruneCheck=_lastPruneCheck;
@property(nonatomic) long long cacheMaxSize; // @synthesize cacheMaxSize=_cacheMaxSize;
- (void).cxx_destruct;
- (void)removeAllManifestsForMovieId:(id)arg1;
- (id)getManifestLinks:(id)arg1 arguments:(id)arg2;
- (id)getManifest:(id)arg1 arguments:(id)arg2;
- (void)addManifestLinks:(id)arg1 forMovieId:(id)arg2 arguments:(id)arg3;
- (void)addManifest:(id)arg1 forMovieId:(id)arg2 arguments:(id)arg3;
- (id)_uniqueSuffixForId:(id)arg1 arguments:(id)arg2;
- (_Bool)_doArgumentsIndicateTheSameRequest:(id)arg1 arguments:(id)arg2;
- (_Bool)_doStringEntriesMatch:(id)arg1 thisDictionary:(id)arg2 thatDictionary:(id)arg3;
- (void)_addDictionary:(id)arg1 forName:(id)arg2 movieId:(id)arg3;
- (id)_getDictionaryForName:(id)arg1 movieId:(id)arg2;
- (void)_pruneExpiringManifests;
- (void)_removeExpiredManifests:(id)arg1;
- (id)_getManifestExpiration:(id)arg1 name:(id)arg2;
- (void)clearCurrentCache;
- (id)init;
- (_Bool)_isManifestCacheEnabled;
- (id)_cacheForCurrentProfile;
- (void)handleWillDeactivate;
- (void)_clearEntireCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

