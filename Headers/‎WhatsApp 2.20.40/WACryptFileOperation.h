//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATriggeredOperation.h"

@class NSData, NSFileHandle, NSString, WABackupFile, WABackupKey;

@interface WACryptFileOperation : WATriggeredOperation
{
    NSData *_dataHeader;
    WABackupFile *_header;
    unsigned int _operation;
    CDUnknownBlockType _keyLoader;
    NSFileHandle *_inputFile;
    NSFileHandle *_outputFile;
    int _inputfd;
    int _outputfd;
    struct _CCCryptor *_cryptor;
    CDStruct_43cfb2c2 _hmac;
    CDStruct_43cfb2c2 *_hmacPtr;
    long long _bytesToCrypt;
    void *_readBuffer;
    unsigned long long _readBufferLength;
    void *_outputBuffer;
    unsigned long long _outputBufferLength;
    NSString *_bestName;
    _Bool _hasEncryptionKeyError;
    _Bool _hasNoConnectionError;
    _Bool _failed;
    NSString *_sourcePath;
    NSString *_destinationPath;
    WABackupKey *_backupKey;
}

@property _Bool failed; // @synthesize failed=_failed;
@property(retain) WABackupKey *backupKey; // @synthesize backupKey=_backupKey;
@property _Bool hasNoConnectionError; // @synthesize hasNoConnectionError=_hasNoConnectionError;
@property _Bool hasEncryptionKeyError; // @synthesize hasEncryptionKeyError=_hasEncryptionKeyError;
@property(readonly, copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(readonly, copy) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (void).cxx_destruct;
- (void)finish;
- (void)performTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)tryToCryptWithBackupHMAC:(CDStruct_43cfb2c2 *)arg1;
- (_Bool)prepareForCrypt;
- (void)closeOutputFile;
- (_Bool)tryToOpenOutputFile;
- (_Bool)verifyFileHeader;
- (void)closeInputFile;
- (_Bool)tryToOpenInputFileAtURL:(id)arg1;
- (_Bool)tryToRunOperationWithInputURL:(id)arg1;
- (void)runOperationWithInputURL:(id)arg1;
- (void)runOperation;
- (void)loadKeyWithCompletion:(CDUnknownBlockType)arg1;
- (id)readFileHeader;
- (void)getHMACBytes:(void *)arg1 ofLength:(unsigned long long)arg2;
- (_Bool)writeBytes:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (id)readDataOfLength:(unsigned long long)arg1;
- (long long)readBytes:(void *)arg1 ofLength:(unsigned long long)arg2;
- (_Bool)succeeded;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 operation:(unsigned int)arg3;
- (id)initWithDependenciesRequired:(_Bool)arg1;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 decryptionKeyLoader:(CDUnknownBlockType)arg3;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 backupKey:(id)arg3 initializationVector:(id)arg4;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 backupKey:(id)arg3;

@end

