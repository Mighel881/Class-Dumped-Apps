//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AudioUnitPool : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)sharedPool;
- (void)close;
- (void)pushbackAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
- (struct OpaqueAudioComponentInstance *)getAudioUnit;
- (id)init;

@end
