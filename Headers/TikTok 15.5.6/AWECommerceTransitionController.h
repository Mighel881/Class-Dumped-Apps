//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWECommerceTransitionController : NSObject
{
    long long _transitionType;
    CDUnknownBlockType _transitionWillBegin;
}

@property(copy, nonatomic) CDUnknownBlockType transitionWillBegin; // @synthesize transitionWillBegin=_transitionWillBegin;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)showViewController:(id)arg1;

@end
