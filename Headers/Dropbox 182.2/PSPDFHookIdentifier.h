//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PSPDFHook-Protocol.h>

@class NSString;

@interface PSPDFHookIdentifier : NSObject <PSPDFHook>
{
    id _target;
    SEL _selector;
    id _block;
}

@property(readonly, nonatomic) id block; // @synthesize block=_block;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)remove;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 block:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
