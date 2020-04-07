//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TVLPlayerItemLogEvent.h"

@interface TVLPlayerItemAccessLogStallEvent : TVLPlayerItemLogEvent
{
    _Bool _happenedBeforeFirstFrame;
    long long _reason;
    long long _startAudioBufferLength;
    long long _startVideoBufferLength;
    long long _endAudioBufferLength;
    long long _endVideoBufferLength;
}

@property(nonatomic) long long endVideoBufferLength; // @synthesize endVideoBufferLength=_endVideoBufferLength;
@property(nonatomic) long long endAudioBufferLength; // @synthesize endAudioBufferLength=_endAudioBufferLength;
@property(nonatomic) long long startVideoBufferLength; // @synthesize startVideoBufferLength=_startVideoBufferLength;
@property(nonatomic) long long startAudioBufferLength; // @synthesize startAudioBufferLength=_startAudioBufferLength;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic, getter=isHappenedBeforeFirstFrame) _Bool happenedBeforeFirstFrame; // @synthesize happenedBeforeFirstFrame=_happenedBeforeFirstFrame;
- (id)init;

@end
