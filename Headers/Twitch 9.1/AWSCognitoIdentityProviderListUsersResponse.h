//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSString;

@interface AWSCognitoIdentityProviderListUsersResponse : AWSModel
{
    NSString *_paginationToken;
    NSArray *_users;
}

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSString *paginationToken; // @synthesize paginationToken=_paginationToken;

@end

