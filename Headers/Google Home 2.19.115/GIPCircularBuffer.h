//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface GIPCircularBuffer : NSObject <NSFastEnumeration>
{
    unsigned long long _capacity;
    NSMutableArray *_buffer;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)arrayRepresentation;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) id firstObject;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

