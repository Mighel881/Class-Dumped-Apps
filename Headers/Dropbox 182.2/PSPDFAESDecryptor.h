//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSString, NSURL, PSPDFSecurityScopedURL;

@interface PSPDFAESDecryptor : NSObject
{
    struct __sFILE *_fin;
    long long _blockCount;
    long long _lastBlockRead;
    struct _CCCryptor *_cryptor;
    char _currentIV[16];
    CDStruct_43cfb2c2 _HMACContext;
    long long _offsetEncryptedDataStarts;
    long long _onDiskFileSize;
    long long _encryptedDataSize;
    NSMutableData *_HMACData;
    NSMutableData *_storedHMACData;
    unsigned char _options;
    _Bool _hasV1HMAC;
    _Bool _hasV2Password;
    _Bool _isLegacyFileFormat;
    unsigned int _PRF;
    long long _decryptedFileSize;
    NSString *_password;
    NSData *_encryptionKey;
    NSData *_HMACKey;
    PSPDFSecurityScopedURL *_securityScopedURL;
    unsigned long long _rounds;
    NSString *_salt;
    unsigned long long _roundsFromLegacyAPI;
}

@property(nonatomic) unsigned long long roundsFromLegacyAPI; // @synthesize roundsFromLegacyAPI=_roundsFromLegacyAPI;
@property(copy, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property(nonatomic) unsigned int PRF; // @synthesize PRF=_PRF;
@property(nonatomic) _Bool isLegacyFileFormat; // @synthesize isLegacyFileFormat=_isLegacyFileFormat;
@property(nonatomic) unsigned long long rounds; // @synthesize rounds=_rounds;
@property(retain, nonatomic) PSPDFSecurityScopedURL *securityScopedURL; // @synthesize securityScopedURL=_securityScopedURL;
@property(retain, nonatomic) NSData *HMACKey; // @synthesize HMACKey=_HMACKey;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) _Bool hasV2Password; // @synthesize hasV2Password=_hasV2Password;
@property(nonatomic) _Bool hasV1HMAC; // @synthesize hasV1HMAC=_hasV1HMAC;
@property(nonatomic) unsigned char options; // @synthesize options=_options;
@property(nonatomic) long long decryptedFileSize; // @synthesize decryptedFileSize=_decryptedFileSize;
- (void).cxx_destruct;
- (id)HMACdata;
- (_Bool)decryptBlock:(long long)arg1 buffer:(void *)arg2;
- (long long)offsetForBlock:(long long)arg1;
- (long long)offsetForIVForBlock:(long long)arg1;
- (_Bool)updateOptionsForPreamble:(id)arg1;
- (id)keyForPassword:(id)arg1 salt:(id)arg2 PRF:(unsigned int)arg3 rounds:(unsigned long long)arg4;
@property(readonly, nonatomic) _Bool isCorrectHMAÐ¡;
- (unsigned long long)bytesAtOffset:(long long)arg1 length:(unsigned long long)arg2 buffer:(void *)arg3 bufferSize:(unsigned long long)arg4;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)dealloc;
- (BOOL)paddingLength;
- (_Bool)configureWithLegacyFormatWithError:(id *)arg1;
- (_Bool)configureWithRNCryptorFormatWithError:(id *)arg1;
- (_Bool)initCommonWithError:(id *)arg1;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2 salt:(id)arg3 rounds:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 key:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2 PRF:(unsigned int)arg3 rounds:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2 error:(id *)arg3;

@end
