//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol DBAuthAccountTeamInfoProtocol <NSObject>
@property(readonly, nonatomic) NSString *pathRoot;
@property(readonly, nonatomic) NSDictionary *jsonDict;
@property(readonly, nonatomic) unsigned long long emmState;
@property(readonly, nonatomic) long long ssoState;
@property(readonly, copy, nonatomic) NSString *name;
- (_Bool)isEqual:(id)arg1;
@end
