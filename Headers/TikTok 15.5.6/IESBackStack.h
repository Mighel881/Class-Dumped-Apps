//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface IESBackStack : NSObject
{
    _Bool _isPanBack;
    NSPointerArray *_stackArray;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isPanBack; // @synthesize isPanBack=_isPanBack;
@property(retain, nonatomic) NSPointerArray *stackArray; // @synthesize stackArray=_stackArray;
- (void).cxx_destruct;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)_containsObject:(id)arg1;
- (id)liveRootViewController:(id)arg1;
- (id)firstObj;
- (id)topObj;
- (void)removeAllObject;
- (void)removeAllVc;
- (_Bool)isEmpty;
- (void)popObj;
- (void)push:(id)arg1;

@end

