//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTCORUploader-Protocol.h"

@class GDTCORClock, GDTCORUploadPackage, NSString, NSURL, NSURLSession, NSURLSessionUploadTask;
@protocol OS_dispatch_queue;

@interface GDTCCTUploader : NSObject <GDTCORUploader>
{
    NSObject<OS_dispatch_queue> *_uploaderQueue;
    NSURL *_serverURL;
    NSURLSession *_uploaderSession;
    NSURLSessionUploadTask *_currentTask;
    GDTCORUploadPackage *_currentUploadPackage;
    GDTCORClock *_nextUploadTime;
}

+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) GDTCORClock *nextUploadTime; // @synthesize nextUploadTime=_nextUploadTime;
@property(retain, nonatomic) GDTCORUploadPackage *currentUploadPackage; // @synthesize currentUploadPackage=_currentUploadPackage;
@property(retain, nonatomic) NSURLSessionUploadTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly, nonatomic) NSURLSession *uploaderSession; // @synthesize uploaderSession=_uploaderSession;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *uploaderQueue; // @synthesize uploaderQueue=_uploaderQueue;
- (void).cxx_destruct;
- (void)appWillTerminate:(id)arg1;
- (void)packageExpired:(id)arg1;
- (id)constructRequestProtoFromPackage:(id)arg1;
- (_Bool)readyToUploadWithConditions:(long long)arg1;
- (void)uploadPackage:(id)arg1;
- (id)defaultServerURL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
