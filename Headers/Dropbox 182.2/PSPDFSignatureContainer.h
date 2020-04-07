//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSSecureCoding-Protocol.h>

@class PSPDFInkAnnotation, PSPDFSignatureBiometricProperties, PSPDFSigner;

@interface PSPDFSignatureContainer : NSObject <NSSecureCoding>
{
    PSPDFInkAnnotation *_annotation;
    PSPDFSigner *_signer;
    PSPDFSignatureBiometricProperties *_biometricProperties;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PSPDFSignatureBiometricProperties *biometricProperties; // @synthesize biometricProperties=_biometricProperties;
@property(readonly, nonatomic) PSPDFSigner *signer; // @synthesize signer=_signer;
@property(readonly, nonatomic) PSPDFInkAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnnotation:(id)arg1 signer:(id)arg2 biometricProperties:(id)arg3;

@end
