//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface JETBluetoothSecurity : NSObject
{
    NSData *_peerHMACNonce;
    NSData *_masterKeyData;
    NSString *_setupPSK;
    struct ec_key_st *_localEcKey;
    NSData *_publicKeyData;
    NSData *_privateKeyData;
    NSData *_hmacNonceData;
    NSData *_authenticatorKeyData;
    NSData *_encryptionKeyData;
}

@property(retain, nonatomic) NSData *encryptionKeyData; // @synthesize encryptionKeyData=_encryptionKeyData;
@property(retain, nonatomic) NSData *authenticatorKeyData; // @synthesize authenticatorKeyData=_authenticatorKeyData;
@property(retain, nonatomic) NSData *hmacNonceData; // @synthesize hmacNonceData=_hmacNonceData;
@property(retain, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(retain, nonatomic) NSData *publicKeyData; // @synthesize publicKeyData=_publicKeyData;
@property(nonatomic) struct ec_key_st *localEcKey; // @synthesize localEcKey=_localEcKey;
@property(retain, nonatomic) NSString *setupPSK; // @synthesize setupPSK=_setupPSK;
@property(readonly, nonatomic) NSData *masterKeyData; // @synthesize masterKeyData=_masterKeyData;
@property(retain, nonatomic) NSData *peerHMACNonce; // @synthesize peerHMACNonce=_peerHMACNonce;
- (void).cxx_destruct;
- (id)decryptData:(id)arg1 withKey:(id)arg2;
- (id)encryptData:(id)arg1 withKey:(id)arg2;
- (id)initializationVector;
- (id)encryptionKeyForCharacteristicUUID:(id)arg1 operationIsWrite:(_Bool)arg2;
- (_Bool)validUUIDString:(id)arg1;
- (id)hmacSHA256WithKey:(id)arg1 message:(id)arg2;
- (id)hkdfWithKey:(id)arg1 salt:(id)arg2 info:(id)arg3;
- (_Bool)verifyPeerProof:(id)arg1 peerNonce:(id)arg2;
- (id)hmacProofForNonce:(id)arg1;
- (id)hmacNonce;
- (_Bool)generateKeysUsingPeerPublicKey:(id)arg1;
- (id)localPublicKey;
- (_Bool)setupLocalECDHKeys;
- (void)dealloc;
- (id)initWithSetupPSK:(id)arg1;

@end
