//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TKIngestServer, TWTwitchBroadcastAdapter;

@protocol TWTwitchBroadcastAdapterProtocol <NSObject>
- (void)twitchBroadastAdapter:(TWTwitchBroadcastAdapter *)arg1 didMute:(_Bool)arg2;
- (void)twitchBroadcastAdapter:(TWTwitchBroadcastAdapter *)arg1 didFetchArchiveID:(unsigned long long)arg2;
- (void)twitchBroadcastAdapterSetStreamInfoFailed:(TWTwitchBroadcastAdapter *)arg1;
- (void)twitchBroadcastAdapterBroadcastDidFail:(TWTwitchBroadcastAdapter *)arg1 errorDomain:(unsigned long long)arg2 errorCode:(unsigned long long)arg3 errorCodeString:(NSString *)arg4;
- (void)twitchBroadcastAdapterStartBroadcastDidFail:(TWTwitchBroadcastAdapter *)arg1 synchronousError:(_Bool)arg2 errorDomain:(unsigned long long)arg3 errorCode:(unsigned long long)arg4 errorCodeString:(NSString *)arg5;
- (void)twitchBroadcastAdapter:(TWTwitchBroadcastAdapter *)arg1 didChangeBroadcastState:(unsigned long long)arg2;
- (void)twitchBroadcastAdapterReceivedBandwidthWarning:(TWTwitchBroadcastAdapter *)arg1 errorDomain:(unsigned long long)arg2 errorCode:(unsigned long long)arg3 errorCodeString:(NSString *)arg4 forCurrentIngestServer:(TKIngestServer *)arg5;
- (void)twitchBroadcastAdapterIngestTestingDidFail:(TWTwitchBroadcastAdapter *)arg1 synchronousError:(_Bool)arg2 errorDomain:(unsigned long long)arg3 errorCode:(unsigned long long)arg4 errorCodeString:(NSString *)arg5;
- (void)twitchBroadcastAdapterFinishedIngestTesting:(TWTwitchBroadcastAdapter *)arg1 withTopIngestServer:(TKIngestServer *)arg2;
@end

