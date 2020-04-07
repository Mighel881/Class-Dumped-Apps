//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBFILESMetadata.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILESFolderOverviewMetadata, DBFILESFolderSharingInfo, DBPERNODEMETADATAPerNodeMetadataEntity, NSArray, NSNumber, NSString;

@interface DBFILESFolderMetadata : DBFILESMetadata <DBSerializable, NSCopying>
{
    NSString *_id_;
    NSString *_sharedFolderId;
    DBFILESFolderSharingInfo *_sharingInfo;
    NSArray *_propertyGroups;
    NSString *_icon;
    NSNumber *_isTeamMemberFolder;
    NSNumber *_isVaultFolder;
    NSNumber *_isShareable;
    DBFILESFolderOverviewMetadata *_overviewMetadata;
    DBPERNODEMETADATAPerNodeMetadataEntity *_perNodeMetadata;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBPERNODEMETADATAPerNodeMetadataEntity *perNodeMetadata; // @synthesize perNodeMetadata=_perNodeMetadata;
@property(readonly, nonatomic) DBFILESFolderOverviewMetadata *overviewMetadata; // @synthesize overviewMetadata=_overviewMetadata;
@property(readonly, nonatomic) NSNumber *isShareable; // @synthesize isShareable=_isShareable;
@property(readonly, nonatomic) NSNumber *isVaultFolder; // @synthesize isVaultFolder=_isVaultFolder;
@property(readonly, nonatomic) NSNumber *isTeamMemberFolder; // @synthesize isTeamMemberFolder=_isTeamMemberFolder;
@property(readonly, copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSArray *propertyGroups; // @synthesize propertyGroups=_propertyGroups;
@property(readonly, nonatomic) DBFILESFolderSharingInfo *sharingInfo; // @synthesize sharingInfo=_sharingInfo;
@property(readonly, copy, nonatomic) NSString *sharedFolderId; // @synthesize sharedFolderId=_sharedFolderId;
@property(readonly, copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (_Bool)isEqualToFolderMetadata:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 id_:(id)arg2 icon:(id)arg3 isTeamMemberFolder:(id)arg4 isShareable:(id)arg5;
- (id)initWithName:(id)arg1 id_:(id)arg2 icon:(id)arg3 isTeamMemberFolder:(id)arg4 isShareable:(id)arg5 pathLower:(id)arg6 pathDisplay:(id)arg7 parentSharedFolderId:(id)arg8 sharedFolderId:(id)arg9 sharingInfo:(id)arg10 propertyGroups:(id)arg11 isVaultFolder:(id)arg12 overviewMetadata:(id)arg13 perNodeMetadata:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
