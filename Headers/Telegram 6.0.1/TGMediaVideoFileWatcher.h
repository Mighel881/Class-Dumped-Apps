//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SQueue;
@protocol OS_dispatch_source;

@interface TGMediaVideoFileWatcher : NSObject
{
    NSURL *_fileURL;
    NSObject<OS_dispatch_source> *_readerSource;
    SQueue *_queue;
}

- (void).cxx_destruct;
- (id)fileUpdated:(_Bool)arg1;
- (id)_setup;
- (void)setupWithFileURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end
