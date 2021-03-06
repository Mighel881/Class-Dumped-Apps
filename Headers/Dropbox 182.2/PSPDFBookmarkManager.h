//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PDFCBookmarkManager, PSPDFDispatchQueue, PSPDFDocument;
@protocol PSPDFCustomConcurrentQueue;

@interface PSPDFBookmarkManager : NSObject
{
    struct {
        unsigned int insidePerformBlock:1;
        unsigned int isMigrating:1;
    } _flags;
    vector_c0d9b883 _bookmarks;
    PSPDFDocument *_document;
    PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *_bookmarkQueue;
    PDFCBookmarkManager *_coreBookmarkManager;
}

@property(readonly, nonatomic) PDFCBookmarkManager *coreBookmarkManager; // @synthesize coreBookmarkManager=_coreBookmarkManager;
@property(readonly, nonatomic) PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *bookmarkQueue; // @synthesize bookmarkQueue=_bookmarkQueue;
@property(readonly, nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)workaround10665_saveCustomBookmarkProvider;
- (void)postBookmarksChangedNotification;
- (nn_002d12e7)cppBookmarkManager;
- (void)queue_updateBookmarksArray;
- (void)queue_setNeedsUpdateBookmarksArray;
@property(copy, nonatomic) NSArray *provider;
- (void)moveBookmarkAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeBookmark:(id)arg1;
- (void)addBookmark:(id)arg1;
- (id)lazyBookmarksArrayWithVector:(vector_c0d9b883)arg1;
- (id)bookmarksWithSortOrder:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *bookmarks;
- (vector_c0d9b883)cppBookmarks;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)barrier_migrateToV6IfNecessary;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (Class)classForClass:(Class)arg1;
- (id)bookmarkForPageAtIndex:(unsigned long long)arg1;
- (void)removeBookmarksForPageAtIndex:(unsigned long long)arg1;
- (id)addBookmarkForPageAtIndex:(unsigned long long)arg1;
- (void)removeBookmarkForPageAtIndex:(unsigned long long)arg1;

@end

