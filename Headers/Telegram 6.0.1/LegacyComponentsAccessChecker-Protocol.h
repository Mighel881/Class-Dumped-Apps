//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/NSObject-Protocol.h>

@protocol LegacyComponentsAccessChecker <NSObject>
- (_Bool)checkLocationAuthorizationStatusForIntent:(int)arg1 alertDismissComlpetion:(void (^)(void))arg2;
- (_Bool)checkCameraAuthorizationStatusForIntent:(int)arg1 alertDismissCompletion:(void (^)(void))arg2;
- (_Bool)checkMicrophoneAuthorizationStatusForIntent:(int)arg1 alertDismissCompletion:(void (^)(void))arg2;
- (_Bool)checkPhotoAuthorizationStatusForIntent:(int)arg1 alertDismissCompletion:(void (^)(void))arg2;
- (_Bool)checkAddressBookAuthorizationStatusWithAlertDismissComlpetion:(void (^)(void))arg1;
@end
