//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItem, IGPostItem, IGUserSession;

@interface IGFeedPostStickerFactory : NSObject
{
    _Bool _hideLabel;
    _Bool _hidePreviewImage;
    _Bool _disableTapOptions;
    IGFeedItem *_feedItem;
    IGPostItem *_selectedPost;
    IGUserSession *_userSession;
    long long _firstDisplayType;
}

@property(nonatomic) _Bool disableTapOptions; // @synthesize disableTapOptions=_disableTapOptions;
@property(nonatomic) long long firstDisplayType; // @synthesize firstDisplayType=_firstDisplayType;
@property(nonatomic) _Bool hidePreviewImage; // @synthesize hidePreviewImage=_hidePreviewImage;
@property(nonatomic) _Bool hideLabel; // @synthesize hideLabel=_hideLabel;
@property(readonly, nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGPostItem *selectedPost; // @synthesize selectedPost=_selectedPost;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)feedPostSticker;
- (id)_igtvSticker;
- (id)_squareFeedSticker;
- (id)_bubbleFeedSticker;
- (id)initWithFeedItem:(id)arg1 selectedPost:(id)arg2 userSession:(id)arg3;

@end

