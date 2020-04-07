//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBMigration-Protocol.h"

@class NSString;

@interface DBUploadQueueV2AppGroupMigration : NSObject <DBMigration>
{
}

+ (void)runWithAccountManager:(id)arg1;
+ (id)db_dropboxAppGroupIdentifier;
+ (id)db_dropboxAppGroupContainerPath;
+ (id)db_dropboxAppGroupContainerDirectoryForUserId:(id)arg1;
+ (id)db_currentUploadQueueV2ParentDirForUserId:(id)arg1;
+ (id)db_directoryWithSearchPath:(unsigned long long)arg1;
+ (id)db_documentDirectoryForUser:(id)arg1;
+ (id)db_oldUploadQueueV2ContainerDirForUserId:(id)arg1;
+ (id)db_oldUploadQueueV2DBPathForUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
