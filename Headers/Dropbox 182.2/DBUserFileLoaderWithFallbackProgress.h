//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBLoadProgress.h"

@class DBDropboxPath, DBFileCache;

@interface DBUserFileLoaderWithFallbackProgress : DBLoadProgress
{
    DBDropboxPath *_filePath;
    _Bool _supportFallback;
    long long _reprBeingTracked;
    DBFileCache *_fileCache;
}

- (void).cxx_destruct;
- (void)db_filePreviewFallBackNotification:(id)arg1;
- (void)db_fileLoadFailedNotification:(id)arg1;
- (void)db_fileLoadedNotification:(id)arg1;
- (void)db_fileProgressNotification:(id)arg1;
- (void)db_unregisterObservers;
- (void)db_receivedNotificationForBackToOriginal:(id)arg1;
- (void)db_receivedNotificationForLoadFailed:(id)arg1;
- (void)db_receivedNotificationForLoaded:(id)arg1;
- (void)db_receivedNotificationForProgress:(id)arg1;
- (void)db_registerNotificationsOnFileCache:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 previewType:(long long)arg2 onFileCache:(id)arg3 supportFallback:(_Bool)arg4;

@end
