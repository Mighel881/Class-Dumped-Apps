//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol AWEHttpTask;

@interface AWESearchMusicManager : NSObject
{
    _Bool _hasMore;
    _Bool _sortByLyric;
    int _curPage;
    NSString *_keyword;
    NSMutableArray *_dataList;
    NSDictionary *_logPassback;
    NSString *_searchSource;
    NSString *_searchChannel;
    CDUnknownBlockType _appendMusicBlock;
    id <AWEHttpTask> _previousTask;
    long long _curCursor;
}

@property(nonatomic) int curPage; // @synthesize curPage=_curPage;
@property(nonatomic) long long curCursor; // @synthesize curCursor=_curCursor;
@property(retain, nonatomic) id <AWEHttpTask> previousTask; // @synthesize previousTask=_previousTask;
@property(copy, nonatomic) CDUnknownBlockType appendMusicBlock; // @synthesize appendMusicBlock=_appendMusicBlock;
@property(copy, nonatomic) NSString *searchChannel; // @synthesize searchChannel=_searchChannel;
@property(copy, nonatomic) NSString *searchSource; // @synthesize searchSource=_searchSource;
@property(nonatomic) _Bool sortByLyric; // @synthesize sortByLyric=_sortByLyric;
@property(retain, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)clear;
- (id)sortByLyricWithMusics:(id)arg1;
- (void)p_searchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (void)searchWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
