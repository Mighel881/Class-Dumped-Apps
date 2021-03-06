//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDeviceAuthData-Protocol.h"
#import "HMEDeviceData-Protocol.h"

@class HMECoreDataStack, HMEDeviceNetworkService, NSString;

@interface HMEDeviceModelController : NSObject <HMEDeviceData, HMEDeviceAuthData>
{
    HMEDeviceNetworkService *_networkService;
    HMECoreDataStack *_coreDataStack;
    double _lastDeviceAssociationNetworkRequestTime;
}

@property(nonatomic) double lastDeviceAssociationNetworkRequestTime; // @synthesize lastDeviceAssociationNetworkRequestTime=_lastDeviceAssociationNetworkRequestTime;
@property(readonly, nonatomic) HMECoreDataStack *coreDataStack; // @synthesize coreDataStack=_coreDataStack;
@property(readonly, nonatomic) HMEDeviceNetworkService *networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (id)fetchDevicesWithPredicate:(id)arg1 sortDescriptor:(id)arg2;
- (void)persistDeviceProto:(id)arg1 spaceProtos:(id)arg2 forStructure:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)persistDeviceProto:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)persistDeletedDeviceWithDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizedDeviceTypeForID:(id)arg1;
- (id)deviceForDeviceID:(id)arg1;
- (id)listSpacelessDevicesInStructure:(id)arg1;
- (id)listDevicesWithTypeIn:(id)arg1 andTrait:(id)arg2 inStructure:(id)arg3;
- (id)listUnassignedDevicesAndDevicesInStructure:(id)arg1 withTrait:(id)arg2;
- (id)listDevicesInSpace:(id)arg1;
- (id)listUnassignedDevicesAndDevicesInStructure:(id)arg1;
- (id)listUnassignedDevices;
- (id)listDevicesInStructure:(id)arg1;
- (id)listDevices;
- (void)recordDeviceArbitrationConsentForCloudDeviceID:(id)arg1 deviceType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDeviceFixture:(id)arg1 forPhoenixDeviceID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listValidFixturesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPhoenixPairingStateForDeviceID:(id)arg1 structureID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enterWeavePairingModeForDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAssistantDeviceSettingsForDeviceWithID:(id)arg1 withMutation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAssistantDeviceSettingsForDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)localAuthTokensForCloudDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)localAuthTokenForCloudDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)deviceObjectsEligibleForSupervisionSettings;
- (id)deviceObjectForDeviceID:(id)arg1;
- (unsigned long long)countOfDevicesMatchingDisplayName:(id)arg1 structureID:(id)arg2 excludingDeviceWithID:(id)arg3 error:(id *)arg4;
- (void)updateDeviceSupervisionSettingsForDeviceIDs:(id)arg1 settingsMutation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeviceSupervisionSettingsForDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBootstrappedDevicesWithDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)linkSpeakerGroupWithAgentDeviceID:(id)arg1 groupLeaderDeviceID:(id)arg2 groupLeaderClientCertificate:(id)arg3 tosVersion:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)linkDeviceWithAgentDeviceID:(id)arg1 clientCertificate:(id)arg2 tosVersion:(int)arg3 SSIDSuffix:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchDeviceAssociations:(id)arg1 forDeviceIDs:(id)arg2;
- (id)fetchDeviceAssociationsForDeviceIDs:(id)arg1;
- (void)registerForDeviceReadyNotificationWithGCMToken:(id)arg1 deviceID:(id)arg2 SSIDSuffix:(id)arg3 deviceCapabilities:(id)arg4 deviceTypeName:(id)arg5 setupSessionID:(int)arg6 completion:(CDUnknownBlockType)arg7;
- (void)deleteDeviceWithDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDisplayName:(id)arg1 forDeviceWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createDeviceWithDisplayName:(id)arg1 SSIDSuffix:(id)arg2 deviceCapabilities:(id)arg3 clientCertificate:(id)arg4 tosVersion:(int)arg5 agentDeviceID:(id)arg6 inExistingSpace:(id)arg7 inNewSpaceWithDisplayName:(id)arg8 andSpaceType:(id)arg9 inStructure:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (id)initWithNetworkService:(id)arg1 coreDataStack:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

