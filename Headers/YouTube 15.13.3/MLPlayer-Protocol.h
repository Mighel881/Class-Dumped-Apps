//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLPlayerCaptionProtocol-Protocol.h>
#import <Module_Framework/MLPlayerItem-Protocol.h>
#import <Module_Framework/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError;
@protocol MLPlayerDelegate, MLVideoSplicer, MLViewportSizeProvider;

@protocol MLPlayer <NSObject, MLPlayerCaptionProtocol, MLPlayerItem>
@property(readonly, nonatomic) NSDictionary *debugParameters;
@property(readonly, nonatomic) NSData *debugLogs;
@property(readonly, nonatomic) _Bool externalPlaybackActive;
@property(readonly, nonatomic) id <MLVideoSplicer> videoSplicer;
@property(readonly, nonatomic) int playerType;
@property(nonatomic) float rate;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
@property(nonatomic) _Bool externalPlaybackFullscreen;
@property(nonatomic) _Bool externalPlaybackAllowed;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long state;
@property(nonatomic) __weak id <MLPlayerDelegate> delegate;
- (void)setViewportSizeProvider:(id <MLViewportSizeProvider>)arg1;
- (void)seekToEnd;
- (void)seekToProductionTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)playASAP;
- (void)play;
- (void)load;
@end
