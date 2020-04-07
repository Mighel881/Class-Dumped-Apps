//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TVLPlayerItemLogEvent.h"

@interface TVLPlayerItemAccessLogTimeSeriesEvent : TVLPlayerItemLogEvent
{
    long long _audioBufferDuration;
    long long _renderingFrameRate;
    long long _pullingBitrate;
    long long _pushingFrameRate;
    long long _pushingBitrate;
}

@property(nonatomic) long long pushingBitrate; // @synthesize pushingBitrate=_pushingBitrate;
@property(nonatomic) long long pushingFrameRate; // @synthesize pushingFrameRate=_pushingFrameRate;
@property(nonatomic) long long pullingBitrate; // @synthesize pullingBitrate=_pullingBitrate;
@property(nonatomic) long long renderingFrameRate; // @synthesize renderingFrameRate=_renderingFrameRate;
@property(nonatomic) long long audioBufferDuration; // @synthesize audioBufferDuration=_audioBufferDuration;
- (id)init;

@end
