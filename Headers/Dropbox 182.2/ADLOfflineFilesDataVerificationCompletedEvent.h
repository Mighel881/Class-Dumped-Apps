//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBAnalyticsEvent.h>

@interface ADLOfflineFilesDataVerificationCompletedEvent : DBAnalyticsEvent
{
}

- (id)setNumPathsWithoutRoot:(int)arg1;
- (id)setNumFilesUpdated:(int)arg1;
- (id)setNumFilesProcessed:(int)arg1;
- (id)setNumPathsUpdated:(int)arg1;
- (id)setNumPathsAdded:(int)arg1;
- (id)setNumPathsDeleted:(int)arg1;
- (id)setNumRootPathsProcessed:(int)arg1;
- (id)stopTimerForFileContentVerificationDuration;
- (id)startTimerForFileContentVerificationDuration;
- (id)stopTimerForMetadatadataVerificationDuration;
- (id)startTimerForMetadatadataVerificationDuration;
- (id)stopTimerForOfflineDataVerificationDuration;
- (id)startTimerForOfflineDataVerificationDuration;
- (id)init;

@end

