//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WZDataSessionDelegate-Protocol.h"

@class NSString, WZDataSession, WZTransportSettings;
@protocol WazeTransportDelegate;

@interface WazeTransport : NSObject <WZDataSessionDelegate>
{
    WZDataSession *_dataSession;
    _Bool _isConnected;
    id <WazeTransportDelegate> _delegate;
    unsigned long long _navigationState;
    WZTransportSettings *_settings;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WZTransportSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) unsigned long long navigationState; // @synthesize navigationState=_navigationState;
@property(nonatomic) __weak id <WazeTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startWithAddressQuery:(id)arg1 delegate:(id)arg2 returnURL:(id)arg3;
- (void)startWithAddressQuery:(id)arg1 refLocation:(id)arg2 delegate:(id)arg3 returnURL:(id)arg4;
- (void)startWithLocation:(id)arg1 delegate:(id)arg2 returnURL:(id)arg3;
- (void)terminate;
- (_Bool)sendCustomInfo:(id)arg1;
- (_Bool)sendReturnRequest;
- (_Bool)stopNavigation;
- (_Bool)setAddressQuery:(id)arg1;
- (_Bool)setAddressQuery:(id)arg1 refLocation:(id)arg2;
- (_Bool)setLocation:(id)arg1;
- (_Bool)connectWithSettings:(id)arg1 favorite:(unsigned long long)arg2;
- (void)connectWithSettings:(id)arg1 addressQuery:(id)arg2 referenceLocation:(id)arg3;
- (void)connectWithSettings:(id)arg1 addressQuery:(id)arg2;
- (void)connectWithSettings:(id)arg1 location:(id)arg2;
- (void)connectWithSettings:(id)arg1;
- (void)dataSession:(id)arg1 didUpdateConnection:(_Bool)arg2;
- (void)dataSession:(id)arg1 didReceiveWazeVersion:(id)arg2;
- (void)dataSession:(id)arg1 didReceiveDictionary:(id)arg2;
- (void)startWazeWithLocation:(id)arg1 orAddressQuery:(id)arg2 refLocation:(id)arg3 delegate:(id)arg4 returnURL:(id)arg5;
- (void)connectWithSettings:(id)arg1 favorite:(unsigned long long)arg2 location:(id)arg3 query:(id)arg4 referenceLocation:(id)arg5;
- (void)terminateDataSession;
- (void)setupDataSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
