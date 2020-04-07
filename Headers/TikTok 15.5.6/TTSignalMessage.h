//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TTSignalUser;

@interface TTSignalMessage : NSObject
{
    long long _type;
    NSString *_message;
    TTSignalUser *_targetUser;
    TTSignalUser *_sendUser;
    NSDictionary *_extrasDict;
    NSString *_version;
    long long _priority;
}

+ (id)descriptionWithType:(long long)arg1;
+ (id)messageStringWith:(long long)arg1 sendTo:(id)arg2 from:(id)arg3;
+ (id)messageWith:(id)arg1;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *extrasDict; // @synthesize extrasDict=_extrasDict;
@property(retain, nonatomic) TTSignalUser *sendUser; // @synthesize sendUser=_sendUser;
@property(retain, nonatomic) TTSignalUser *targetUser; // @synthesize targetUser=_targetUser;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMessage:(id)arg1;

@end
