//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBFileCacheLoadingFileDictionary, DBScopedDirectoryMap;
@protocol DBBackgroundTaskFactoryProtocol, DBBackgroundTaskProtocol;

@interface DBFileCacheLoadingFileManager : NSObject
{
    DBFileCacheLoadingFileDictionary *_loadingFileDictionary;
    DBScopedDirectoryMap *_scopedDirectoryMap;
    id <DBBackgroundTaskFactoryProtocol> _backgroundTaskFactory;
    id <DBBackgroundTaskProtocol> _backgroundTask;
}

- (void).cxx_destruct;
- (void)db_updateBackgroundTask;
- (id)db_localFilePathForLoadingFile;
- (void)db_removeLoadingFileForLocalPath:(id)arg1;
- (void)db_addLoadingFile:(id)arg1;
- (void)removeAllLoadingReprsForDropboxPath:(id)arg1;
- (_Bool)containsLoadingFileForDropboxPath:(id)arg1;
- (id)loadingFilesForDropboxPath:(id)arg1;
- (id)loadingFileForDropboxPath:(id)arg1 withRepr:(long long)arg2;
- (id)loadingFileForLocalFilePath:(id)arg1;
- (void)removeLoadingFileForLocalFilePath:(id)arg1;
- (id)resumeLoadingFileWithPath:(id)arg1 localPath:(id)arg2 repr:(long long)arg3 priority:(unsigned long long)arg4 isPurgeable:(_Bool)arg5 lastKnownRev:(id)arg6 retryAction:(CDUnknownBlockType)arg7 cancelAction:(CDUnknownBlockType)arg8 assertOnFileCacheQueue:(CDUnknownBlockType)arg9;
- (id)addLoadingFileWithPath:(id)arg1 withRepr:(long long)arg2 priority:(unsigned long long)arg3 isPurgeable:(_Bool)arg4 withLastKnownRev:(id)arg5 retryAction:(CDUnknownBlockType)arg6 cancelAction:(CDUnknownBlockType)arg7 assertOnFileCacheQueue:(CDUnknownBlockType)arg8;
- (id)initWithScopedDirectoryMap:(id)arg1 backgroundTaskFactory:(id)arg2;

@end
