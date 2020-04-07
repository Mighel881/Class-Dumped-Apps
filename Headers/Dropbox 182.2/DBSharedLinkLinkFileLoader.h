//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLinkFileLoader-Protocol.h"
#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBDropboxPath, DBRestClientRequestLinkFilesFactory, DBSharedLinkState, NSString, NSURL;

@interface DBSharedLinkLinkFileLoader : NSObject <DBLinkableStateObserverProtocol, DBLinkFileLoader>
{
    DBSharedLinkState *_linkState;
    DBDropboxPath *_filePath;
    NSString *_sharedLinkPath;
    DBRestClientRequestLinkFilesFactory *_requestFactory;
    NSURL *_cachedLinkFileURL;
}

- (void).cxx_destruct;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedLinkFileURL;
- (void)fetchLinkFileURL:(CDUnknownBlockType)arg1;
- (void)db_successfullyLoadedURL:(id)arg1;
- (void)dealloc;
- (id)initWithLinkState:(id)arg1 filePath:(id)arg2 requestFactory:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
