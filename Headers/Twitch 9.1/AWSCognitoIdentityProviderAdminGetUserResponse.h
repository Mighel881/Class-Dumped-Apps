//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface AWSCognitoIdentityProviderAdminGetUserResponse : AWSModel
{
    NSNumber *_enabled;
    NSArray *_MFAOptions;
    NSString *_preferredMfaSetting;
    NSArray *_userAttributes;
    NSDate *_userCreateDate;
    NSDate *_userLastModifiedDate;
    NSArray *_userMFASettingList;
    long long _userStatus;
    NSString *_username;
}

+ (id)userStatusJSONTransformer;
+ (id)userLastModifiedDateJSONTransformer;
+ (id)userCreateDateJSONTransformer;
+ (id)userAttributesJSONTransformer;
+ (id)MFAOptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long userStatus; // @synthesize userStatus=_userStatus;
@property(retain, nonatomic) NSArray *userMFASettingList; // @synthesize userMFASettingList=_userMFASettingList;
@property(retain, nonatomic) NSDate *userLastModifiedDate; // @synthesize userLastModifiedDate=_userLastModifiedDate;
@property(retain, nonatomic) NSDate *userCreateDate; // @synthesize userCreateDate=_userCreateDate;
@property(retain, nonatomic) NSArray *userAttributes; // @synthesize userAttributes=_userAttributes;
@property(retain, nonatomic) NSString *preferredMfaSetting; // @synthesize preferredMfaSetting=_preferredMfaSetting;
@property(retain, nonatomic) NSArray *MFAOptions; // @synthesize MFAOptions=_MFAOptions;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;

@end

