//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSXObservation : NSObject
{
    _Bool _isAttached;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
}

+ (id)observationWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)detachFromObject:(id)arg1;
- (void)attachToObject:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;

@end

