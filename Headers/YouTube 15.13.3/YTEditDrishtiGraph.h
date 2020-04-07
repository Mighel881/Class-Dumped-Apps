//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/DrishtiGraphDelegate-Protocol.h>

@class DrishtiGraph, NSArray, NSMutableArray, NSString;
@protocol YTEditDrishtiGraphDelegate;

@interface YTEditDrishtiGraph : NSObject <DrishtiGraphDelegate>
{
    DrishtiGraph *_graph;
    NSArray *_enabledEffectIDs;
    long long _executionMode;
    struct map<std::__1::basic_string<char>, NSString *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, NSString *>>> _outputNameToEffectMap;
    basic_string_90719d97 _videoInputName;
    long long _frameNumber;
    NSMutableArray *_timestamps;
    id <YTEditDrishtiGraphDelegate> _delegate;
    NSString *_selectedEffectID;
}

@property(copy, nonatomic) NSString *selectedEffectID; // @synthesize selectedEffectID=_selectedEffectID;
@property(nonatomic) __weak id <YTEditDrishtiGraphDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drishtiGraph:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 fromStream:(const basic_string_90719d97 *)arg3 timestamp:(const struct Timestamp *)arg4;
- (void)waitUntilIdle;
- (void)asyncTeardownDrishtiGraph:(id)arg1;
- (void)dealloc;
- (_Bool)processVideoFrame:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timestamp:(double)arg3 availableAssetIDs:(id)arg4 stickerModels:(id)arg5 userControlEvents:(id)arg6;
- (_Bool)processVideoFrame:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timestamp:(double)arg3 availableAssetIDs:(id)arg4 stickerModels:(id)arg5;
- (_Bool)processVideoFrame:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timestamp:(double)arg3;
- (int)orientationForRotationMode:(long long)arg1;
- (id)makeDrishtiGraphWithOutputSize:(struct CGSize)arg1 serializedConfig:(id)arg2 effectAssetsDirectoryPath:(id)arg3 yuvInput:(_Bool)arg4;
- (void)setSelectedEffectId:(id)arg1;
- (id)initWithExecutionMode:(long long)arg1 effectIDs:(id)arg2 serializedConfig:(id)arg3 effectAssetsDirectoryPath:(id)arg4 outputSize:(struct CGSize)arg5 yuvInput:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
