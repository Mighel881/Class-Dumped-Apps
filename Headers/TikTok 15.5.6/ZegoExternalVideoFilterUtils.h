//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZegoExternalVideoFilterUtils : NSObject
{
}

+ (_Bool)copyPixelBufferFrom:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2;
+ (void)destroyPixelBufferPool:(struct __CVPixelBufferPool **)arg1;
+ (_Bool)createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 width:(int)arg2 height:(int)arg3;

@end
