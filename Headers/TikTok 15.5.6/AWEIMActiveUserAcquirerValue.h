//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEIMActiveUserInfo, NSString;

@interface AWEIMActiveUserAcquirerValue : NSObject
{
    NSString *_secUid;
    NSString *_uid;
    NSString *_uniqueFlag;
    long long _type;
    NSString *_identifier;
    CDUnknownBlockType _completion;
    AWEIMActiveUserInfo *_activeUserInfo;
}

@property(retain, nonatomic) AWEIMActiveUserInfo *activeUserInfo; // @synthesize activeUserInfo=_activeUserInfo;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uniqueFlag; // @synthesize uniqueFlag=_uniqueFlag;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *secUid; // @synthesize secUid=_secUid;
- (void).cxx_destruct;

@end
