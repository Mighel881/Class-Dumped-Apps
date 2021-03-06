//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface IESBridgeAuthPackage : NSObject <NSCoding>
{
    NSDictionary *_content;
    long long _type;
    NSString *_channel;
}

@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)validatedContentWithDict:(id)arg1;
@property(readonly, nonatomic, getter=isBridgeAuthInfo) _Bool bridgeAuthInfo;
@property(readonly, copy, nonatomic) NSString *namespace;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

