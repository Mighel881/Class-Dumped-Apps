//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLGAbstractWeaveServiceDataSection.h"

@class NSNumber;

@interface NLGWeaveServiceIdentification : NLGAbstractWeaveServiceDataSection
{
    _Bool _pairedWithNestAccount;
    unsigned long long _serviceDataDefinitionMajorVersion;
    unsigned long long _serviceDataDefinitionMinorVersion;
    NSNumber *_deviceID;
    long long _weaveVendorId;
    long long _weaveProductID;
}

@property(nonatomic, getter=isPairedWithNestAccount) _Bool pairedWithNestAccount; // @synthesize pairedWithNestAccount=_pairedWithNestAccount;
@property(nonatomic) long long weaveProductID; // @synthesize weaveProductID=_weaveProductID;
@property(nonatomic) long long weaveVendorId; // @synthesize weaveVendorId=_weaveVendorId;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) unsigned long long serviceDataDefinitionMinorVersion; // @synthesize serviceDataDefinitionMinorVersion=_serviceDataDefinitionMinorVersion;
@property(nonatomic) unsigned long long serviceDataDefinitionMajorVersion; // @synthesize serviceDataDefinitionMajorVersion=_serviceDataDefinitionMajorVersion;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToWeaveServiceDataFieldIdentificationBlock:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

