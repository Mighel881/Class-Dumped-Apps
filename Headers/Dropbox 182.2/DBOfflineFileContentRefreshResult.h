//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface DBOfflineFileContentRefreshResult : NSObject
{
    _Bool _allFilesRefreshed;
    int _numFilesRefreshed;
    unsigned long long _bytesDownloaded;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool allFilesRefreshed; // @synthesize allFilesRefreshed=_allFilesRefreshed;
@property(nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(nonatomic) int numFilesRefreshed; // @synthesize numFilesRefreshed=_numFilesRefreshed;
- (void).cxx_destruct;
- (id)init;

@end
