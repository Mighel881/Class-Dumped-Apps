//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/BKBloksLayoutController-Protocol.h>

@class NSString;

@interface BKBloksLayoutController : NSObject <BKBloksLayoutController>
{
    struct BKBloksLayoutResult<BKBloksLayout> _computedLayout;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)computeLayoutWithModelIfNecessary:(id)arg1 constrainingSize:(struct CKSizeRange)arg2;
- (void)mountInView:(id)arg1 context:(id)arg2;
- (struct CGSize)size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

