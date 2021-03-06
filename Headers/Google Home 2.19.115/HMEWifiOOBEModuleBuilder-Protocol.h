//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HMECoreDataStack, SSOIdentity;
@protocol AnalyticsSink, GCAConfigurationFlags, GNAFrontendGroupsService2, GWCGroupsService2, GWCInsightsService2, GWCNetworkSettingsService2, GWCOobeService2, GWCOperationsService2, GWCUtilityService2, HMEAuditRecorder, HMEConsentLoggingService, HMEDeviceData, HMELinkOpener, HMESetupAPIProtocol, HMESpaceData, HMEStructureData, HMEUserData, HMEWifiOOBEModule, JETHalfcourtClient, SSOAuthorization, SSOService, _TtP47googlemac_iPhone_Home_Wifi_System_WifiInterface13WifiInterface_;

@protocol HMEWifiOOBEModuleBuilder
- (id <HMEWifiOOBEModule>)buildForObjc;
@property(nonatomic, retain) id <HMELinkOpener> linkOpener;
@property(nonatomic, copy) CDUnknownBlockType helpCoordinatorFactory;
@property(nonatomic, retain) id <HMESpaceData> spaceData;
@property(nonatomic, retain) id <GWCUtilityService2> utilityService;
@property(nonatomic, retain) id <GWCOperationsService2> operationsService;
@property(nonatomic, retain) id <GWCOobeService2> oobeService;
@property(nonatomic, retain) id <GWCGroupsService2> groupsService;
@property(nonatomic, retain) id <GWCInsightsService2> insightsService;
@property(nonatomic, retain) id <GWCNetworkSettingsService2> networkSettingsService;
@property(nonatomic, retain) id <HMEAuditRecorder> auditRecorder;
@property(nonatomic, retain) id <HMEConsentLoggingService> consentLoggingService;
@property(nonatomic, retain) id <SSOAuthorization> authorization;
@property(nonatomic, retain) HMECoreDataStack *coreDataStack;
@property(nonatomic, retain) id <GCAConfigurationFlags> flags;
@property(nonatomic, retain) id <SSOService> SSOService;
@property(nonatomic, retain) SSOIdentity *identity;
@property(nonatomic, retain) id <HMEDeviceData> deviceData;
@property(nonatomic, retain) id <HMEStructureData> structureData;
@property(nonatomic, retain) id <HMEUserData> userData;
@property(nonatomic, retain) id <GNAFrontendGroupsService2> frontendGroupsService;
@property(nonatomic, retain) id <AnalyticsSink> analyticsLogger;
@property(nonatomic, retain) id <_TtP47googlemac_iPhone_Home_Wifi_System_WifiInterface13WifiInterface_> wifiInterface;
@property(nonatomic, retain) id <JETHalfcourtClient> cloudAPI;
@property(nonatomic, retain) id <HMESetupAPIProtocol> localAPI;
@end

