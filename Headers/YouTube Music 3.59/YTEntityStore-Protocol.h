//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIMMe, NSObject, NSOrderedSet, NSString;
@protocol OS_dispatch_queue, YTEntity, YTEntityStoreObserver;

@protocol YTEntityStore <NSObject>
+ (id)new;
+ (id)alloc;
@property(nonatomic) __weak GIMMe *gimme;
- (void)removeEntityStoreObserver:(id <YTEntityStoreObserver>)arg1;
- (void)removeEntityStoreObserver:(id <YTEntityStoreObserver>)arg1 fromClass:(Class)arg2;
- (void)removeEntityStoreObserver:(id <YTEntityStoreObserver>)arg1 fromKey:(NSString *)arg2;
- (void)addEntityStoreObserver:(id <YTEntityStoreObserver>)arg1 toClass:(Class)arg2 options:(unsigned long long)arg3;
- (void)addEntityStoreObserver:(id <YTEntityStoreObserver>)arg1 toKey:(NSString *)arg2 options:(unsigned long long)arg3;
- (void)entitiesForKeys:(NSOrderedSet *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSOrderedSet *, NSError *))arg3;
- (NSOrderedSet *)entitiesForKeys:(NSOrderedSet *)arg1 error:(id *)arg2;
- (id <YTEntity>)entityForKey:(NSString *)arg1 error:(id *)arg2;
@end

