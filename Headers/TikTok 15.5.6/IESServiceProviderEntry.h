//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESServiceEntry.h"

@interface IESServiceProviderEntry : IESServiceEntry
{
    CDUnknownBlockType _provider;
    long long _scopeType;
    id _singleCache;
    Class _aClass;
}

- (void).cxx_destruct;
- (id)extractObject:(id)arg1;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 scopeType:(long long)arg2;
- (id)initWithProvider:(CDUnknownBlockType)arg1 scopeType:(long long)arg2;

@end
