//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/Promise-Protocol.h>

@class MdxError, NSString;

@interface IosPromise : NSObject <Promise>
{
    NSString *_successVal;
    MdxError *_mdxError;
    CDUnknownBlockType _workBlock;
}

+ (id)promiseQueue;
@property(copy, nonatomic) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;
@property(retain, nonatomic) MdxError *mdxError; // @synthesize mdxError=_mdxError;
@property(retain, nonatomic) NSString *successVal; // @synthesize successVal=_successVal;
- (void).cxx_destruct;
- (void)finally:(CDUnknownBlockType)arg1;
- (void)done:(CDUnknownBlockType)arg1:(CDUnknownBlockType)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithSuccessVal:(id)arg1;
- (id)initWithSuccessVal:(id)arg1 error:(id)arg2 workBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

