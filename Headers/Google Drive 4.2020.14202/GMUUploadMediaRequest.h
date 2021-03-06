//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMUAssetUploadRequest.h"

@class GMUBlueprint, GMUUploadAttempt, SFPDUploadMediaMetadata;

@interface GMUUploadMediaRequest : GMUAssetUploadRequest
{
    _Bool didCompleteUploadMedia;
    GMUBlueprint *blueprint;
    SFPDUploadMediaMetadata *uploadMediaMetadata;
    GMUUploadAttempt *_uploadAttempt;
}

@property(retain, nonatomic) GMUUploadAttempt *uploadAttempt; // @synthesize uploadAttempt=_uploadAttempt;
- (void)setUploadMediaMetadata:(id)arg1;
- (id)uploadMediaMetadata;
- (void)setDidCompleteUploadMedia:(_Bool)arg1;
- (_Bool)didCompleteUploadMedia;
@property(retain, nonatomic) GMUBlueprint *blueprint; // @synthesize blueprint;
- (void).cxx_destruct;
- (void)didObtainUploadLocationURL:(id)arg1;
- (_Bool)shouldTimeout;
- (void)createRpcRequest;
- (void)cancel;
- (void)uploadFetcherDidCompleteWithData:(id)arg1 error:(id)arg2;
- (id)uploadLocationURL;
- (void)createUploadAttempt;
- (void)configureRequestProtoWithFingerprint:(id)arg1 displayName:(id)arg2 editList:(id)arg3 creationDate:(id)arg4 modificationDate:(id)arg5;

@end

