//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SDWebImageFLPlugin/SDAnimatedImageProvider-Protocol.h>

@class NSData;
@protocol SDAnimatedImageCoder;

@protocol SDAnimatedImage <SDAnimatedImageProvider>
- (id)initWithAnimatedCoder:(id <SDAnimatedImageCoder>)arg1 scale:(double)arg2;
- (id)initWithData:(NSData *)arg1 scale:(double)arg2 options:(struct NSDictionary *)arg3;

@optional
@property(readonly, nonatomic, getter=isAllFramesLoaded) _Bool allFramesLoaded;
- (void)unloadAllFrames;
- (void)preloadAllFrames;
@end
