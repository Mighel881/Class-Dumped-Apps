//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterTag.h>

@class NSString;

@interface TFSTwitterUserTag : TFSTwitterTag
{
    long long _userID;
    NSString *_username;
    NSString *_fullName;
    NSString *_displayFullName;
}

+ (id)encodableName;
@property(readonly, nonatomic) NSString *displayFullName; // @synthesize displayFullName=_displayFullName;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)representsUserID:(long long)arg1;
- (_Bool)representsUserReference:(id)arg1;
- (id)userIDString;
- (id)userReference;
- (id)displayText;
- (void)encodeWithEncoder:(id)arg1;
- (id)initWithDecoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3;

@end
