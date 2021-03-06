//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWELiveVideoFeedManagerModel;
@protocol IESLiveHTTPClient;

@interface AWELiveVideoFeedManager : NSObject
{
    id <IESLiveHTTPClient> _client;
    AWELiveVideoFeedManagerModel *_feedCenter;
    AWELiveVideoFeedManagerModel *_waterfallCenter;
}

+ (id)sharedManager;
@property(retain, nonatomic) AWELiveVideoFeedManagerModel *waterfallCenter; // @synthesize waterfallCenter=_waterfallCenter;
@property(retain, nonatomic) AWELiveVideoFeedManagerModel *feedCenter; // @synthesize feedCenter=_feedCenter;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)centerWith:(long long)arg1;
- (id)_getNowTimestamp;
- (id)_getNeedCheckUserList:(id)arg1 type:(long long)arg2;
- (id)_getRequestParams:(id)arg1;
- (void)_updateRoomInfo:(id)arg1 type:(long long)arg2;
- (void)_storeFeedListWithData:(id)arg1 isFetch:(_Bool)arg2 type:(long long)arg3;
- (_Bool)_enableUseUpdateLive;
- (void)forceToCheckRoomInfoWithRoomID:(id)arg1 userID:(id)arg2 type:(long long)arg3;
- (void)checkRoomInfoWithRoomID:(id)arg1 userID:(id)arg2 type:(long long)arg3;
- (void)displayedRoomInFeedWithRoomID:(id)arg1 userID:(id)arg2 type:(long long)arg3;
- (void)storeLoadMoreListWithData:(id)arg1 type:(long long)arg2;
- (void)storeFetchListWithData:(id)arg1 type:(long long)arg2;

@end

