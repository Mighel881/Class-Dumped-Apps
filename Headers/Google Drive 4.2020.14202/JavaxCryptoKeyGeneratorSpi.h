//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JavaxCryptoKeyGeneratorSpi : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)engineGenerateKey;
- (void)engineInitWithInt:(int)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)engineInitWithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)engineInitWithJavaSecuritySecureRandom:(id)arg1;
- (id)init;

@end

