//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSGLContextProtocol-Protocol.h"

@class EAGLContext, EAGLSharegroup, LSGLFramebufferCache, LSGLProgram, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface LSGPUContext : NSObject <LSGLContextProtocol>
{
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
    void *openGLESContextQueueKey;
    EAGLContext *_context;
    LSGLProgram *_currentShaderProgram;
    NSObject<OS_dispatch_queue> *_contextQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    LSGLFramebufferCache *_framebufferCache;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) LSGLProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) LSGLFramebufferCache *framebufferCache; // @synthesize framebufferCache=_framebufferCache;
@property(readonly) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;
- (void)useSharegroup:(id)arg1;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)presentBufferForDisplay;
- (void)setContextShaderProgram:(id)arg1;
- (void)useAsCurrentContext;
- (void *)contextKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
