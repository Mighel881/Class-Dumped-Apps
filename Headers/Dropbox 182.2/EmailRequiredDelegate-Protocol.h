//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBXRecaptchaV2, NSString;
@protocol DBLoginControllerProtocol;

@protocol EmailRequiredDelegate <NSObject>
- (void)loginControllerInvalidEmail:(id <DBLoginControllerProtocol>)arg1;
- (void)loginControllerEmptyEmail:(id <DBLoginControllerProtocol>)arg1;
- (NSString *)loginControllerUsername:(id <DBLoginControllerProtocol>)arg1;

@optional
- (DBXRecaptchaV2 *)loginControllerCaptcha:(id <DBLoginControllerProtocol>)arg1;
@end

