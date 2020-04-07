//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MTSocksProxySettings : NSObject
{
    unsigned short _port;
    NSString *_ip;
    NSString *_username;
    NSString *_password;
    NSData *_secret;
}

@property(readonly, nonatomic) NSData *secret; // @synthesize secret=_secret;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIp:(id)arg1 port:(unsigned short)arg2 username:(id)arg3 password:(id)arg4 secret:(id)arg5;

@end
