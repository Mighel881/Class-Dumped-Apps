//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;
@protocol DBFileEntry;

@protocol DBFileListThumbnailProviderProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType onDidFinishDownload;
@property(copy, nonatomic) CDUnknownBlockType onThumbnailFetched;
@property(copy, nonatomic) CDUnknownBlockType indexedEntryAccessor;
@property(copy, nonatomic) CDUnknownBlockType prefetchIndexPathsAccessor;
@property(copy, nonatomic) CDUnknownBlockType visibleIndexPathsAccessor;
@property(readonly, nonatomic) unsigned long long thumbnailResizeMode;
- (void)pingPrefetcher;
- (_Bool)isCompatibleWithFileEntry:(id <DBFileEntry>)arg1;
- (void)getBlurredCachedThumbnailForFileEntry:(id <DBFileEntry>)arg1 ofSize:(struct CGSize)arg2 completion:(void (^)(UIImage *))arg3;
- (void)getBlurredCachedThumbnailForFileEntry:(id <DBFileEntry>)arg1 completion:(void (^)(UIImage *))arg2;
- (void)getCachedThumbnailForFileEntry:(id <DBFileEntry>)arg1 ofSize:(struct CGSize)arg2 completion:(void (^)(UIImage *))arg3;
- (void)getCachedThumbnailForFileEntry:(id <DBFileEntry>)arg1 completion:(void (^)(UIImage *))arg2;
- (UIImage *)memoryCachedBlurredThumbnailForFileEntry:(id <DBFileEntry>)arg1 ofSize:(struct CGSize)arg2;
- (UIImage *)memoryCachedBlurredThumbnailForFileEntry:(id <DBFileEntry>)arg1;
- (UIImage *)memoryCachedThumbnailForFileEntry:(id <DBFileEntry>)arg1 ofSize:(struct CGSize)arg2;
- (UIImage *)memoryCachedThumbnailForFileEntry:(id <DBFileEntry>)arg1;
- (UIImage *)cachedThumbnailForFileEntry:(id <DBFileEntry>)arg1;
@end

