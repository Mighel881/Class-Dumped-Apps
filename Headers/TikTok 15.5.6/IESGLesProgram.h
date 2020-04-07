//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSGLContext, NSMutableDictionary;

@interface IESGLesProgram : NSObject
{
    unsigned int _program;
    unsigned int _vShader;
    unsigned int _fShader;
    long long _programType;
    HTSGLContext *_context;
    NSMutableDictionary *_uniformDict;
}

@property(retain, nonatomic) NSMutableDictionary *uniformDict; // @synthesize uniformDict=_uniformDict;
@property(nonatomic) unsigned int fShader; // @synthesize fShader=_fShader;
@property(nonatomic) unsigned int vShader; // @synthesize vShader=_vShader;
@property(nonatomic) unsigned int program; // @synthesize program=_program;
@property(nonatomic) __weak HTSGLContext *context; // @synthesize context=_context;
@property(nonatomic) long long programType; // @synthesize programType=_programType;
- (void).cxx_destruct;
- (void)unuse;
- (void)use;
- (_Bool)link;
- (int)fetchUniform:(id)arg1;
- (void)bindAttribute:(id)arg1;
- (unsigned int)compileShader:(unsigned int)arg1 string:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 vertex:(id)arg2 fragment:(id)arg3;

@end
