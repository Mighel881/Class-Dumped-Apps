//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEndVideoMessage-Protocol.h"

@class NSNumber, NSString;
@protocol BMPlaybackIdentity;

@interface SPTEndVideoMessageImpl : NSObject <BMEndVideoMessage>
{
    _Bool _incognitoMode;
    NSNumber *_sequenceNumber;
    NSString *_sequenceId;
    id <BMPlaybackIdentity> _identity;
    NSString *_reasonStart;
    NSString *_reasonEnd;
    long long _msPlayed;
    long long _msNominalPlayed;
    long long _msTotalEst;
    long long _msManifestLatency;
    long long _nSeekback;
    long long _msSeekback;
    long long _nSeekfwd;
    long long _msSeekfwd;
    long long _msLatency;
    long long _uiLatency;
    long long _startOffsetMs;
    long long _msInitialBuffering;
    long long _msSeekRebuffering;
    long long _msStalled;
    long long _maxMsSeekRebuffering;
    long long _maxMsStalled;
    long long _nStalls;
    long long _maxContinous;
    long long _unionPlayed;
    NSString *_audiocodec;
    NSString *_videocodec;
    NSString *_streamingRule;
    long long _startBitrate;
    long long _fullScreen;
    long long _timeWeightedBitrate;
    NSString *_keySystem;
    long long _msKeyLatency;
    long long _totalBytes;
    NSString *_connectionTypeStart;
    NSString *_connectionTypeEnd;
    long long _msPlayedBackground;
}

@property(nonatomic) long long msPlayedBackground; // @synthesize msPlayedBackground=_msPlayedBackground;
@property(copy, nonatomic) NSString *connectionTypeEnd; // @synthesize connectionTypeEnd=_connectionTypeEnd;
@property(copy, nonatomic) NSString *connectionTypeStart; // @synthesize connectionTypeStart=_connectionTypeStart;
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) long long msKeyLatency; // @synthesize msKeyLatency=_msKeyLatency;
@property(copy, nonatomic) NSString *keySystem; // @synthesize keySystem=_keySystem;
@property(nonatomic) long long timeWeightedBitrate; // @synthesize timeWeightedBitrate=_timeWeightedBitrate;
@property(nonatomic) long long fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) long long startBitrate; // @synthesize startBitrate=_startBitrate;
@property(copy, nonatomic) NSString *streamingRule; // @synthesize streamingRule=_streamingRule;
@property(nonatomic) _Bool incognitoMode; // @synthesize incognitoMode=_incognitoMode;
@property(copy, nonatomic) NSString *videocodec; // @synthesize videocodec=_videocodec;
@property(copy, nonatomic) NSString *audiocodec; // @synthesize audiocodec=_audiocodec;
@property(nonatomic) long long unionPlayed; // @synthesize unionPlayed=_unionPlayed;
@property(nonatomic) long long maxContinous; // @synthesize maxContinous=_maxContinous;
@property(nonatomic) long long nStalls; // @synthesize nStalls=_nStalls;
@property(nonatomic) long long maxMsStalled; // @synthesize maxMsStalled=_maxMsStalled;
@property(nonatomic) long long maxMsSeekRebuffering; // @synthesize maxMsSeekRebuffering=_maxMsSeekRebuffering;
@property(nonatomic) long long msStalled; // @synthesize msStalled=_msStalled;
@property(nonatomic) long long msSeekRebuffering; // @synthesize msSeekRebuffering=_msSeekRebuffering;
@property(nonatomic) long long msInitialBuffering; // @synthesize msInitialBuffering=_msInitialBuffering;
@property(nonatomic) long long startOffsetMs; // @synthesize startOffsetMs=_startOffsetMs;
@property(nonatomic) long long uiLatency; // @synthesize uiLatency=_uiLatency;
@property(nonatomic) long long msLatency; // @synthesize msLatency=_msLatency;
@property(nonatomic) long long msSeekfwd; // @synthesize msSeekfwd=_msSeekfwd;
@property(nonatomic) long long nSeekfwd; // @synthesize nSeekfwd=_nSeekfwd;
@property(nonatomic) long long msSeekback; // @synthesize msSeekback=_msSeekback;
@property(nonatomic) long long nSeekback; // @synthesize nSeekback=_nSeekback;
@property(nonatomic) long long msManifestLatency; // @synthesize msManifestLatency=_msManifestLatency;
@property(nonatomic) long long msTotalEst; // @synthesize msTotalEst=_msTotalEst;
@property(nonatomic) long long msNominalPlayed; // @synthesize msNominalPlayed=_msNominalPlayed;
@property(nonatomic) long long msPlayed; // @synthesize msPlayed=_msPlayed;
@property(copy, nonatomic) NSString *reasonEnd; // @synthesize reasonEnd=_reasonEnd;
@property(copy, nonatomic) NSString *reasonStart; // @synthesize reasonStart=_reasonStart;
@property(retain, nonatomic) id <BMPlaybackIdentity> identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void).cxx_destruct;
- (id)initWithSequenceNumber:(id)arg1 sequenceId:(id)arg2 identity:(id)arg3 reasonStart:(id)arg4 reasonEnd:(id)arg5 msPlayed:(long long)arg6 msNominalPlayed:(long long)arg7 msTotalEst:(long long)arg8 msManifestLatency:(long long)arg9 nSeekback:(long long)arg10 msSeekback:(long long)arg11 nSeekfwd:(long long)arg12 msSeekfwd:(long long)arg13 msLatency:(long long)arg14 uiLatency:(long long)arg15 startOffsetMs:(long long)arg16 msInitialBuffering:(long long)arg17 msSeekRebuffering:(long long)arg18 msStalled:(long long)arg19 maxMsSeekRebuffering:(long long)arg20 maxMsStalled:(long long)arg21 nStalls:(long long)arg22 maxContinous:(long long)arg23 unionPlayed:(long long)arg24 audiocodec:(id)arg25 videocodec:(id)arg26 incognitoMode:(_Bool)arg27 streamingRule:(id)arg28 startBitrate:(long long)arg29 fullScreen:(long long)arg30 timeWeightedBitrate:(long long)arg31 keySystem:(id)arg32 msKeyLatency:(long long)arg33 totalBytes:(long long)arg34 connectionTypeStart:(id)arg35 connectionTypeEnd:(id)arg36 msPlayedBackground:(long long)arg37;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
