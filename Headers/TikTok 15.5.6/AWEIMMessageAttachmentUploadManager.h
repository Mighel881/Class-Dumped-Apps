//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AWEIMMessageAttachmentUploadManager : NSObject
{
    _Bool _concurrentUpload;
    NSMutableDictionary *_uploaders;
    NSMutableArray *_waitingQueue;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool concurrentUpload; // @synthesize concurrentUpload=_concurrentUpload;
@property(retain, nonatomic) NSMutableArray *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
@property(retain, nonatomic) NSMutableDictionary *uploaders; // @synthesize uploaders=_uploaders;
- (void).cxx_destruct;
- (void)uploadNext;
- (void)removeUploader:(id)arg1;
- (id)p_uploadFileWithFileID:(id)arg1 quickData:(id)arg2 messageType:(long long)arg3;
- (_Bool)isUploading;
- (id)uploadFileWithFileID:(id)arg1 quickData:(id)arg2 messageType:(long long)arg3;
- (id)uploadVMWithFileID:(id)arg1;
- (id)createUploadFileVM:(id)arg1;
- (void)cancelUploadFile:(id)arg1;
- (id)init;

@end
