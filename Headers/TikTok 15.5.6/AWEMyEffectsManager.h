//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AWEMyEffectsManager : NSObject
{
    NSArray *_myStickers;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSArray *myStickers; // @synthesize myStickers=_myStickers;
- (void).cxx_destruct;
- (_Bool)hasEffectInMyStickers:(id)arg1;
- (void)removeMyEffect:(id)arg1;
- (void)addMyEffect:(id)arg1;
- (void)downloadMyStickersWithCompletion:(CDUnknownBlockType)arg1;

@end
