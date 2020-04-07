//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBUserPersistentStatesManagerProtocol-Protocol.h"

@class DBAPIAppClient, DBAccessibilityAnalyticsManager, DBAdIdLogger, DBAdjustLogger, DBAppNoAuthClientProvider, DBAppShortcutItemsManager, DBAppStateTracker, DBAppStormcrowLogger, DBBackgroundFetchManager, DBBackgroundProcessingRegistryImpl, DBBackgroundURLSessionDispatcher, DBCameraUploadManager, DBCompanyDropboxModelManager, DBDogfoodController, DBEnterpriseManagement, DBExternalDisplayManager, DBGlobalAccountManager, DBGlobalBadgeUpdater, DBLoginControllerFactory, DBMarketingEmailOptOutManager, DBNotificationHandler, DBOfflineManagerMultiAccountSupport, DBOfflineSettings, DBOpenWithInstallManager, DBPictureInPictureManager, DBPreviewableExtensionsManager, DBPromotedAppStorePurchaseVisibilityManager, DBRequestEventLogHelper, DBResourceLoader, DBSpotlightDatabase, DBSpotlightSupervisor, DBStateRestorationManager, DBStoreKit, DBSystemIdleTimerController, DBThemeLogger, DBUserDefaults, NSMutableDictionary, NSString, _TtC7Dropbox10BoltClient;
@protocol DBAccountManagerProtocol, DBClientDeprecationMonitor, DBNoauthLegacyStormcrow, DBUserStateManagerProtocol><DBUserStateManagerAccountOperationProtocol, MetricsReporter, _TtP33dbx_core_stormcrow_protocol_swift23DBNoauthLegacyStormcrow_;

@interface DBGlobalState : NSObject <DBUserPersistentStatesManagerProtocol>
{
    DBUserDefaults *_userDefaults;
    DBAccessibilityAnalyticsManager *_accessibilityAnalyticsManager;
    DBOpenWithInstallManager *_openWithInstallManager;
    DBSpotlightSupervisor *_spotlightSupervisor;
    NSMutableDictionary *_sharedLinkToSessionIds;
    NSMutableDictionary *_unauthenticatedSharedLinkStatesCount;
    DBAppNoAuthClientProvider *_clientProvider;
    DBAppStormcrowLogger *_stormcrowLogger;
    DBAppStateTracker *_appStateTracker;
    DBDogfoodController *_dogfoodController;
    DBThemeLogger *_themeLogger;
    DBRequestEventLogHelper *_requestEventLogHelper;
    DBPromotedAppStorePurchaseVisibilityManager *_promotedAppStorePurchaseVisibilityManager;
    id <DBClientDeprecationMonitor> _deprecationMonitor;
    _TtC7Dropbox10BoltClient *_boltClient;
    id <_TtP33dbx_core_stormcrow_protocol_swift23DBNoauthLegacyStormcrow_> _stormcrow;
    id _featureGatingListener;
    DBAppShortcutItemsManager *_appShortcutItemsManager;
    id <DBUserStateManagerProtocol><DBUserStateManagerAccountOperationProtocol> _userStateManager;
    DBGlobalAccountManager *_globalAccountManager;
    DBCameraUploadManager *_cameraUploadManager;
    DBOfflineSettings *_offlineSettings;
    DBStateRestorationManager *_stateRestorationManager;
    DBNotificationHandler *_notificationHandler;
    DBResourceLoader *_resourceLoader;
    DBSpotlightDatabase *_spotlightDatabase;
    DBEnterpriseManagement *_enterpriseManagement;
    DBPictureInPictureManager *_pictureInPictureManager;
    DBSystemIdleTimerController *_systemIdleTimerController;
    DBOfflineManagerMultiAccountSupport *_offlineSupport;
    DBCompanyDropboxModelManager *_companyDropboxModelManager;
    DBExternalDisplayManager *_externalDisplayManager;
    DBGlobalBadgeUpdater *_globalBadgeUpdater;
    DBBackgroundFetchManager *_backgroundFetchManager;
    DBPreviewableExtensionsManager *_previewManager;
    DBStoreKit *_storeKit;
    DBAPIAppClient *_noAuthApiClient;
    id <DBAccountManagerProtocol> _accountManager;
    DBMarketingEmailOptOutManager *_marketingEmailOptOutManager;
    id <MetricsReporter> _metricsReporter;
    DBLoginControllerFactory *_loginControllerFactory;
    DBAdIdLogger *_adIdLogger;
    DBAdjustLogger *_adjustLogger;
    DBBackgroundProcessingRegistryImpl *_processingRegistry;
    DBBackgroundURLSessionDispatcher *_backgroundSessionDispatcher;
}

+ (void)db_updateSettingsForNoAuthStormcrow:(id)arg1;
+ (void)debug_resetShownWhatIsDropboxTour;
+ (void)setShownWhatIsDropboxTour;
+ (_Bool)hasShownWhatIsDropboxTour;
+ (void)setupWithPreGlobalStateObjects:(id)arg1;
+ (id)sharedGlobalState;
+ (void)test_setGlobalState:(id)arg1;
@property(readonly, nonatomic) DBBackgroundURLSessionDispatcher *backgroundSessionDispatcher; // @synthesize backgroundSessionDispatcher=_backgroundSessionDispatcher;
@property(readonly, nonatomic) DBBackgroundProcessingRegistryImpl *processingRegistry; // @synthesize processingRegistry=_processingRegistry;
@property(readonly, nonatomic) DBAdjustLogger *adjustLogger; // @synthesize adjustLogger=_adjustLogger;
@property(readonly, nonatomic) DBAdIdLogger *adIdLogger; // @synthesize adIdLogger=_adIdLogger;
@property(readonly, nonatomic) DBLoginControllerFactory *loginControllerFactory; // @synthesize loginControllerFactory=_loginControllerFactory;
@property(readonly, nonatomic) id <MetricsReporter> metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(readonly, nonatomic) DBMarketingEmailOptOutManager *marketingEmailOptOutManager; // @synthesize marketingEmailOptOutManager=_marketingEmailOptOutManager;
@property(readonly, nonatomic) id <DBAccountManagerProtocol> accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) _TtC7Dropbox10BoltClient *boltClient; // @synthesize boltClient=_boltClient;
@property(readonly, nonatomic) DBAPIAppClient *noAuthApiClient; // @synthesize noAuthApiClient=_noAuthApiClient;
@property(readonly, nonatomic) id <DBClientDeprecationMonitor> deprecationMonitor; // @synthesize deprecationMonitor=_deprecationMonitor;
@property(readonly, nonatomic) DBStoreKit *storeKit; // @synthesize storeKit=_storeKit;
@property(readonly, nonatomic) DBPreviewableExtensionsManager *previewManager; // @synthesize previewManager=_previewManager;
@property(readonly, nonatomic) DBBackgroundFetchManager *backgroundFetchManager; // @synthesize backgroundFetchManager=_backgroundFetchManager;
@property(readonly, nonatomic) DBGlobalBadgeUpdater *globalBadgeUpdater; // @synthesize globalBadgeUpdater=_globalBadgeUpdater;
@property(readonly, nonatomic) DBExternalDisplayManager *externalDisplayManager; // @synthesize externalDisplayManager=_externalDisplayManager;
@property(readonly, nonatomic) DBCompanyDropboxModelManager *companyDropboxModelManager; // @synthesize companyDropboxModelManager=_companyDropboxModelManager;
@property(readonly, nonatomic) DBOfflineManagerMultiAccountSupport *offlineSupport; // @synthesize offlineSupport=_offlineSupport;
@property(readonly, nonatomic) DBSystemIdleTimerController *systemIdleTimerController; // @synthesize systemIdleTimerController=_systemIdleTimerController;
@property(readonly, nonatomic) DBPictureInPictureManager *pictureInPictureManager; // @synthesize pictureInPictureManager=_pictureInPictureManager;
@property(readonly, nonatomic) DBEnterpriseManagement *enterpriseManagement; // @synthesize enterpriseManagement=_enterpriseManagement;
@property(readonly, nonatomic) DBSpotlightDatabase *spotlightDatabase; // @synthesize spotlightDatabase=_spotlightDatabase;
@property(readonly, nonatomic) DBResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) DBNotificationHandler *notificationHandler; // @synthesize notificationHandler=_notificationHandler;
@property(readonly, nonatomic) DBStateRestorationManager *stateRestorationManager; // @synthesize stateRestorationManager=_stateRestorationManager;
@property(readonly, nonatomic) DBOfflineSettings *offlineSettings; // @synthesize offlineSettings=_offlineSettings;
@property(readonly, nonatomic) DBCameraUploadManager *cameraUploadManager; // @synthesize cameraUploadManager=_cameraUploadManager;
@property(readonly, nonatomic) DBGlobalAccountManager *globalAccountManager; // @synthesize globalAccountManager=_globalAccountManager;
@property(readonly, nonatomic) id <DBUserStateManagerProtocol><DBUserStateManagerAccountOperationProtocol> userStateManager; // @synthesize userStateManager=_userStateManager;
@property(readonly, nonatomic) DBAppShortcutItemsManager *appShortcutItemsManager; // @synthesize appShortcutItemsManager=_appShortcutItemsManager;
- (void).cxx_destruct;
- (void)retryMigrationForCDMMigrationViewPresenter:(id)arg1;
- (void)teardownUnauthenticatedSharedLinkState:(id)arg1;
- (id)setupUnauthenticatedSharedLink:(id)arg1 password:(id)arg2;
- (id)fileCacheForNoAccountAndSharedLink:(id)arg1;
- (id)fileCacheForAccountRole:(int)arg1 sharedLink:(id)arg2;
@property(readonly, nonatomic) id <DBNoauthLegacyStormcrow> stormcrow;
- (void)checkStatesAgainstLinkedUserIds:(id)arg1 cacheIds:(id)arg2;
- (void)setNotificationDeviceToken:(id)arg1;
- (id)notificationDeviceToken;
- (void)setDidShowPreNotificationPermissionUi;
- (_Bool)didShowPreNotificationPermissionUi;
- (void)fixDidShowPreNotificationPermissionUi;
- (void)fixDidAskForNotificationPermission;
- (void)setDidAskForNotificationPermission:(_Bool)arg1;
- (_Bool)didAskForNotificationPermission;
- (void)setCanAskForNotificationPermission:(_Bool)arg1;
- (_Bool)canAskForNotificationPermissions;
- (id)initWithPreGlobalStateObjects:(id)arg1;
- (_Bool)shouldCreateMetricsReporterWithStormcrow:(id)arg1;
- (id)createMetricsReporterWithApiClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
