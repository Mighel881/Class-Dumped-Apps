//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IVEAudioStreamInfo-Protocol.h"

@class NSString;

@interface VEAudioStreamInfo : NSObject <IVEAudioStreamInfo>
{
    struct tagSTEAudioStreamInfo *audioStreamInfo;
    _Bool isPtrNeedDelete;
    unsigned int samplerate;
    unsigned int channelNum;
    int sampleFormat;
    long long duration;
}

@property(nonatomic) _Bool isPtrNeedDelete; // @synthesize isPtrNeedDelete;
@property(nonatomic) int sampleFormat; // @synthesize sampleFormat;
@property(nonatomic) unsigned int channelNum; // @synthesize channelNum;
@property(nonatomic) unsigned int samplerate; // @synthesize samplerate;
@property(nonatomic) long long duration; // @synthesize duration;
- (void *)getPtr;
- (id)initWithPtr:(void *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
