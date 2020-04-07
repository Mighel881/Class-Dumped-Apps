//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMutableComposition.h>

@interface AVMutableComposition (VideoAndPic)
+ (CDStruct_1b6d18a9)createTimeMachineOldTime:(CDStruct_1b6d18a9)arg1 withTimemachine:(id)arg2;
+ (CDStruct_1b6d18a9)createNewTimeMachineOldTime:(CDStruct_1b6d18a9)arg1 withTimemachine:(id)arg2;
- (void)makeAsset:(id)arg1 toDuration:(double)arg2 insertIntrack:(id)arg3;
- (id)getAudioTrackWithInsertRange:(CDStruct_e83c9415)arg1 sourceTrack:(id)arg2;
- (id)getTrackWithInsertRange:(CDStruct_e83c9415)arg1;
- (id)getTrackWithInsertRange:(CDStruct_e83c9415)arg1 sourceTrack:(id)arg2;
- (id)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 startTime:(CDStruct_1b6d18a9)arg3 duration:(CDStruct_1b6d18a9)arg4 volume:(double)arg5 volumeDict:(id)arg6 repeat:(_Bool)arg7 useAudioFilter:(_Bool)arg8 nextOverlap:(float)arg9 isSubTrack:(_Bool)arg10;
- (_Bool)appendVideoFragmentAsset:(id)arg1 rate:(double)arg2 addVideoInfo:(id)arg3 duration:(float)arg4;
- (_Bool)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 rate:(double)arg3 volume:(double)arg4 volumeDict:(id)arg5 addVideoInfo:(id)arg6;
- (id)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 rate:(double)arg3 volume:(double)arg4 volumeDict:(id)arg5 overlap:(double)arg6 startTime:(CDStruct_1b6d18a9)arg7;
- (id)videoSoundCompositionTrack;
- (id)videoCompositionTrack;
- (int)getVideoTrackID;
- (void)showCompositionForDebug:(id)arg1 audioMix:(id)arg2;
- (_Bool)mixAudioAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 volumne:(id)arg3 startTime:(CDStruct_1b6d18a9)arg4 paramsArray:(id)arg5 isInOneAudioTrack:(_Bool)arg6;
- (_Bool)mixAudioAsset:(id)arg1 withTimeClipRange:(id)arg2 paramsArray:(id)arg3 withCount:(long long)arg4 volumne:(double)arg5 videodata:(id)arg6;
- (_Bool)mixAudioAsset:(id)arg1 withCount:(long long)arg2 withTimeClipRange:(CDStruct_e83c9415)arg3 volumne:(id)arg4 paramsArray:(id)arg5 videodata:(id)arg6;
- (_Bool)mixAudioAsset:(id)arg1 withCount:(long long)arg2 withTimeClipRange:(CDStruct_e83c9415)arg3 startTime:(CDStruct_1b6d18a9)arg4 volumne:(id)arg5 paramsArray:(id)arg6 videodata:(id)arg7;
- (_Bool)mixAudioAsset:(id)arg1 withCount:(long long)arg2 timeClipRange:(CDStruct_e83c9415)arg3 volume:(double)arg4 paramsArray:(id)arg5 videodata:(id)arg6;
- (_Bool)mixAudioAsset:(id)arg1 withCount:(long long)arg2 timeClipRange:(CDStruct_e83c9415)arg3 startTime:(CDStruct_1b6d18a9)arg4 volume:(double)arg5 paramsArray:(id)arg6 videodata:(id)arg7;
- (_Bool)mixAudioAsset:(id)arg1 withStartTime:(CDStruct_1b6d18a9)arg2 volumne:(double)arg3 paramsArray:(id)arg4 videodata:(id)arg5;
- (_Bool)mixAudioAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 attachTime:(CDStruct_1b6d18a9)arg3 volumne:(double)arg4 paramsArray:(id)arg5 videodata:(id)arg6;
- (_Bool)appendVideoSoundFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 rate:(double)arg3 volume:(double)arg4 volumeDict:(id)arg5 atTime:(CDStruct_1b6d18a9)arg6 isAudioMuted:(_Bool)arg7;
- (_Bool)freezeFrameMixcompotionwithAsset:(id)arg1 startTime:(double)arg2 duration:(double)arg3;
- (_Bool)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 durationInfo:(id)arg3 rate:(double)arg4 volume:(double)arg5 volumeDict:(id)arg6 isAudioMuted:(_Bool)arg7;
- (_Bool)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 videoVolumeClipRange:(CDStruct_e83c9415)arg3 durationInfo:(id)arg4 rate:(double)arg5 volume:(double)arg6 volumeDict:(id)arg7 isAudioMuted:(_Bool)arg8;
- (_Bool)appendVideoFragmentAsset:(id)arg1 withTimeClipRange:(CDStruct_e83c9415)arg2 durationInfo:(id)arg3 rate:(double)arg4 volume:(double)arg5 volumeDict:(id)arg6;
- (_Bool)rebuildAsset:(id)arg1 withRanges:(id)arg2;
- (_Bool)createTimeMachineAsset:(id)arg1 withStoryConfig:(id)arg2;
- (_Bool)createTimeMachineAsset:(id)arg1 withTimemachine:(id)arg2;
- (_Bool)createNewTimeMachineAsset:(id)arg1 withTimemachine:(id)arg2;
- (id)videoSoundCompositionTrack;
- (id)videoCompositionTrack;
@end
