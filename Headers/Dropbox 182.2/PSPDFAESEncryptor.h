//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSURL, PSPDFSecurityScopedURL;

@interface PSPDFAESEncryptor : NSObject
{
    CDStruct_43cfb2c2 _HMACContext;
    struct _CCCryptor *_cryptor;
    struct __sFILE *_fout;
    _Bool _haveWrittenHeader;
    _Bool _isClosed;
    NSError *_error;
    NSData *_IV;
    PSPDFSecurityScopedURL *_securityScopedURL;
    NSData *_encryptionSalt;
    NSData *_HMACSalt;
}

+ (id)randomDataOfLength:(unsigned long long)arg1;
@property(retain, nonatomic) NSData *HMACSalt; // @synthesize HMACSalt=_HMACSalt;
@property(retain, nonatomic) NSData *encryptionSalt; // @synthesize encryptionSalt=_encryptionSalt;
@property(readonly, nonatomic) PSPDFSecurityScopedURL *securityScopedURL; // @synthesize securityScopedURL=_securityScopedURL;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) _Bool haveWrittenHeader; // @synthesize haveWrittenHeader=_haveWrittenHeader;
@property(retain, nonatomic) NSData *IV; // @synthesize IV=_IV;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)header;
- (void)close;
- (_Bool)finish;
- (_Bool)write:(const void *)arg1 length:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1 key:(id)arg2;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2 PRF:(unsigned int)arg3 rounds:(unsigned long long)arg4;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2;

@end
