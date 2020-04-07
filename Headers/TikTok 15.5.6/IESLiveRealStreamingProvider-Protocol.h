//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol HTSLiveKTVProtocol, IESLiveInteractPushStreaming, IESLiveNormalPushStreaming, IESLiveStreamStateProtocol;

@protocol IESLiveRealStreamingProvider <NSObject>
@property(readonly, nonatomic) long long minBitrate;
@property(readonly, nonatomic) long long maxBitrate;
@property(readonly, nonatomic) long long realBitrate;
@property(copy, nonatomic) CDUnknownBlockType realBitrateBlock;
@property(nonatomic) __weak id <IESLiveStreamStateProtocol> delegate;
- (void)setHeadphonesMonitoringEnabled:(_Bool)arg1;
- (_Bool)headphonesMonitoringEnabled;
- (void)playBgMusicWithConfig:(id)arg1 createPlayerCompletion:(void (^)(_Bool, NSError *))arg2 completionBlock:(void (^)(void))arg3;
- (long long)sendSEIMsgWithKey:(NSString *)arg1 value:(NSObject *)arg2 repeatTimes:(long long)arg3 keyFrameOnly:(_Bool)arg4 allowsCovered:(_Bool)arg5;
- (void)pushEffectedVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (id <HTSLiveKTVProtocol>)ktv;
- (id <IESLiveInteractPushStreaming>)interactStreamer;
- (id <IESLiveNormalPushStreaming>)normalStreamer;
@end
