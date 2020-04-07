//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSOperationQueue;

@protocol DBOfflineServingRecursiveRefresher
- (void)cancel;
- (void)recursivelyRefreshWithMaxNumMetadata:(unsigned long long)arg1 maxTotalBytesOfFilesUnderFolder:(long long)arg2 maxTotalBytesOfRootFile:(long long)arg3 shouldCountPotentiallyUnplayableMoviesIfDirectory:(_Bool)arg4 completionQueue:(NSOperationQueue *)arg5 completionHandler:(void (^)(_Bool, id <DBOfflineSupporting>, unsigned long long, long long, unsigned long long, NSError *))arg6;
@end
