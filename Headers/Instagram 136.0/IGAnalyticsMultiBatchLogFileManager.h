//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAnalyticsLogFileManagerProtocol-Protocol.h>

@class NSFileManager, NSOutputStream, NSString;

@interface IGAnalyticsMultiBatchLogFileManager : NSObject <IGAnalyticsLogFileManagerProtocol>
{
    NSString *_rootDirectory;
    NSString *_logFileDirectory;
    NSString *_batchInProgressFilePath;
    _Bool _compressFile;
    NSFileManager *_fm;
    NSOutputStream *_os;
    long long _currentBatchSize;
    long long _maxUncompressedBatchSize;
}

- (void).cxx_destruct;
- (void)_closeOutBatchAndPrepForUpload;
- (_Bool)isCompressedFile:(id)arg1;
- (void)enableCompression:(_Bool)arg1;
- (void)deleteLogFiles:(id)arg1 keepNewestFiles:(unsigned long long)arg2;
- (void)deleteLogFile:(id)arg1;
- (id)createLogFileWithData:(id)arg1;
- (id)createLogFileByMovingFile:(id)arg1;
- (id)allLogFiles;
- (id)initWithLogFileDirectory:(id)arg1 maxUncompressedBatchSize:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

