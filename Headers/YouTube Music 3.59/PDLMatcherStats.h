//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDLMatcherStats : NSObject
{
    unsigned long long _cachedFieldsCount;
    unsigned long long _uncachedFieldsCount;
}

@property(nonatomic) unsigned long long uncachedFieldsCount; // @synthesize uncachedFieldsCount=_uncachedFieldsCount;
@property(nonatomic) unsigned long long cachedFieldsCount; // @synthesize cachedFieldsCount=_cachedFieldsCount;
@property(readonly, nonatomic) _Bool hadMostlyCachedSubtokens;
- (void)incrementFieldCount:(_Bool)arg1;
- (id)init;

@end

