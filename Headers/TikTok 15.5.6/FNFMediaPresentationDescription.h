//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface FNFMediaPresentationDescription : NSObject
{
    _Bool _isDynamic;
    _Bool _isFragmented;
    _Bool _isPredictive;
    _Bool _isManifestService;
    _Bool _containsUsingASRCaptions;
    _Bool _containsCompleteTimeline;
    unsigned int _durationMS;
    long long _videoType;
    double _publishFrameTimeMS;
    NSString *_mpdAccessibilityDescription;
    NSDate *_availabilityEndTime;
    NSDate *_publishTime;
    long long _firstAvTimeMS;
    long long _currentServerTimeMs;
    long long _lastVideoFrameTimeMs;
    NSString *_loapStreamId;
    NSString *_loapStreamType;
    NSArray *_videoTracks;
    NSArray *_audioTracks;
}

+ (id)prettyPrintXML:(id)arg1;
+ (id)getKeyId:(const struct node *)arg1;
+ (id)getPssh:(const struct node *)arg1;
+ (struct _NSRange)rangeFromStartToEndString:(id)arg1;
+ (id)urlFromBase:(id)arg1 suffix:(id)arg2;
+ (id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSArray *audioTracks; // @synthesize audioTracks=_audioTracks;
@property(readonly, copy, nonatomic) NSArray *videoTracks; // @synthesize videoTracks=_videoTracks;
@property(readonly, copy, nonatomic) NSString *loapStreamType; // @synthesize loapStreamType=_loapStreamType;
@property(readonly, copy, nonatomic) NSString *loapStreamId; // @synthesize loapStreamId=_loapStreamId;
@property(readonly, nonatomic) long long lastVideoFrameTimeMs; // @synthesize lastVideoFrameTimeMs=_lastVideoFrameTimeMs;
@property(readonly, nonatomic) long long currentServerTimeMs; // @synthesize currentServerTimeMs=_currentServerTimeMs;
@property(readonly, nonatomic) long long firstAvTimeMS; // @synthesize firstAvTimeMS=_firstAvTimeMS;
@property(readonly, copy, nonatomic) NSDate *publishTime; // @synthesize publishTime=_publishTime;
@property(readonly, copy, nonatomic) NSDate *availabilityEndTime; // @synthesize availabilityEndTime=_availabilityEndTime;
@property(readonly, copy, nonatomic) NSString *mpdAccessibilityDescription; // @synthesize mpdAccessibilityDescription=_mpdAccessibilityDescription;
@property(readonly, nonatomic) double publishFrameTimeMS; // @synthesize publishFrameTimeMS=_publishFrameTimeMS;
@property(readonly, nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) unsigned int durationMS; // @synthesize durationMS=_durationMS;
@property(readonly, nonatomic) _Bool containsCompleteTimeline; // @synthesize containsCompleteTimeline=_containsCompleteTimeline;
@property(readonly, nonatomic) _Bool containsUsingASRCaptions; // @synthesize containsUsingASRCaptions=_containsUsingASRCaptions;
@property(readonly, nonatomic) _Bool isManifestService; // @synthesize isManifestService=_isManifestService;
@property(readonly, nonatomic) _Bool isPredictive; // @synthesize isPredictive=_isPredictive;
@property(readonly, nonatomic) _Bool isFragmented; // @synthesize isFragmented=_isFragmented;
@property(readonly, nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
- (void).cxx_destruct;
- (id)initWithAudioTracks:(id)arg1 videoTracks:(id)arg2 isDynamic:(_Bool)arg3 isFragmented:(_Bool)arg4 durationMS:(unsigned int)arg5 videoType:(long long)arg6 mpdAccessibilityDescription:(id)arg7 publishFrameTime:(unsigned long long)arg8 availabilityEndTime:(id)arg9 publishTime:(id)arg10 firstAvTimeMS:(long long)arg11 currentServerTimeMs:(long long)arg12 lastVideoFrameTimeMs:(long long)arg13 isPredictive:(_Bool)arg14 isManifestService:(_Bool)arg15 containsUsingASRCaptions:(_Bool)arg16 containsCompleteTimeline:(_Bool)arg17 loapStreamId:(id)arg18 loapStreamType:(id)arg19;

@end
