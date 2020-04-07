//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <PSPDFKit/PSPDFDelegateProxying-Protocol.h>

@class NSObject, PSPDFDispatchQueue, Protocol;

@interface PSPDFDelegateProxy : NSProxy <PSPDFDelegateProxying>
{
    struct __CFDictionary *_signatures;
    id _delegate;
    Protocol *_protocol;
    PSPDFDispatchQueue *_targetQueue;
    NSObject *_defaultReturnValue;
}

@property(readonly) NSObject *defaultReturnValue; // @synthesize defaultReturnValue=_defaultReturnValue;
@property(readonly) PSPDFDispatchQueue *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(readonly) Protocol *protocol; // @synthesize protocol=_protocol;
@property(readonly) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyThatDispatchesToMainThread;
- (id)copyThatDefaultsToNSNotFound;
- (id)copyThatDefaultsToYES;
- (id)copyThatDefaultsTo:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)description;
- (id)initWithDelegate:(id)arg1 conformingToProtocol:(id)arg2 defaultReturnValue:(id)arg3 targetQueue:(id)arg4;

@end
