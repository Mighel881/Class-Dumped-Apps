//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSSet;

@interface TGPaintPanGestureRecognizer : UIPanGestureRecognizer
{
    CDUnknownBlockType _shouldRecognizeTap;
    NSSet *_touches;
}

@property(retain, nonatomic) NSSet *touches; // @synthesize touches=_touches;
@property(copy, nonatomic) CDUnknownBlockType shouldRecognizeTap; // @synthesize shouldRecognizeTap=_shouldRecognizeTap;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
