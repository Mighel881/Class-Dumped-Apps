//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PixelBufferPacket : NSObject
{
    int _rotation;
    unsigned long long _ts;
    struct __CVBuffer *_videoBuffer;
}

@property(readonly, nonatomic) int rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) struct __CVBuffer *videoBuffer; // @synthesize videoBuffer=_videoBuffer;
@property(readonly, nonatomic) unsigned long long ts; // @synthesize ts=_ts;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 Rotation:(int)arg2 TimeStamp:(unsigned long long)arg3;
- (id)init;

@end
