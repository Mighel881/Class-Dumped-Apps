//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSHTTPURLResponse, WAMMSMediaHeaderPlaintextOperation, WamEventMediaDownload2;

@protocol WAMMSMediaHeaderPlaintextOperationDelegate
- (void)headerTask:(WAMMSMediaHeaderPlaintextOperation *)arg1 populatedDownloadEvent:(WamEventMediaDownload2 *)arg2 shouldSubmit:(_Bool)arg3 isRetry:(_Bool)arg4;
- (void)headerTask:(WAMMSMediaHeaderPlaintextOperation *)arg1 didFinishWithResponse:(NSHTTPURLResponse *)arg2;
- (void)headerTask:(WAMMSMediaHeaderPlaintextOperation *)arg1 didFailWithError:(NSError *)arg2 terminal:(_Bool)arg3;
@end

