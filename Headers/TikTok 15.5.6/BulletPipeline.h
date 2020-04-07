//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BulletProcessor-Protocol.h"

@class NSArray, NSEnumerator, NSString;
@protocol BulletConnector;

@interface BulletPipeline : NSObject <BulletProcessor>
{
    NSArray *_processors;
    id <BulletConnector> _connector;
    CDUnknownBlockType _transformer;
    NSEnumerator *_enumerator;
    CDUnknownBlockType _nextProcessor;
}

@property(copy, nonatomic) CDUnknownBlockType nextProcessor; // @synthesize nextProcessor=_nextProcessor;
@property(retain, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
@property(copy, nonatomic) CDUnknownBlockType transformer; // @synthesize transformer=_transformer;
@property(retain, nonatomic) id <BulletConnector> connector; // @synthesize connector=_connector;
@property(copy, nonatomic) NSArray *processors; // @synthesize processors=_processors;
- (void).cxx_destruct;
- (void)processInput:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (id)initWithProcessors:(id)arg1 connector:(id)arg2 transformer:(CDUnknownBlockType)arg3;
- (id)initWithProcessors:(id)arg1 connector:(id)arg2;
- (id)initWithProcessors:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
