//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSGLContext, NSString;

@interface VEFeatureOCWrapper : NSObject
{
    void *_handler;
    NSString *_identifier;
    HTSGLContext *_context;
}

@property(retain, nonatomic) HTSGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) void *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)destroyByEngine:(void *)arg1;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 resPath:(id)arg2 identifier:(id)arg3;

@end
