//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Keymaker/NSObject-Protocol.h>

@class NSData, NSError, NSString;

@protocol CryptoMIMECallbacks <NSObject>
- (void)onVerified:(long long)arg1;
- (void)onError:(NSError *)arg1;
- (void)onEncryptedHeaders:(NSString *)arg1;
- (void)onBody:(NSString *)arg1 mimetype:(NSString *)arg2;
- (void)onAttachment:(NSString *)arg1 data:(NSData *)arg2;
@end
