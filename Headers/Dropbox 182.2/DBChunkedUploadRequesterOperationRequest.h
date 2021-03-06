//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDropboxPath, NSString;
@protocol DBChunkedUploadDataLoader, DBChunkedUploadOperationsFactory, DBChunkedUploadRequesterOpCompletionHandler, DBChunkedUploadRequesterOpRequestEventsHandler;

@interface DBChunkedUploadRequesterOperationRequest : NSObject
{
    _Bool _overwrite;
    DBDropboxPath *_destinationDirPath;
    NSString *_destinationFileName;
    NSString *_parentRev;
    unsigned long long _sourceFileSize;
    NSString *_sourceFileName;
    NSString *_bufferFileName;
    id <DBChunkedUploadDataLoader> _dataLoader;
    NSString *_uploadSessionID;
    unsigned long long _uploadOffset;
    id <DBChunkedUploadOperationsFactory> _operationsFactory;
    id <DBChunkedUploadRequesterOpRequestEventsHandler> _eventsHandler;
    id <DBChunkedUploadRequesterOpCompletionHandler> _completionHandler;
    unsigned long long _uploadCommitType;
}

@property(readonly, nonatomic) unsigned long long uploadCommitType; // @synthesize uploadCommitType=_uploadCommitType;
@property(readonly, nonatomic) id <DBChunkedUploadRequesterOpCompletionHandler> completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) id <DBChunkedUploadRequesterOpRequestEventsHandler> eventsHandler; // @synthesize eventsHandler=_eventsHandler;
@property(readonly, nonatomic) id <DBChunkedUploadOperationsFactory> operationsFactory; // @synthesize operationsFactory=_operationsFactory;
@property(readonly, nonatomic) unsigned long long uploadOffset; // @synthesize uploadOffset=_uploadOffset;
@property(readonly, nonatomic) NSString *uploadSessionID; // @synthesize uploadSessionID=_uploadSessionID;
@property(readonly, nonatomic) id <DBChunkedUploadDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) NSString *bufferFileName; // @synthesize bufferFileName=_bufferFileName;
@property(readonly, nonatomic) NSString *sourceFileName; // @synthesize sourceFileName=_sourceFileName;
@property(readonly, nonatomic) unsigned long long sourceFileSize; // @synthesize sourceFileSize=_sourceFileSize;
@property(readonly, nonatomic) NSString *parentRev; // @synthesize parentRev=_parentRev;
@property(readonly, nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
@property(readonly, nonatomic) NSString *destinationFileName; // @synthesize destinationFileName=_destinationFileName;
@property(readonly, nonatomic) DBDropboxPath *destinationDirPath; // @synthesize destinationDirPath=_destinationDirPath;
- (void).cxx_destruct;
- (id)initWithDestinationDirPath:(id)arg1 destinationFileName:(id)arg2 overwrite:(_Bool)arg3 parentRev:(id)arg4 sourceFileSize:(unsigned long long)arg5 sourceFileName:(id)arg6 bufferFileName:(id)arg7 dataLoader:(id)arg8 uploadSessionID:(id)arg9 fromUploadOffset:(unsigned long long)arg10 uploadCommitType:(unsigned long long)arg11 operationsFactory:(id)arg12 requestEventsHandler:(id)arg13 completionHandler:(id)arg14;

@end

