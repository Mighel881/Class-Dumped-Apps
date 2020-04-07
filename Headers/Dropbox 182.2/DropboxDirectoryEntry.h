//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBCloudDocInfo, DBDropboxPath, DBFileLockingInfo, DBMetadataModifier, NSDate, NSString;

@interface DropboxDirectoryEntry : NSObject
{
    NSString *_filename;
    NSDate *_clientModifiedDate;
    _Bool _isDirectory;
    _Bool _isDeleted;
    _Bool _isReadOnly;
    _Bool _isNoAccess;
    _Bool _isTeamMemberFolder;
    _Bool _isParentSharedFolderReadOnly;
    _Bool _isTeamFolder;
    _Bool _isSymlink;
    NSString *_parentSharedFolderId;
    NSString *_sharedFolderId;
    NSString *_rev;
    unsigned long long _bytes;
    NSDate *_modifiedDate;
    DBMetadataModifier *_modifier;
    NSString *_iconName;
    DBDropboxPath *_filePath;
    NSString *_userId;
    NSString *_cameraUploadHash;
    DBCloudDocInfo *_cloudDocInfo;
    NSString *_fileContentHash;
    DBFileLockingInfo *_fileLockingInfo;
}

@property(readonly, nonatomic) DBFileLockingInfo *fileLockingInfo; // @synthesize fileLockingInfo=_fileLockingInfo;
@property(readonly, nonatomic) NSString *fileContentHash; // @synthesize fileContentHash=_fileContentHash;
@property(readonly, nonatomic) _Bool isSymlink; // @synthesize isSymlink=_isSymlink;
@property(readonly, nonatomic) DBCloudDocInfo *cloudDocInfo; // @synthesize cloudDocInfo=_cloudDocInfo;
@property(readonly, nonatomic) NSString *cameraUploadHash; // @synthesize cameraUploadHash=_cameraUploadHash;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) DBDropboxPath *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, nonatomic) DBMetadataModifier *modifier; // @synthesize modifier=_modifier;
@property(readonly, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) unsigned long long bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) NSString *rev; // @synthesize rev=_rev;
@property(readonly, nonatomic) _Bool isTeamFolder; // @synthesize isTeamFolder=_isTeamFolder;
@property(readonly, nonatomic) NSString *sharedFolderId; // @synthesize sharedFolderId=_sharedFolderId;
@property(readonly, nonatomic) NSString *parentSharedFolderId; // @synthesize parentSharedFolderId=_parentSharedFolderId;
@property(readonly, nonatomic) _Bool isParentSharedFolderReadOnly; // @synthesize isParentSharedFolderReadOnly=_isParentSharedFolderReadOnly;
@property(readonly, nonatomic) _Bool isTeamMemberFolder; // @synthesize isTeamMemberFolder=_isTeamMemberFolder;
@property(readonly, nonatomic) _Bool isNoAccess; // @synthesize isNoAccess=_isNoAccess;
@property(readonly, nonatomic) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(readonly, nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
- (void).cxx_destruct;
- (void)updateCameraUploadHash:(id)arg1;
@property(readonly, nonatomic) NSString *filename;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)clientModifiedDate;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIsDirectory:(_Bool)arg1 isDeleted:(_Bool)arg2 isReadOnly:(_Bool)arg3 isNoAccess:(_Bool)arg4 isTeamMemberFolder:(_Bool)arg5 sharedFolderId:(id)arg6 parentSharedFolderId:(id)arg7 isTeamFolder:(_Bool)arg8 isParentSharedFolderReadOnly:(_Bool)arg9 rev:(id)arg10 bytes:(long long)arg11 modifiedDate:(id)arg12 clientModifiedDate:(id)arg13 modifier:(id)arg14 iconName:(id)arg15 filePath:(id)arg16 userId:(id)arg17 fileContentHash:(id)arg18 cameraUploadHash:(id)arg19 cloudDocInfo:(id)arg20 isSymlink:(_Bool)arg21 fileLockingInfo:(id)arg22;
- (id)initWithPhotoItem:(id)arg1 withUserId:(id)arg2;
- (id)initForTestsWithDictionary:(id)arg1;

@end
