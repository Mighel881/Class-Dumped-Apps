//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCMiddleware.h"

@class NSArray;

@interface ACCCompositeMiddleware : ACCMiddleware
{
    NSArray *_middlewares;
}

+ (id)middlewareWithMiddleawares:(id)arg1;
@property(retain, nonatomic) NSArray *middlewares; // @synthesize middlewares=_middlewares;
- (void).cxx_destruct;
- (CDUnknownBlockType)_buildNextSlibing:(id)arg1 next:(CDUnknownBlockType)arg2;
- (id)handleAction:(id)arg1 next:(CDUnknownBlockType)arg2;
- (id)bindChildMiddlewares:(id)arg1;
- (id)initWithMiddlewares:(id)arg1;

@end

