//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SRLMemoizingScope : NSObject
{
    NSMutableDictionary *_instances;
    NSMutableDictionary *_instanceCreationLocks;
}

- (void).cxx_destruct;
- (id)instanceOfType:(id)arg1 factoryBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

