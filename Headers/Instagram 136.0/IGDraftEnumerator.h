//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSFileManager, NSMutableDictionary, NSOrderedSet, NSURL;

@interface IGDraftEnumerator : NSEnumerator
{
    NSURL *_previewsBaseURL;
    NSFileManager *_fileManager;
    CDUnknownBlockType _draftFilterBlock;
    NSMutableDictionary *_filteredPreviewCache;
    NSOrderedSet *_sortedPreviewFileURLs;
    NSEnumerator *_fileURLEnumerator;
}

+ (id)_sortedFileURLSetFromArray:(id)arg1;
- (void).cxx_destruct;
- (id)_sortedFileURLsAtBaseURL:(id)arg1;
- (id)_previewAtFileURL:(id)arg1;
- (id)_draftPreviewAtFileURL:(id)arg1;
- (long long)estimatedTotalCount;
- (void)addPreviewAtPreviewURL:(id)arg1;
- (void)removePreviewAtPreviewURL:(id)arg1;
- (void)reset;
- (id)allDraftIdentifiers;
- (id)allObjects;
- (id)nextObject;
- (id)_sortedPreviewFileURLs;
- (id)initWithPreviewsBaseURL:(id)arg1 fileManager:(id)arg2 filter:(CDUnknownBlockType)arg3;

@end

