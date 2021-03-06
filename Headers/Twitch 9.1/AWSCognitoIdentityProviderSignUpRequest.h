//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class AWSCognitoIdentityProviderAnalyticsMetadataType, AWSCognitoIdentityProviderUserContextDataType, NSArray, NSString;

@interface AWSCognitoIdentityProviderSignUpRequest : AWSRequest
{
    AWSCognitoIdentityProviderAnalyticsMetadataType *_analyticsMetadata;
    NSString *_clientId;
    NSString *_password;
    NSString *_secretHash;
    NSArray *_userAttributes;
    AWSCognitoIdentityProviderUserContextDataType *_userContextData;
    NSString *_username;
    NSArray *_validationData;
}

+ (id)validationDataJSONTransformer;
+ (id)userContextDataJSONTransformer;
+ (id)userAttributesJSONTransformer;
+ (id)analyticsMetadataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *validationData; // @synthesize validationData=_validationData;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) AWSCognitoIdentityProviderUserContextDataType *userContextData; // @synthesize userContextData=_userContextData;
@property(retain, nonatomic) NSArray *userAttributes; // @synthesize userAttributes=_userAttributes;
@property(retain, nonatomic) NSString *secretHash; // @synthesize secretHash=_secretHash;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) AWSCognitoIdentityProviderAnalyticsMetadataType *analyticsMetadata; // @synthesize analyticsMetadata=_analyticsMetadata;

@end

