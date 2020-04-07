//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileSharedFolderManaging-Protocol.h"

@class DBDropboxPath, DBSharedContentAPIClient, DBUserFileSharedFolderManagerValidationInfo, NSMutableArray;
@protocol DBFileMetadataLoader;

@interface DBUserFileSharedFolderManager : NSObject <DBFileSharedFolderManaging>
{
    DBDropboxPath *_folderPath;
    DBSharedContentAPIClient *_sharedContentAPIClient;
    DBUserFileSharedFolderManagerValidationInfo *_cachedValidateSharedContentPathInfo;
    id <DBFileMetadataLoader> _metadataLoader;
    NSMutableArray *_completionBlocks;
}

- (void).cxx_destruct;
- (void)refreshValidateSharedContentPathInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)cachedValidateSharedContentPathInfo;
- (id)initWithFolderPath:(id)arg1 userState:(id)arg2 metadataLoader:(id)arg3;
- (id)init;

@end
