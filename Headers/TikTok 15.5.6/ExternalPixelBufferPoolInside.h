//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExternalPixelBufferPoolInside : NSObject
{
    int _width;
    int _height;
    unsigned int _pixelType;
    struct __CVPixelBufferPool *_bufferPool;
}

+ (id)generatingDescribeKeyWithWidth:(int)arg1 height:(int)arg2 cvPixelFormatType:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int pixelType; // @synthesize pixelType=_pixelType;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) struct __CVPixelBufferPool *bufferPool; // @synthesize bufferPool=_bufferPool;
- (struct __CVBuffer *)createPiexlBufferFromPool;
- (_Bool)createBufferPool;
- (id)describeKey;
- (_Bool)isSuitBufferWithWidth:(int)arg1 height:(int)arg2 cvPixelFormatType:(unsigned int)arg3;
- (void)handleMemoryWarning;
- (void)memoryWarningNotification:(_Bool)arg1;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2 cvPixelFormatType:(unsigned int)arg3;

@end

