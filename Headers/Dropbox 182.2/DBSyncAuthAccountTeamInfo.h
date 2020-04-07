//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBAuthAccountTeamInfoProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface DBSyncAuthAccountTeamInfo : NSObject <DBAuthAccountTeamInfoProtocol>
{
    NSString *_name;
    long long _ssoState;
    unsigned long long _emmState;
    NSDictionary *_jsonDict;
    NSString *_pathRoot;
}

+ (unsigned long long)db_emmStateFromEmmState:(long long)arg1;
+ (long long)db_ssoStateFromSsoState:(long long)arg1;
@property(readonly, nonatomic) NSString *pathRoot; // @synthesize pathRoot=_pathRoot;
@property(readonly, nonatomic) NSDictionary *jsonDict; // @synthesize jsonDict=_jsonDict;
@property(readonly, nonatomic) unsigned long long emmState; // @synthesize emmState=_emmState;
@property(readonly, nonatomic) long long ssoState; // @synthesize ssoState=_ssoState;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTeamInfoDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
