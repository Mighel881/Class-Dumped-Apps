//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileListThumbnailProviderProtocol-Protocol.h"

@class DBFileEntryThumbnailMemoryCache, DBWeakObserverMap, NSMutableDictionary, NSString;
@protocol DBSinglePrefetcherThumbnailProviderFactory;

@interface DBFileListThumbnailProvider : NSObject <DBFileListThumbnailProviderProtocol>
{
    NSMutableDictionary *_thumbnailProviders;
    struct CGSize _thumbnailSize;
    CDUnknownBlockType _indexedEntryAccessor;
    id <DBSinglePrefetcherThumbnailProviderFactory> _singlePrefetcherThumbnailProviderFactory;
    DBFileEntryThumbnailMemoryCache *_thumbnailCache;
    DBWeakObserverMap *_observerMap;
    unsigned long long _thumbnailResizeMode;
    CDUnknownBlockType _onDidFinishDownload;
    CDUnknownBlockType _visibleIndexPathsAccessor;
    CDUnknownBlockType _prefetchIndexPathsAccessor;
    CDUnknownBlockType _onThumbnailFetched;
}

+ (_Bool)isThumbnailableEntry:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType indexedEntryAccessor; // @synthesize indexedEntryAccessor=_indexedEntryAccessor;
@property(copy, nonatomic) CDUnknownBlockType onThumbnailFetched; // @synthesize onThumbnailFetched=_onThumbnailFetched;
@property(copy, nonatomic) CDUnknownBlockType prefetchIndexPathsAccessor; // @synthesize prefetchIndexPathsAccessor=_prefetchIndexPathsAccessor;
@property(copy, nonatomic) CDUnknownBlockType visibleIndexPathsAccessor; // @synthesize visibleIndexPathsAccessor=_visibleIndexPathsAccessor;
@property(copy, nonatomic) CDUnknownBlockType onDidFinishDownload; // @synthesize onDidFinishDownload=_onDidFinishDownload;
@property(readonly, nonatomic) unsigned long long thumbnailResizeMode; // @synthesize thumbnailResizeMode=_thumbnailResizeMode;
- (void).cxx_destruct;
- (void)db_invokeObserversForThumbnailLoaded:(id)arg1 forFileEntry:(id)arg2;
- (id)addObserver:(id)arg1;
- (id)db_createProviderWithPrefetcher:(id)arg1 linkStateManager:(id)arg2;
- (void)setSinglePrefetcherThumbnailProviderFactory:(id)arg1;
- (void)pingPrefetcher;
- (_Bool)isCompatibleWithFileEntry:(id)arg1;
- (void)getBlurredCachedThumbnailForFileEntry:(id)arg1 ofSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getBlurredCachedThumbnailForFileEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCachedThumbnailForFileEntry:(id)arg1 ofSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCachedThumbnailForFileEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)memoryCachedBlurredThumbnailForFileEntry:(id)arg1 ofSize:(struct CGSize)arg2;
- (id)memoryCachedBlurredThumbnailForFileEntry:(id)arg1;
- (id)memoryCachedThumbnailForFileEntry:(id)arg1 ofSize:(struct CGSize)arg2;
- (id)memoryCachedThumbnailForFileEntry:(id)arg1;
- (id)cachedThumbnailForFileEntry:(id)arg1;
- (id)db_providerCompatibleWithEntry:(id)arg1;
- (void)addPrefetcher:(id)arg1 linkStateManager:(id)arg2;
- (id)initWithThumbnailSize:(struct CGSize)arg1 thumbnailResizeMode:(unsigned long long)arg2;
- (id)initWithThumbnailSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
