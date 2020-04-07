//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESearchBaseManager.h"

@class NSArray, NSNumber;
@protocol AWEHttpTask;

@interface AWEDoubleColumnSearchMerchandiseManager : AWESearchBaseManager
{
    _Bool _filterAweme;
    _Bool _searchHasResult;
    _Bool _searchHasMore;
    _Bool _guessYouLikeHasMore;
    NSArray *_searchResults;
    NSArray *_guessYouLikeResults;
    NSNumber *_searchCursor;
    NSNumber *_guessYouLikeCursor;
    id <AWEHttpTask> _requestTask;
}

@property(nonatomic) __weak id <AWEHttpTask> requestTask; // @synthesize requestTask=_requestTask;
@property(retain, nonatomic) NSNumber *guessYouLikeCursor; // @synthesize guessYouLikeCursor=_guessYouLikeCursor;
@property(retain, nonatomic) NSNumber *searchCursor; // @synthesize searchCursor=_searchCursor;
@property(nonatomic) _Bool guessYouLikeHasMore; // @synthesize guessYouLikeHasMore=_guessYouLikeHasMore;
@property(nonatomic) _Bool searchHasMore; // @synthesize searchHasMore=_searchHasMore;
@property(nonatomic) _Bool searchHasResult; // @synthesize searchHasResult=_searchHasResult;
@property(nonatomic) _Bool filterAweme; // @synthesize filterAweme=_filterAweme;
@property(copy, nonatomic) NSArray *guessYouLikeResults; // @synthesize guessYouLikeResults=_guessYouLikeResults;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (_Bool)hasMore;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (void)searchKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestKeyword:(id)arg1 cursor:(id)arg2 guessYouLike:(_Bool)arg3 filterAweme:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

@end
