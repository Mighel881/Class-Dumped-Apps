//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RedditService;
@protocol OS_dispatch_queue;

@interface FocusVerticalManager : NSObject
{
    _Bool _isFetching;
    NSMutableDictionary *_recommendations;
    RedditService *_service;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableDictionary *_completionCache;
}

@property(retain, nonatomic) NSMutableDictionary *completionCache; // @synthesize completionCache=_completionCache;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) __weak RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableDictionary *recommendations; // @synthesize recommendations=_recommendations;
- (void).cxx_destruct;
- (id)processRecommendedSubreddits:(id)arg1 interacetdSubreddits:(id)arg2 topPostsForRecommendedSubreddits:(id)arg3 postsForRecommendedSubreddits:(id)arg4;
- (void)fetchFocusVerticalsWithCompletion:(CDUnknownBlockType)arg1;
- (void)distributeRecommendations;
- (void)cacheAndDistributeRecommendations;
- (void)fetchRecommendationAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithService:(id)arg1;

@end
