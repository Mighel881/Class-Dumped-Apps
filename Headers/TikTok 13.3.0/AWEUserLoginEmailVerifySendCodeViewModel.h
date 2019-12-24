//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUserLoginSendCodeViewModel.h"

#import "AWEAccountRequestTimerService-Protocol.h"

@class NSString;

@interface AWEUserLoginEmailVerifySendCodeViewModel : AWEUserLoginSendCodeViewModel <AWEAccountRequestTimerService>
{
    _Bool _isFirstSend;
    unsigned long long _scene;
}

@property(nonatomic) _Bool isFirstSend; // @synthesize isFirstSend=_isFirstSend;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)accountRequestTimerCallback:(unsigned long long)arg1 retryTime:(unsigned long long)arg2 context:(unsigned long long)arg3;
- (void)setTipAndValidWithRemainTime:(unsigned long long)arg1 isFirstSend:(_Bool)arg2;
- (unsigned long long)sendTypeWithStatus:(_Bool)arg1;
- (id)stringForSendStatus:(_Bool)arg1;
- (void)resetStatusWithContext:(unsigned long long)arg1 firstSend:(_Bool)arg2;
- (void)restoreStatus:(_Bool)arg1;
- (void)sendCode:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
