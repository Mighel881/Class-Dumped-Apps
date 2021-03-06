//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DBTransportClient;

@interface DBSHARINGUserAuthRoutes : NSObject
{
    id <DBTransportClient> _client;
}

@property(readonly, nonatomic) id <DBTransportClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)validateFolderPath:(id)arg1 confidentiality:(id)arg2 actions:(id)arg3 listMembersArg:(id)arg4 isContainingPath:(id)arg5;
- (id)validateFolderPath:(id)arg1;
- (id)updateFolderPolicy:(id)arg1 memberPolicy:(id)arg2 aclUpdatePolicy:(id)arg3 viewerInfoPolicy:(id)arg4 sharedLinkPolicy:(id)arg5 linkSettings:(id)arg6 actions:(id)arg7;
- (id)updateFolderPolicy:(id)arg1;
- (id)updateFilePolicy:(id)arg1 actions:(id)arg2 linkSettings:(id)arg3 viewerInfoPolicy:(id)arg4;
- (id)updateFilePolicy:(id)arg1;
- (id)updateFileMember:(id)arg1 member:(id)arg2 accessLevel:(id)arg3;
- (id)unshareFolder:(id)arg1 leaveACopy:(id)arg2;
- (id)unshareFolder:(id)arg1;
- (id)unshareFile:(id)arg1;
- (id)unmountFolder:(id)arg1;
- (id)targetsSearch:(id)arg1 forceRefresh:(id)arg2 contentId:(id)arg3 limit:(id)arg4;
- (id)targetsSearch;
- (id)shareFolderInternal:(id)arg1 aclUpdatePolicy:(id)arg2 forceAsync:(id)arg3 memberPolicy:(id)arg4 sharedLinkPolicy:(id)arg5 viewerInfoPolicy:(id)arg6 accessInheritance:(id)arg7 actions:(id)arg8 confidentiality:(id)arg9 linkSettings:(id)arg10 shouldBeNewPath:(id)arg11 fswRequest:(id)arg12 isPaperMigration:(id)arg13;
- (id)shareFolderInternal:(id)arg1;
- (id)shareFolder:(id)arg1 aclUpdatePolicy:(id)arg2 forceAsync:(id)arg3 memberPolicy:(id)arg4 sharedLinkPolicy:(id)arg5 viewerInfoPolicy:(id)arg6 accessInheritance:(id)arg7 actions:(id)arg8 linkSettings:(id)arg9;
- (id)shareFolder:(id)arg1;
- (id)shareFile:(id)arg1 actions:(id)arg2;
- (id)shareFile:(id)arg1;
- (id)revokeSharedLink:(id)arg1;
- (id)removeFolderMember:(id)arg1 member:(id)arg2 leaveACopy:(id)arg3;
- (id)removeFileMember2:(id)arg1 member:(id)arg2;
- (id)relinquishFolderMembership:(id)arg1 leaveACopy:(id)arg2;
- (id)relinquishFolderMembership:(id)arg1;
- (id)modifySharedLinkSettings:(id)arg1 settings:(id)arg2 removeExpiration:(id)arg3;
- (id)modifySharedLinkSettings:(id)arg1 settings:(id)arg2;
- (id)listSharedLinks:(id)arg1 cursor:(id)arg2 directOnly:(id)arg3 appKey:(id)arg4;
- (id)listSharedLinks;
- (id)listMountableFoldersContinue:(id)arg1;
- (id)listMountableFolders:(id)arg1 actions:(id)arg2;
- (id)listMountableFolders;
- (id)listFoldersContinue:(id)arg1;
- (id)listFolders:(id)arg1 actions:(id)arg2;
- (id)listFolders;
- (id)listFolderMembersContinue:(id)arg1;
- (id)listFolderMembers:(id)arg1 actions:(id)arg2 limit:(id)arg3;
- (id)listFolderMembers:(id)arg1;
- (id)listFileMembersContinue:(id)arg1;
- (id)listFileMembersBatch:(id)arg1 limit:(id)arg2;
- (id)listFileMembersBatch:(id)arg1;
- (id)listFileMembers:(id)arg1 actions:(id)arg2 includeInherited:(id)arg3 limit:(id)arg4;
- (id)listFileMembers:(id)arg1;
- (id)internalTestOnlyGetFolderSharedContentLink:(id)arg1 members:(id)arg2 genEmailLink:(id)arg3;
- (id)getGrantAccessAction:(id)arg1;
- (id)getFolderMetadata2:(id)arg1 actions:(id)arg2;
- (id)getFolderMetadata2:(id)arg1;
- (id)getFolderMetadata:(id)arg1 actions:(id)arg2;
- (id)getFolderMetadata:(id)arg1;
- (id)getFileMetadataBatch:(id)arg1 actions:(id)arg2;
- (id)getFileMetadataBatch:(id)arg1;
- (id)getFileMetadata:(id)arg1 actions:(id)arg2;
- (id)getFileMetadata:(id)arg1;
- (id)createSharedLinkWithSettings:(id)arg1 settings:(id)arg2 appKey:(id)arg3;
- (id)createSharedLinkWithSettings:(id)arg1;
- (id)createDirectLink:(id)arg1 appKey:(id)arg2;
- (id)checkShareJobStatus:(id)arg1;
- (id)checkShareInternalJobStatus:(id)arg1;
- (id)checkJobStatus:(id)arg1;
- (id)changeFileMemberAccess:(id)arg1 member:(id)arg2 accessLevel:(id)arg3;
- (id)alphaShareFile:(id)arg1 actions:(id)arg2;
- (id)alphaShareFile:(id)arg1;
- (id)alphaGetFolderMetadata:(id)arg1 actions:(id)arg2;
- (id)alphaGetFolderMetadata:(id)arg1;
- (id)alphaGetFileMetadata:(id)arg1 url:(id)arg2 actions:(id)arg3;
- (id)alphaGetFileMetadata:(id)arg1;
- (id)addFolderMember:(id)arg1 members:(id)arg2 quiet:(id)arg3 customMessage:(id)arg4 isPaperMigration:(id)arg5;
- (id)addFolderMember:(id)arg1 members:(id)arg2;
- (id)addFileMember:(id)arg1 members:(id)arg2 customMessage:(id)arg3 quiet:(id)arg4 accessLevel:(id)arg5 addMessageAsComment:(id)arg6 isPaperMigration:(id)arg7;
- (id)addFileMember:(id)arg1 members:(id)arg2;
- (id)init:(id)arg1;

@end

