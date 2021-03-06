//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSCognitoIdentityProviderAccountTakeoverActionsType, AWSCognitoIdentityProviderNotifyConfigurationType;

@interface AWSCognitoIdentityProviderAccountTakeoverRiskConfigurationType : AWSModel
{
    AWSCognitoIdentityProviderAccountTakeoverActionsType *_actions;
    AWSCognitoIdentityProviderNotifyConfigurationType *_notifyConfiguration;
}

+ (id)notifyConfigurationJSONTransformer;
+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) AWSCognitoIdentityProviderNotifyConfigurationType *notifyConfiguration; // @synthesize notifyConfiguration=_notifyConfiguration;
@property(retain, nonatomic) AWSCognitoIdentityProviderAccountTakeoverActionsType *actions; // @synthesize actions=_actions;

@end

