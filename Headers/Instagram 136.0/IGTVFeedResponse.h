//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGLoadMoreResponseType-Protocol.h>

@class IGFeedItem, IGTVBadgingResponse, NSArray, NSString;

@interface IGTVFeedResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_maxId;
    _Bool _hasCreatedChannel;
    _Bool _moreAvailable;
    IGFeedItem *_heroFeedItem;
    NSArray *_browseFeedItems;
    NSArray *_browseChannels;
    IGTVBadgingResponse *_badgingResponse;
}

@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, nonatomic) _Bool hasCreatedChannel; // @synthesize hasCreatedChannel=_hasCreatedChannel;
@property(readonly, nonatomic) IGTVBadgingResponse *badgingResponse; // @synthesize badgingResponse=_badgingResponse;
@property(readonly, copy, nonatomic) NSArray *browseChannels; // @synthesize browseChannels=_browseChannels;
@property(readonly, copy, nonatomic) NSArray *browseFeedItems; // @synthesize browseFeedItems=_browseFeedItems;
@property(readonly, nonatomic) IGFeedItem *heroFeedItem; // @synthesize heroFeedItem=_heroFeedItem;
- (void).cxx_destruct;
- (id)maxId;
- (id)initWithHeroFeedItem:(id)arg1 browseFeedItems:(id)arg2 browseChannels:(id)arg3 badgingResponse:(id)arg4 hasCreatedChannel:(_Bool)arg5 moreAvailable:(_Bool)arg6 maxId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

