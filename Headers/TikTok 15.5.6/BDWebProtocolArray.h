//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BDWebProtocolArray : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    NSMutableArray *_innerArray;
}

@property(retain, nonatomic) NSMutableArray *innerArray; // @synthesize innerArray=_innerArray;
- (void).cxx_destruct;
- (_Bool)containsObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)copyAsNSArray;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;
- (void)dealloc;

@end
