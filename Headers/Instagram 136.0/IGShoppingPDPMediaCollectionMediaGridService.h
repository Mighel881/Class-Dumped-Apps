//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGShoppingMediaGridServiceType-Protocol.h>

@class IGFeedItem, IGProductItem, IGShoppingFeedNetworkFetchState, IGShoppingFeedNetworker, IGShoppingMediaCollectionModel, IGUser, IGUserSession, NSString;
@protocol IGShoppingMediaGridServiceDelegate;

@interface IGShoppingPDPMediaCollectionMediaGridService : NSObject <IGShoppingMediaGridServiceType>
{
    IGShoppingMediaCollectionModel *_mediaCollection;
    IGShoppingFeedNetworker *_networker;
    IGUserSession *_userSession;
    long long _mediaCollectionType;
    IGProductItem *_productItem;
    IGUser *_merchant;
    IGFeedItem *_feedItem;
    id <IGShoppingMediaGridServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingMediaGridServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_networkFetchStateChanged:(id)arg1;
- (void)_networkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (id)placeholderItemsForMediaGrid;
- (id)intentTargetForSelectedMediaGridItem:(id)arg1 viewControllerConfiguration:(id)arg2 shoppingSessionTracker:(id)arg3;
- (_Bool)hasMoreAvailable;
@property(readonly, nonatomic) IGShoppingFeedNetworkFetchState *fetchState;
- (_Bool)fetchDataWithAction:(long long)arg1 isPullToRefresh:(_Bool)arg2;
- (id)itemsForMediaGrid;
- (id)initWithUserSession:(id)arg1 mediaCollectionType:(long long)arg2 productItem:(id)arg3 merchant:(id)arg4 feedItem:(id)arg5 mediaCollection:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

