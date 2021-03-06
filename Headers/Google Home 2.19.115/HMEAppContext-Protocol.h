//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTSettings, AnalyticsLogger, GCAFlags, GCKCastContext, GIPPseudonymousIDStore, HMEBackupProtectedFileManager, HMECastCertificateManager, HMEEnvironment, HMELogCoordinator, NSString, SRLRegistry, SetupAnalyticsLogger, SetupDeviceScanner;
@protocol BluetoothDeviceScanner, GTMSessionFetcherServiceProtocol, HMEAccountLinkingCoordinator, HMEAppReviewManager, HMEAssistantContactUploaderCoordinator, HMEAssistantContactUploaderService, HMEAssistantCoordinator, HMEAuthCoordinator, HMECastDeviceMediaServiceProtocol, HMEGrowthKitCoordinator, HMELinkOpener, HMELocalDeviceData, HMENotificationsManagerProtocol, HMETAGContainer, SSOService;

@protocol HMEAppContext <NSObject>
@property(readonly, nonatomic) HMELogCoordinator *logCoodinator;
@property(readonly, nonatomic) SRLRegistry *serviceRegistry;
@property(readonly, nonatomic) HMEBackupProtectedFileManager *backupProtectedFileManager;
@property(readonly, nonatomic) GCAFlags *flags;
@property(readonly, nonatomic) id <HMENotificationsManagerProtocol> notificationsManager;
@property(readonly, nonatomic) id <HMETAGContainer> TAGContainer;
@property(readonly, nonatomic) id <GTMSessionFetcherServiceProtocol> fetcherService;
@property(readonly, nonatomic) HMEEnvironment *environment;
@property(readonly, nonatomic) SetupAnalyticsLogger *setupAnalyticsLogger;
@property(readonly, nonatomic) CDUnknownBlockType welcomeCoordinatorFactory;
@property(readonly, nonatomic) id <HMECastDeviceMediaServiceProtocol> castDeviceMediaService;
@property(readonly, nonatomic) GCKCastContext *castContext;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData;
@property(readonly, nonatomic) id <BluetoothDeviceScanner> bluetoothScanner;
@property(readonly, nonatomic) SetupDeviceScanner *deviceScanner;
@property(readonly, nonatomic) HMECastCertificateManager *castCertificateManager;
@property(readonly, nonatomic) AnalyticsLogger *analyticsLogger;
@property(readonly, nonatomic) GIPPseudonymousIDStore *pseudonymousIDStore;
@property(readonly, nonatomic) id <HMEAssistantContactUploaderService> contactUploader;
@property(readonly, nonatomic) id <HMEAssistantContactUploaderCoordinator> contactUploaderCoordinator;
@property(readonly, nonatomic) id <HMEAssistantCoordinator> assistantCoordinator;
@property(readonly, nonatomic) ASTSettings *assistantSettings;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener;
@property(readonly, nonatomic) id <HMEGrowthKitCoordinator> growthKitCoordinator;
@property(readonly, nonatomic) CDUnknownBlockType appUpdateRequiredCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType helpCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType breakpadCoordinatorFactory;
@property(readonly, nonatomic) id <HMEAppReviewManager> appReviewManager;
@property(readonly, nonatomic) id <HMEAccountLinkingCoordinator> accountLinkingCoordinator;
@property(readonly, nonatomic) NSString *APIKey;
@property(readonly, nonatomic) id <HMEAuthCoordinator> authCoordinator;
@property(readonly, nonatomic) id <SSOService> SSOService;
@end

