//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMLogsGroupCallInfo_Stream, GIMLogsGroupCallInfo_VideoPosition;

@interface GIMLogsGroupCallInfo_VideoPositionChange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewPosition; // @dynamic hasNewPosition;
@property(nonatomic) _Bool hasPreviousPosition; // @dynamic hasPreviousPosition;
@property(nonatomic) _Bool hasStream; // @dynamic hasStream;
@property(retain, nonatomic) GIMLogsGroupCallInfo_VideoPosition *newPosition; // @dynamic newPosition;
@property(retain, nonatomic) GIMLogsGroupCallInfo_VideoPosition *previousPosition; // @dynamic previousPosition;
@property(retain, nonatomic) GIMLogsGroupCallInfo_Stream *stream; // @dynamic stream;

@end

