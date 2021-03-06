//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MOSImageFastPathCache, NSMapTable;
@protocol FBCacheProtocol;

@interface MOSImageMemoryCache : NSObject
{
    NSMapTable *_mainThreadFastPathCache;
    MOSImageFastPathCache *_fastPathCache;
    id <FBCacheProtocol> _memoryCache;
}

@property(readonly, nonatomic) id <FBCacheProtocol> memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, nonatomic) MOSImageFastPathCache *fastPathCache; // @synthesize fastPathCache=_fastPathCache;
- (void).cxx_destruct;
- (void)removeImageFromInnerMemoryCache:(id)arg1;
- (void)removeImageFromFasthPathCache:(id)arg1;
- (void)clearFastPathCache;
- (id)clearInnerMemoryCache;
- (void)removeImageFromMainThreadAffinedFasthPathCache:(id)arg1;
- (void)clearMainThreadAffinedFastPathCache;
- (id)fetchCachedImageFromMainThreadAffinedFastPathCacheForKey:(id)arg1;
- (id)fetchImageFromFastPathCacheForKey:(id)arg1;
- (id)fetchImageFromInnerMemoryCacheForKey:(id)arg1;
- (void)cacheImageToInnerMemoryCache:(id)arg1 forKey:(id)arg2;
- (void)cacheImageToMainThreadAffinedFastPathCache:(id)arg1 forKey:(id)arg2;
- (void)cacheImageToFastPathCache:(id)arg1 forKey:(id)arg2;
- (id)initWithMemoryCache:(id)arg1;

@end

