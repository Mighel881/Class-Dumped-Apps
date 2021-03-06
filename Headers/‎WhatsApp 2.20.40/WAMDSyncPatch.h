//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WAMDSyncCollection;

@interface WAMDSyncPatch : NSObject
{
    NSArray *_mutations;
    WAMDSyncCollection *_collection;
}

@property(readonly, nonatomic) WAMDSyncCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) NSArray *mutations; // @synthesize mutations=_mutations;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *collectionName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueKey;
- (id)initWithMutations:(id)arg1 collectionName:(id)arg2 version:(id)arg3;
- (id)init;

@end

