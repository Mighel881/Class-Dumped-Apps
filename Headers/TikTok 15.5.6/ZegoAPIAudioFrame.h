//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZegoAPIAudioFrame : NSObject
{
    struct shared_ptr<ZegoAudioFrame> audio_frame_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ZegoAudioFrame *)getAudioFrame;
- (int)setAacProperties:(double)arg1 dataLength:(int)arg2 specialConfigLength:(int)arg3;
- (int)setFrameType:(int)arg1;
- (int)setCapturedData:(char *)arg1 samples:(int)arg2;
- (int)setSampleRate:(int)arg1 channels:(int)arg2;
- (id)init;

@end
