//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDFCDocumentSecurityOptions;

@interface PSPDFDocumentSecurityOptions : NSObject
{
    NSString *_ownerPassword;
    NSString *_userPassword;
    unsigned long long _keyLength;
    unsigned long long _permissions;
    unsigned long long _encryptionAlgorithm;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
@property(readonly, nonatomic) unsigned long long permissions; // @synthesize permissions=_permissions;
@property(readonly, nonatomic) unsigned long long keyLength; // @synthesize keyLength=_keyLength;
@property(readonly, copy, nonatomic) NSString *userPassword; // @synthesize userPassword=_userPassword;
@property(readonly, copy, nonatomic) NSString *ownerPassword; // @synthesize ownerPassword=_ownerPassword;
- (void).cxx_destruct;
@property(readonly, nonatomic) PDFCDocumentSecurityOptions *coreDocumentSecurityOptions;
- (id)initWithOwnerPassword:(id)arg1 userPassword:(id)arg2 keyLength:(unsigned long long)arg3 permissions:(unsigned long long)arg4 encryptionAlgorithm:(unsigned long long)arg5 error:(id *)arg6;
- (id)initWithOwnerPassword:(id)arg1 userPassword:(id)arg2 keyLength:(unsigned long long)arg3 permissions:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithOwnerPassword:(id)arg1 userPassword:(id)arg2 keyLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithOwnerPassword:(id)arg1 userPassword:(id)arg2 error:(id *)arg3;
- (id)init;

@end

