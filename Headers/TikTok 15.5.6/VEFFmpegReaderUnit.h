//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VEVideoProcessDelegate-Protocol.h"

@class NSError, NSString, VEVideoConfig, VEffmpegReader;
@protocol VEVideoProcessDelegate;

@interface VEFFmpegReaderUnit : NSObject <VEVideoProcessDelegate>
{
    id <VEVideoProcessDelegate> _videoDownstream;
    NSError *_error;
    VEVideoConfig *_configData;
    VEffmpegReader *_ffmepgeReader;
}

@property(retain, nonatomic) VEffmpegReader *ffmepgeReader; // @synthesize ffmepgeReader=_ffmepgeReader;
@property(retain, nonatomic) VEVideoConfig *configData; // @synthesize configData=_configData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <VEVideoProcessDelegate> videoDownstream; // @synthesize videoDownstream=_videoDownstream;
- (void).cxx_destruct;
- (id)getReaderError;
- (void)cancelReader;
- (void)stopReader;
- (_Bool)startReader;
- (void)seektoTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)processSampleData:(id)arg1;
- (void)setConfig:(id)arg1;
@property(readonly, nonatomic) int maxRefFrames;
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *vtDesc;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
