//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBDropboxPath, NSOperationQueue;

@protocol DBOfflineNonPurgeableItemFetcher
- (void)fetchNonPurgeableItemWithPath:(DBDropboxPath *)arg1 completionQueue:(NSOperationQueue *)arg2 completionHandler:(void (^)(id <DBOfflineSupporting>))arg3;
@end
