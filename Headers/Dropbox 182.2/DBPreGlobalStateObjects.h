//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBAppNoAuthClientProvider, DBAppStateTracker, DBAppStormcrowLogger, DBBackgroundProcessingRegistryImpl, DBDirectoryMap;
@protocol DBAccountManagerProtocol, DBNoauthLegacyStormcrow;

@interface DBPreGlobalStateObjects : NSObject
{
    id <DBAccountManagerProtocol> _accountManager;
    DBAppNoAuthClientProvider *_clientProvider;
    DBAppStormcrowLogger *_stormcrowLogger;
    DBDirectoryMap *_directoryMap;
    DBAppStateTracker *_appStateTracker;
    id <DBNoauthLegacyStormcrow> _stormcrow;
    id _featureGatingImplListener;
    DBBackgroundProcessingRegistryImpl *_processingRegistry;
}

+ (id)setupPreGlobalStateObjectsWithBackgroundProcessingRegistry:(id)arg1;
+ (id)setupPreGlobalStateObjects;
@property(retain, nonatomic) DBBackgroundProcessingRegistryImpl *processingRegistry; // @synthesize processingRegistry=_processingRegistry;
@property(readonly, nonatomic) id featureGatingImplListener; // @synthesize featureGatingImplListener=_featureGatingImplListener;
@property(readonly, nonatomic) id <DBNoauthLegacyStormcrow> stormcrow; // @synthesize stormcrow=_stormcrow;
@property(readonly, nonatomic) DBAppStateTracker *appStateTracker; // @synthesize appStateTracker=_appStateTracker;
@property(readonly, nonatomic) DBDirectoryMap *directoryMap; // @synthesize directoryMap=_directoryMap;
@property(readonly, nonatomic) DBAppStormcrowLogger *stormcrowLogger; // @synthesize stormcrowLogger=_stormcrowLogger;
@property(readonly, nonatomic) DBAppNoAuthClientProvider *clientProvider; // @synthesize clientProvider=_clientProvider;
@property(readonly, nonatomic) id <DBAccountManagerProtocol> accountManager; // @synthesize accountManager=_accountManager;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)arg1 noauthClient:(id)arg2 directoryMap:(id)arg3 stormcrowLogger:(id)arg4 stormcrow:(id)arg5;

@end

