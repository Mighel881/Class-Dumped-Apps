//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DCAdaptiveJitterBuffer, DCPPlaybackBegin_Stream, DCTimestampSync, NSDate, PlayerBase;

@interface StreamStateNG : NSObject
{
    int _type;
    int _timebase;
    DCPPlaybackBegin_Stream *_streamInfo;
    NSDate *_startTime;
    NSDate *_lastRecvSystemTime;
    long long _offset;
    long long _seqNum;
    PlayerBase *_player;
    DCAdaptiveJitterBuffer *_buffer;
    DCTimestampSync *_timestampSync;
}

@property(retain, nonatomic) DCTimestampSync *timestampSync; // @synthesize timestampSync=_timestampSync;
@property(retain, nonatomic) DCAdaptiveJitterBuffer *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) PlayerBase *player; // @synthesize player=_player;
@property(nonatomic) long long seqNum; // @synthesize seqNum=_seqNum;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSDate *lastRecvSystemTime; // @synthesize lastRecvSystemTime=_lastRecvSystemTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int timebase; // @synthesize timebase=_timebase;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) DCPPlaybackBegin_Stream *streamInfo; // @synthesize streamInfo=_streamInfo;
- (void).cxx_destruct;
- (void)stopPlaying;
- (void)startPlaying;

@end

