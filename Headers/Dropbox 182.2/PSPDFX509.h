//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDFCX509Certificate, PSPDFRSAKey;

@interface PSPDFX509 : NSObject
{
    PDFCX509Certificate *_coreCertificate;
}

+ (id)certificatesFromPKCS7Data:(id)arg1 error:(id *)arg2;
+ (id)adobeCA;
@property(readonly, nonatomic) PDFCX509Certificate *coreCertificate; // @synthesize coreCertificate=_coreCertificate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *commonName;
@property(readonly, nonatomic) PSPDFRSAKey *publicKey;
- (id)initWithCoreX509Certificate:(id)arg1;
- (id)init;

@end
