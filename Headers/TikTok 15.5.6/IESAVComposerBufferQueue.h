//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class IESSampleBuffer, NSMutableDictionary;

@interface IESAVComposerBufferQueue : IESMMObject
{
    _Bool _isStillRender;
    _Bool _stillRenderCancelComplete;
    NSMutableDictionary *_bufferCacheDic;
    IESSampleBuffer *_head;
    IESSampleBuffer *_trail;
    IESSampleBuffer *_toDelete;
    CDStruct_1b6d18a9 _newbufferTime;
}

@property(retain, nonatomic) IESSampleBuffer *toDelete; // @synthesize toDelete=_toDelete;
@property(retain, nonatomic) IESSampleBuffer *trail; // @synthesize trail=_trail;
@property(retain, nonatomic) IESSampleBuffer *head; // @synthesize head=_head;
@property(nonatomic) CDStruct_1b6d18a9 newbufferTime; // @synthesize newbufferTime=_newbufferTime;
@property(retain, nonatomic) NSMutableDictionary *bufferCacheDic; // @synthesize bufferCacheDic=_bufferCacheDic;
@property(nonatomic) _Bool stillRenderCancelComplete; // @synthesize stillRenderCancelComplete=_stillRenderCancelComplete;
@property(nonatomic) _Bool isStillRender; // @synthesize isStillRender=_isStillRender;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAllSampleBuffers;
- (void)releaseQueue;
- (void)resetToDelete:(id)arg1;
- (id)getSampleBufferbyBufferName:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (id)findSampleBufferWithPixelBuffer:(id)arg1;
- (unsigned long long)bufferCacheCount;
- (void)dequeue:(id)arg1;
- (void)enqueue:(id)arg1;
- (id)init;

@end

