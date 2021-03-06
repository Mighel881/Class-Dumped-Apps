//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMessageProtocol-Protocol.h>

@class IGDirectMessageMetadata, IGDirectQuotedPublishedMessage, IGEmojiModel, NSArray, NSString;
@protocol IGExpiringMediaPosting;

@interface IGDirectReelReact : NSObject <IGDirectMessageProtocol>
{
    IGDirectMessageMetadata *_metadata;
    _Bool _shouldPersistInThread;
    IGDirectQuotedPublishedMessage *_quotedMessage;
    NSArray *_likers;
    NSArray *_reactions;
    IGEmojiModel *_quickReaction;
    id <IGExpiringMediaPosting> _feedItem;
    NSString *_reelID;
    NSString *_reelTypeString;
    NSString *_comment;
}

@property(readonly, nonatomic) _Bool shouldPersistInThread; // @synthesize shouldPersistInThread=_shouldPersistInThread;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) NSString *reelTypeString; // @synthesize reelTypeString=_reelTypeString;
@property(readonly, nonatomic) NSString *reelID; // @synthesize reelID=_reelID;
@property(readonly, nonatomic) id <IGExpiringMediaPosting> feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGEmojiModel *quickReaction; // @synthesize quickReaction=_quickReaction;
@property(readonly, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, nonatomic) IGDirectQuotedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)replyable;
- (id)metadata;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 comment:(id)arg2 feedItem:(id)arg3 quickReaction:(id)arg4 reelID:(id)arg5 reelTypeString:(id)arg6 shouldPersistInThread:(_Bool)arg7 likers:(id)arg8 reactions:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

