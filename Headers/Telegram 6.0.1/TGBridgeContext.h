//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TGBridgeContext : NSObject
{
    _Bool _authorized;
    _Bool _micAccessAllowed;
    int _userId;
    NSDictionary *_preheatData;
    long long _preheatVersion;
}

@property(readonly, nonatomic) long long preheatVersion; // @synthesize preheatVersion=_preheatVersion;
@property(readonly, nonatomic) NSDictionary *preheatData; // @synthesize preheatData=_preheatData;
@property(readonly, nonatomic) _Bool micAccessAllowed; // @synthesize micAccessAllowed=_micAccessAllowed;
@property(readonly, nonatomic) int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) _Bool authorized; // @synthesize authorized=_authorized;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)updatedWithMicAccessAllowed:(_Bool)arg1;
- (id)updatedWithPreheatData:(id)arg1;
- (id)updatedWithAuthorized:(_Bool)arg1 peerId:(int)arg2;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
