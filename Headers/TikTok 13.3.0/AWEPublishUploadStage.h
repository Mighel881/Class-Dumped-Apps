//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPublishBaseStage.h"

#import "TTVideoUploadClientProtocol-Protocol.h"
#import "TTVideoUploadEventManagerProtocol-Protocol.h"

@class AWEPublishNormalVideoTask, AWEResourceUploadParametersResponseModel, HttpResourceLoader, NSString, NSURL, TTNetResourceLoaderDelegate, TTVideoUploadClient;

@interface AWEPublishUploadStage : AWEPublishBaseStage <TTVideoUploadEventManagerProtocol, TTVideoUploadClientProtocol>
{
    _Bool _isPreUploading;
    TTVideoUploadClient *_videoUploadClient;
    TTNetResourceLoaderDelegate *_ttnetDelegate;
    HttpResourceLoader *_ttnetResl;
    AWEPublishNormalVideoTask *_videoTask;
    NSURL *_fileUrl;
    AWEResourceUploadParametersResponseModel *_uploadParams;
}

@property(retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams; // @synthesize uploadParams=_uploadParams;
@property(retain, nonatomic) NSURL *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(nonatomic) __weak AWEPublishNormalVideoTask *videoTask; // @synthesize videoTask=_videoTask;
@property(retain, nonatomic) HttpResourceLoader *ttnetResl; // @synthesize ttnetResl=_ttnetResl;
@property(retain, nonatomic) TTNetResourceLoaderDelegate *ttnetDelegate; // @synthesize ttnetDelegate=_ttnetDelegate;
@property(retain, nonatomic) TTVideoUploadClient *videoUploadClient; // @synthesize videoUploadClient=_videoUploadClient;
@property(nonatomic) _Bool isPreUploading; // @synthesize isPreUploading=_isPreUploading;
- (void).cxx_destruct;
- (void)allowMergeUpload;
- (void)cancel;
- (void)eventManagerDidUpdate:(id)arg1;
- (id)uploadGetString:(long long)arg1;
- (int)uploadVideoCheckIfNeedTry:(long long)arg1 tryCount:(long long)arg2;
- (void)uploadVideoProgressDidUpdate:(long long)arg1;
- (void)uploadVideoDidFinish:(id)arg1 error:(id)arg2;
- (id)getCookies;
- (void)configVideoUploadClient;
- (void)run;
- (void)dealloc;
- (void)setupWithFileUrl:(id)arg1 uploadParams:(id)arg2 videoTask:(id)arg3;
- (id)initWithFileUrl:(id)arg1 uploadParams:(id)arg2 videoTask:(id)arg3;
- (id)initWithFileUrl:(id)arg1 uploadParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
