//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber, NSString, PDFCSignatureAppearance, PDFCSignatureBiometricProperties;

@protocol PDFCDocumentSignerDataSource
- (NSNumber *)signatureEncryptionAlgorithm:(NSString *)arg1;
- (NSNumber *)signatureHashAlgorithm:(NSString *)arg1;
- (PDFCSignatureBiometricProperties *)signatureBiometricProperties:(NSString *)arg1;
- (NSNumber *)signatureEstimatedSize:(NSString *)arg1;
- (PDFCSignatureAppearance *)signatureAppearance:(NSString *)arg1;
@end
