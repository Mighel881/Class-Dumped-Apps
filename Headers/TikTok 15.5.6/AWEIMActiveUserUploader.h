//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString, NSTimer;

@interface AWEIMActiveUserUploader : NSObject <AWEUserMessage>
{
    _Bool _notFirstFire;
    NSTimer *_activeTimer;
    long long _fireDenyCount;
}

@property(nonatomic) long long fireDenyCount; // @synthesize fireDenyCount=_fireDenyCount;
@property(nonatomic) _Bool notFirstFire; // @synthesize notFirstFire=_notFirstFire;
@property(retain, nonatomic) NSTimer *activeTimer; // @synthesize activeTimer=_activeTimer;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)applicationWillResignActiveNoti:(id)arg1;
- (void)applicationDidBecomeActiveNoti:(id)arg1;
- (void)updateUserActiveStatusWithEntrance:(id)arg1;
- (void)p_updateUserActive;
- (void)cleanTimer;
- (void)setUpTimer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
