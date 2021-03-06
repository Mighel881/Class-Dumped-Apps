//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotifyHandler-Protocol.h"

@class NSError, NSString, NSURL;

@interface TTAVPlayerItem : NSObject <NotifyHandler>
{
    _Bool _playbackBufferEmpty;
    _Bool _playbackLikelyToKeepUp;
    _Bool _playbackBufferFull;
    NSURL *_url;
    long long _status;
    NSError *_error;
    long long _loadedProgress;
    CDStruct_1b6d18a9 _duration;
}

+ (id)playerItemWithURL:(id)arg1;
@property(nonatomic, getter=isPlaybackBufferFull) _Bool playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
@property(nonatomic, getter=isPlaybackBufferEmpty) _Bool playbackBufferEmpty; // @synthesize playbackBufferEmpty=_playbackBufferEmpty;
@property(nonatomic) long long loadedProgress; // @synthesize loadedProgress=_loadedProgress;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)onNotifyError:(id)arg1;
- (void)handleNotify:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

