//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSString;

@interface GRPCRequestOptions : NSObject <NSCopying>
{
    NSString *_host;
    NSString *_path;
    unsigned long long _safety;
}

@property(readonly) unsigned long long safety; // @synthesize safety=_safety;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly, copy) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHost:(id)arg1 path:(id)arg2 safety:(unsigned long long)arg3;

@end
