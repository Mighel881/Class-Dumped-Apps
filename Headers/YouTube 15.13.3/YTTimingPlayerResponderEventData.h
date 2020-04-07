//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLFormat, NSArray, YTInnerTubeResponseCacheContext, YTTimingPlayerResponderEventAdData, YTTimingPlayerResponderEventVideoData;

@interface YTTimingPlayerResponderEventData : NSObject
{
    int _playerType;
    int _visibility;
    MLFormat *_mediaFormat;
    NSArray *_serviceTrackingParams;
    YTInnerTubeResponseCacheContext *_cacheContext;
    YTTimingPlayerResponderEventAdData *_adData;
    YTTimingPlayerResponderEventVideoData *_videoData;
}

+ (id)dataWithPlayerType:(int)arg1;
+ (id)dataWithVisibility:(int)arg1;
+ (id)dataWithServiceTrackingParams:(id)arg1 cacheContext:(id)arg2;
+ (id)dataWithAdData:(id)arg1;
+ (id)dataWithVideoData:(id)arg1;
+ (id)dataWithMediaFormat:(id)arg1;
@property(readonly, nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(readonly, nonatomic) int playerType; // @synthesize playerType=_playerType;
@property(readonly, nonatomic) YTTimingPlayerResponderEventVideoData *videoData; // @synthesize videoData=_videoData;
@property(readonly, nonatomic) YTTimingPlayerResponderEventAdData *adData; // @synthesize adData=_adData;
@property(readonly, nonatomic) YTInnerTubeResponseCacheContext *cacheContext; // @synthesize cacheContext=_cacheContext;
@property(readonly, nonatomic) NSArray *serviceTrackingParams; // @synthesize serviceTrackingParams=_serviceTrackingParams;
@property(readonly, nonatomic) MLFormat *mediaFormat; // @synthesize mediaFormat=_mediaFormat;
- (void).cxx_destruct;
- (id)initWithVideoData:(id)arg1 mediaFormat:(id)arg2 adData:(id)arg3 serviceTrackingParams:(id)arg4 cacheContext:(id)arg5 visibility:(int)arg6 playerType:(int)arg7;

@end
