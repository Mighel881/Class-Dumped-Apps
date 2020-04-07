//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBRestClientRequestTaskProtocol-Protocol.h>

@class DBRequest, DBRestClientURLSessionTaskInfo, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURLRequest;
@protocol DBRestClientRequestTaskDelegate;

@interface DBLegacyRestClientRequestTask : NSObject <DBRestClientRequestTaskProtocol>
{
    NSURLRequest *_urlRequest;
    _Bool _isLargeRequest;
    NSString *_resultFilePath;
    DBRequest *_request;
    id <DBRestClientRequestTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <DBRestClientRequestTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)db_dataReceivedForRequest:(id)arg1;
- (void)db_downloadProgressDidChangeForRequest:(id)arg1;
- (void)db_uploadProgressDidChangeForRequest:(id)arg1;
- (void)db_didCompleteRequest:(id)arg1;
- (void)db_setupUpdateHandlersForRequest:(id)arg1;
- (id)parseResponseAsType:(Class)arg1;
@property(readonly, nonatomic) double uploadProgress;
@property(readonly, nonatomic) double downloadProgress;
@property(readonly, nonatomic) NSDictionary *xDropboxMetadataJSON;
@property(readonly, nonatomic) NSData *resultData;
@property(readonly, nonatomic) NSString *resultString;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSHTTPURLResponse *response;
@property(readonly, nonatomic) long long statusCode;
@property(readonly, nonatomic) DBRestClientURLSessionTaskInfo *urlSessionTaskInfo;
- (void)cancel;
- (void)startWithPriority:(float)arg1;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 bodyDataFile:(id)arg2 isLargeRequest:(_Bool)arg3 resultFilePath:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
