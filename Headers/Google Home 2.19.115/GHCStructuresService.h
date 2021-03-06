//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRPCProtoService.h"

#import "GHCStructuresService-Protocol.h"
#import "GHCStructuresService2-Protocol.h"

@class NSString;

@interface GHCStructuresService : GRPCProtoService <GHCStructuresService2, GHCStructuresService>
{
}

+ (id)serviceWithHost:(id)arg1 callOptions:(id)arg2;
+ (id)serviceWithHost:(id)arg1;
- (id)verifyAddressWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToVerifyAddressWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)verifyAddressWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)sendRemoveManagerEmailWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToSendRemoveManagerEmailWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendRemoveManagerEmailWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getWorksWithNestStateWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetWorksWithNestStateWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWorksWithNestStateWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)unpairWeaveDeviceWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToUnpairWeaveDeviceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unpairWeaveDeviceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createNestStructureWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateNestStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createNestStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getPhoenixStructureIdsByLegacyIdsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetPhoenixStructureIdsByLegacyIdsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getPhoenixStructureIdsByLegacyIdsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)updatePairingConfigurationDoneWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToUpdatePairingConfigurationDoneWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updatePairingConfigurationDoneWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getWeavePairingInfoWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetWeavePairingInfoWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWeavePairingInfoWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)updateStructurePresenceWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToUpdateStructurePresenceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateStructurePresenceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getInvitedStructureWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetInvitedStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getInvitedStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getStructureEventsWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetStructureEventsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getStructureEventsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)convertApplicantToInviteeWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToConvertApplicantToInviteeWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)convertApplicantToInviteeWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)rejectApplicationForInviteWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToRejectApplicationForInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)rejectApplicationForInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createApplicationForInviteWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateApplicationForInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createApplicationForInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)acceptManagerInviteWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToAcceptManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)acceptManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)rejectManagerInviteWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToRejectManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)rejectManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)deleteManagerInviteWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToDeleteManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)resendManagerInviteEmailWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToResendManagerInviteEmailWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)resendManagerInviteEmailWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)listUserRolesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToListUserRolesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)listUserRolesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)changeUserRoleWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToChangeUserRoleWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)changeUserRoleWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createInviteeWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateInviteeWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createInviteeWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createManagerInviteWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createManagerInviteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getUserAddressWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetUserAddressWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getUserAddressWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getHomeGraphWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetHomeGraphWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getHomeGraphWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)removeDevicesLabelWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToRemoveDevicesLabelWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeDevicesLabelWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)removeSpacesLabelWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToRemoveSpacesLabelWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeSpacesLabelWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)renameSpacesLabelWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToRenameSpacesLabelWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)renameSpacesLabelWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)batchModifyStructuresDevicesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToBatchModifyStructuresDevicesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)batchModifyStructuresDevicesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)removeStructureManagerWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToRemoveStructureManagerWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeStructureManagerWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)listStructuresWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToListStructuresWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)listStructuresWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)deleteStructureWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToDeleteStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)updateStructureV2WithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToUpdateStructureV2WithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateStructureV2WithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)updateStructureWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToUpdateStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getStructureWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createStructureWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createStructureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3 callOptions:(id)arg4;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 callOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

