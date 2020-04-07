//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TGObserverProxyScheduledNotification : NSObject
{
    _Bool _cancelled;
    id _target;
    SEL _targetSelector;
    id _notification;
    unsigned long long _passCount;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned long long passCount; // @synthesize passCount=_passCount;
@property(retain, nonatomic) id notification; // @synthesize notification=_notification;
@property(nonatomic) SEL targetSelector; // @synthesize targetSelector=_targetSelector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)execute;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 targetSelector:(SEL)arg2 notification:(id)arg3 passCount:(unsigned long long)arg4;

@end
