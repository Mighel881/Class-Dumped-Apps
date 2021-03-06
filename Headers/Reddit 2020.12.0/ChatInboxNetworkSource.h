//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingNetworkSource.h"

#import "AsyncStoreObserver-Protocol.h"

@class NSArray, NSObject, NSString, RedditService, SBDGroupChannelListQuery;
@protocol ChatInboxNetworkSourceDelegate;

@interface ChatInboxNetworkSource : ListingNetworkSource <AsyncStoreObserver>
{
    NSArray *_currentChannelObjects;
    NSArray *_currentRequestObjects;
    NSArray *_currentPopularObjects;
    SBDGroupChannelListQuery *_requestQuery;
    SBDGroupChannelListQuery *_joinedQuery;
    long long _cacheOffset;
    unsigned long long _sourceType;
    RedditService *_service;
}

@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long cacheOffset; // @synthesize cacheOffset=_cacheOffset;
@property(retain, nonatomic) SBDGroupChannelListQuery *joinedQuery; // @synthesize joinedQuery=_joinedQuery;
@property(retain, nonatomic) SBDGroupChannelListQuery *requestQuery; // @synthesize requestQuery=_requestQuery;
@property(retain, nonatomic) NSArray *currentPopularObjects; // @synthesize currentPopularObjects=_currentPopularObjects;
@property(retain, nonatomic) NSArray *currentRequestObjects; // @synthesize currentRequestObjects=_currentRequestObjects;
@property(retain, nonatomic) NSArray *currentChannelObjects; // @synthesize currentChannelObjects=_currentChannelObjects;
- (void).cxx_destruct;
- (void)asyncStore:(id)arg1 didRemoveModelWithKey:(id)arg2 value:(id)arg3;
- (void)popularChannelJoined:(id)arg1;
- (void)popularChannelLeft:(id)arg1;
- (id)channelStore;
- (void)syncPopularChannels:(id)arg1 networkChannels:(id)arg2;
- (void)syncJoinedChannels:(id)arg1 networkChannels:(id)arg2;
- (void)syncInvitedChannels:(id)arg1 networkChannels:(id)arg2;
- (id)mergeAndFilterCurrentObjects:(id)arg1 newChannels:(id)arg2;
- (_Bool)hasMoreContent;
- (void)fetchDataFromNetworkCallbackWithChannels:(id)arg1 popularChannels:(id)arg2 error:(id)arg3 query:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)fetchDataFromNetworkForQueries:(id)arg1 isSubredditChat:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDataFromNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPopularChannelsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInvitedChannelsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchJoinedChannelsWithOffset:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDataFromCache:(CDUnknownBlockType)arg1 withOffset:(long long)arg2;
- (void)fetchMoreData;
- (void)fetchData:(_Bool)arg1;
- (void)fetchData;
- (void)fetchDataFromCache;
@property __weak NSObject<ChatInboxNetworkSourceDelegate> *delegate; // @dynamic delegate;
- (id)initWithService:(id)arg1 sourceType:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

