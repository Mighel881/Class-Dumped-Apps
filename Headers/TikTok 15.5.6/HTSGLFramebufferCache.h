//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VEAppStatusProtocol-Protocol.h"

@class HTSGLContext, NSMutableArray, NSMutableDictionary, NSString;

@interface HTSGLFramebufferCache : NSObject <VEAppStatusProtocol>
{
    NSMutableDictionary *_framebufferCache;
    NSMutableArray *_activeImageCaptureList;
    struct set<TECoreFrameBuffer *, std::__1::less<TECoreFrameBuffer *>, std::__1::allocator<TECoreFrameBuffer *>> _frameBufferSetTrash;
    HTSGLContext *_context;
}

@property(nonatomic) __weak HTSGLContext *context; // @synthesize context=_context;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)memoryWarning;
- (void)enterForeground;
- (void)enterBackground;
- (void)becomeActive;
- (void)resignActive;
- (void)addCppGLFrameBufferToBeDeleted:(void *)arg1;
- (void)dealloc;
- (void)removeFramebufferFromActiveImageCaptureList:(id)arg1;
- (void)addFramebufferToActiveImageCaptureList:(id)arg1;
- (void)purgeAllUnassignedFramebuffers;
- (void)returnFramebufferToCache:(id)arg1;
- (id)getNotExcludeFramebuffer:(id)arg1 excludeFramebufferArray:(id)arg2;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 sampleInfo:(id)arg2 onlyTexture:(_Bool)arg3 excludeFramebufferArray:(id)arg4;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 sampleInfo:(id)arg2 onlyTexture:(_Bool)arg3;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 sampleInfo:(id)arg2;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 onlyTexture:(_Bool)arg2;
- (id)fetchFramebufferForSize:(struct CGSize)arg1;
- (id)hashForSize:(struct CGSize)arg1 onlyTexture:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
