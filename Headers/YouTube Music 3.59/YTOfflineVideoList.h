//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface YTOfflineVideoList : NSObject <NSCopying>
{
    int _maximumDownloadQuality;
    int _offlineVideoSelectionStrategy;
    int _status;
    NSString *_ID;
    NSDictionary *_thumbnailNames;
    unsigned long long _minimumUnusedBytes;
    NSDate *_lastUpdatedDate;
    NSDate *_addedDate;
    unsigned long long _pendingSyncVideoCount;
    unsigned long long _completedVideoCount;
    NSData *_clickTrackingParams;
    NSArray *_videos;
}

@property(readonly, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(readonly, nonatomic) NSData *clickTrackingParams; // @synthesize clickTrackingParams=_clickTrackingParams;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long completedVideoCount; // @synthesize completedVideoCount=_completedVideoCount;
@property(readonly, nonatomic) unsigned long long pendingSyncVideoCount; // @synthesize pendingSyncVideoCount=_pendingSyncVideoCount;
@property(readonly, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) unsigned long long minimumUnusedBytes; // @synthesize minimumUnusedBytes=_minimumUnusedBytes;
@property(readonly, nonatomic) int offlineVideoSelectionStrategy; // @synthesize offlineVideoSelectionStrategy=_offlineVideoSelectionStrategy;
@property(readonly, nonatomic) int maximumDownloadQuality; // @synthesize maximumDownloadQuality=_maximumDownloadQuality;
@property(readonly, nonatomic) NSDictionary *thumbnailNames; // @synthesize thumbnailNames=_thumbnailNames;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (_Bool)isEditable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)offlinePlaylistWithTitle:(id)arg1;
- (id)initWithID:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 videos:(id)arg4 offlineVideoSelectionStrategy:(int)arg5 minimumUnusedBytes:(unsigned long long)arg6 thumbnailFilenames:(id)arg7 lastUpdatedDate:(id)arg8 addedDate:(id)arg9 status:(int)arg10 completedVideoCount:(unsigned long long)arg11 pendingSyncVideoCount:(unsigned long long)arg12;

@end

