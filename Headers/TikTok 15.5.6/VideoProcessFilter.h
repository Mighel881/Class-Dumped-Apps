//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VideoProcessFilter : NSObject
{
    unsigned int m_hVertexShader;
    unsigned int m_hFragShader;
    int m_nFrameUniform;
    float m_lstVertices[8];
    float m_lstTexCoord[8];
    int _imgHeight;
    int _imgWidth;
    unsigned int _program;
    NSString *_fragmentShader;
    NSString *_vertexShader;
}

@property(readonly, nonatomic) unsigned int program; // @synthesize program=_program;
@property(nonatomic) int imgWidth; // @synthesize imgWidth=_imgWidth;
@property(nonatomic) int imgHeight; // @synthesize imgHeight=_imgHeight;
@property(retain, nonatomic) NSString *vertexShader; // @synthesize vertexShader=_vertexShader;
@property(retain, nonatomic) NSString *fragmentShader; // @synthesize fragmentShader=_fragmentShader;
- (void).cxx_destruct;
- (int)doChangeFormat:(int)arg1 width:(int)arg2 height:(int)arg3 strides:(int *)arg4;
- (void)setAttributes:(int)arg1;
- (void)setUniforms:(int)arg1;
- (void)initAttributes:(unsigned int)arg1;
- (void)initUniforms:(unsigned int)arg1;
- (unsigned int)initProgram;
- (void)uninitProgram;
- (void)dealloc;
- (id)init;

@end
