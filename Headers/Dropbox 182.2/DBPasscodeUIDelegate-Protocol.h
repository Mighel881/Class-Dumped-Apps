//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class NSError;
@protocol DBPasscodeUIPresenter;

@protocol DBPasscodeUIDelegate <NSObject>
- (void)passcodePresenterDidReceiveBiometricError:(id <DBPasscodeUIPresenter>)arg1 error:(NSError *)arg2 withTriggerType:(unsigned long long)arg3;
- (void)passcodePresenterWillShowBiometricAuth:(id <DBPasscodeUIPresenter>)arg1 withTrigger:(unsigned long long)arg2;
- (_Bool)shouldShowCancelButtonForPresenter:(id <DBPasscodeUIPresenter>)arg1;
- (void)passcodePresenterCancelled:(id <DBPasscodeUIPresenter>)arg1;
- (void)passcodePresenterDidReceiveCorrectPasscode:(id <DBPasscodeUIPresenter>)arg1;
- (void)passcodePresenterDidSetPasscode:(id <DBPasscodeUIPresenter>)arg1;
@end

