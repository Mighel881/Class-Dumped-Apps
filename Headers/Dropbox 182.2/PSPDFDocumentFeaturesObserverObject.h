//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PSPDFDocumentFeaturesObserver-Protocol.h>

@class NSLock, NSString;

@interface PSPDFDocumentFeaturesObserverObject : NSObject <PSPDFDocumentFeaturesObserver>
{
    _Bool _boundToObjectLifetime;
    id _boundObject;
    NSString *_feature;
    CDUnknownBlockType _handler;
    NSLock *_lock;
}

@property(readonly, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(readonly, nonatomic, getter=isBoundToObjectLifetime) _Bool boundToObjectLifetime; // @synthesize boundToObjectLifetime=_boundToObjectLifetime;
@property(readonly, nonatomic) __weak id boundObject; // @synthesize boundObject=_boundObject;
- (void).cxx_destruct;
- (void)bindToObjectLifetime:(id)arg1;
- (id)initWithFeature:(id)arg1 handler:(CDUnknownBlockType)arg2 lock:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
