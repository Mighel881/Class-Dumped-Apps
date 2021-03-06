//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, YTOfflinePlaylist;

@protocol YTOfflinePlaylistEntityGeneratorProtocol <NSObject>
- (void)didDeleteAllOfflinePlaylistsWithIDs:(NSArray *)arg1;
- (void)didDeleteOfflinePlaylistsForUserID:(NSString *)arg1 deletedPlaylistIDs:(NSArray *)arg2;
- (void)downloadDidPauseWithPlaylistID:(NSString *)arg1;
- (void)downloadDidCompleteWithPlaylist:(YTOfflinePlaylist *)arg1;
- (void)downloadDidProgressWithPlaylistID:(NSString *)arg1;
- (void)downloadDidStartWithPlaylist:(YTOfflinePlaylist *)arg1;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(NSString *)arg1;
- (void)didFailToSaveOfflinePlaylistWithID:(NSString *)arg1;
- (void)didSaveMetadataWithPlaylist:(YTOfflinePlaylist *)arg1;
- (NSArray *)generateInitialEntitiesForPlaylists:(NSArray *)arg1;
@end

