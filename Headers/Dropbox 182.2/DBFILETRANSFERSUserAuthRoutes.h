//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DBTransportClient;

@interface DBFILETRANSFERSUserAuthRoutes : NSObject
{
    id <DBTransportClient> _client;
}

@property(readonly, nonatomic) id <DBTransportClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)updateMetadata:(id)arg1 expirationTimeUpdate:(id)arg2 passwordUpdate:(id)arg3 shouldNotifyCreatorOnDownloadUpdate:(id)arg4;
- (id)updateMetadata;
- (id)share:(id)arg1;
- (id)share;
- (id)list:(id)arg1 pagination:(id)arg2;
- (id)list;
- (id)get:(id)arg1 password:(id)arg2;
- (id)get;
- (id)filesSaveToDropbox:(id)arg1 requestedFilesById:(id)arg2 destinationPath:(id)arg3 password:(id)arg4;
- (id)filesSaveToDropbox;
- (id)filesList:(id)arg1 password:(id)arg2;
- (id)filesList;
- (id)filesAddByPath:(id)arg1 filesToAdd:(id)arg2;
- (id)filesAddByPath;
- (id)filesAddByBlocks:(id)arg1 filesToAdd:(id)arg2;
- (id)filesAddByBlocks;
- (id)createAndShare:(id)arg1 expirationTimeSetting:(id)arg2 passwordSetting:(id)arg3 filesByPath:(id)arg4 shouldNotifyCreatorOnDownloadSetting:(id)arg5;
- (id)createAndShare;
- (id)create:(id)arg1;
- (id)create;
- (id)authWithPassword:(id)arg1 password:(id)arg2;
- (id)authWithPassword;
- (id)init:(id)arg1;

@end

