//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetTrack;

@interface YTEditAudioAsset : NSObject
{
    AVAssetTrack *_audioAsset;
    CDStruct_1b6d18a9 _insertionTime;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_1b6d18a9 insertionTime; // @synthesize insertionTime=_insertionTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) AVAssetTrack *audioAsset; // @synthesize audioAsset=_audioAsset;
- (void).cxx_destruct;
- (id)initWithAudioAsset:(id)arg1;

@end
