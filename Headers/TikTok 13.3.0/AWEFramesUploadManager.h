//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface AWEFramesUploadManager : NSObject
{
    NSMutableArray *_uploaderQueue;
    NSLock *_lock;
}

+ (void)uploadOriginalFramesWithVideoId:(id)arg1 awemeId:(id)arg2 publishModel:(id)arg3 uploadParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *uploaderQueue; // @synthesize uploaderQueue=_uploaderQueue;
- (void).cxx_destruct;
- (_Bool)removeUploader:(id)arg1;
- (_Bool)addUploader:(id)arg1;
- (id)init;

@end
