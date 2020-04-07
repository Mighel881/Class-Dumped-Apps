//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileMetadata-Protocol.h"

@class DBDropboxPath, DBLegacyServerPhotoItem, NSDate, NSString;

@interface DBPhotoItemMetadata : NSObject <DBFileMetadata>
{
    DBLegacyServerPhotoItem *_photoItem;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *cameraUploadHash;
@property(readonly, nonatomic) _Bool isReadOnly;
@property(readonly, copy, nonatomic) NSString *iconName;
@property(readonly, nonatomic) unsigned long long bytes;
@property(readonly, copy, nonatomic) NSString *rev;
@property(readonly, nonatomic) NSDate *modifiedDate;
- (_Bool)isParentSharedFolderReadOnly;
@property(readonly, nonatomic) _Bool isNoAccess;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, nonatomic) NSString *fileId;
@property(readonly, nonatomic) DBDropboxPath *filePath;
- (id)initWithPhotoItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
