//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSData, NSError, WAStreamingMediaLoaderTask;

@protocol WAStreamingMediaLoaderTaskDelegate
- (void)loaderTask:(WAStreamingMediaLoaderTask *)arg1 didCompleteWithError:(NSError *)arg2 downloadEvents:(NSArray *)arg3;
- (void)loaderTask:(WAStreamingMediaLoaderTask *)arg1 didReceiveData:(NSData *)arg2 atOffset:(unsigned long long)arg3 isEOF:(_Bool)arg4;
@end

