//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface YTChainedAnimation : NSObject
{
    NSMutableArray *_animationPhases;
    CDUnknownBlockType _completion;
    _Bool _isCanceled;
}

- (void).cxx_destruct;
- (void)runAnimationPhases:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)cancelAnimations;
- (void)runAnimations;
- (void)setCompletionPhase:(CDUnknownBlockType)arg1;
- (void)addAnimationPhaseWithDelay:(double)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4;
- (id)init;

@end

