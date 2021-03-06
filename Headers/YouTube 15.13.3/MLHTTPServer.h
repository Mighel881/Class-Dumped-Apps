//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HTTPServer.h>

#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSMutableDictionary, NSString;
@protocol MLHTTPServerDelegate;

@interface MLHTTPServer : HTTPServer <YTSystemNotificationsObserver>
{
    NSMutableDictionary *_pathToResponseBlock;
    unsigned short _serverPort;
    _Bool _allowExternalConnections;
    GIMMe *_gimme;
    id <MLHTTPServerDelegate> _delegate;
}

@property(nonatomic) __weak id <MLHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowExternalConnections; // @synthesize allowExternalConnections=_allowExternalConnections;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)asyncRestartServerIfNecessary;
- (void)restartServer;
- (id)externalWiFiIPAddress;
- (id)URLForHost:(id)arg1 path:(id)arg2;
- (id)HTTPResponseForConnection:(id)arg1 URI:(id)arg2;
- (id)externalURLForPath:(id)arg1;
- (id)localURLForPath:(id)arg1;
- (void)unregisterAllResponseBlocks;
- (void)unregisterResponseBlockWithPath:(id)arg1;
- (id)registerResponseBlock:(CDUnknownBlockType)arg1;
- (void)registerResponseBlock:(CDUnknownBlockType)arg1 forPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

