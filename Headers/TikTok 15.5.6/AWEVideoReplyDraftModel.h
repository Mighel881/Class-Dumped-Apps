//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSData, NSString;

@interface AWEVideoReplyDraftModel : MTLModel <MTLJSONSerializing>
{
    _Bool _hasDeletedBubbleView;
    NSString *_replyID;
    NSString *_replyToReplyID;
    long long _replyChannelID;
    NSString *_replyAwemewID;
    NSString *_replyToUserID;
    NSString *_replyToUserName;
    NSString *_replyContent;
    NSArray *_replyToUseravatarURL;
    NSString *_originFrameString;
    NSData *_stickerLocationJsonData;
    long long _bubbleStickerID;
    double _startTime;
    double _duration;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool hasDeletedBubbleView; // @synthesize hasDeletedBubbleView=_hasDeletedBubbleView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long bubbleStickerID; // @synthesize bubbleStickerID=_bubbleStickerID;
@property(retain, nonatomic) NSData *stickerLocationJsonData; // @synthesize stickerLocationJsonData=_stickerLocationJsonData;
@property(copy, nonatomic) NSString *originFrameString; // @synthesize originFrameString=_originFrameString;
@property(copy, nonatomic) NSArray *replyToUseravatarURL; // @synthesize replyToUseravatarURL=_replyToUseravatarURL;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(copy, nonatomic) NSString *replyToUserName; // @synthesize replyToUserName=_replyToUserName;
@property(copy, nonatomic) NSString *replyToUserID; // @synthesize replyToUserID=_replyToUserID;
@property(copy, nonatomic) NSString *replyAwemewID; // @synthesize replyAwemewID=_replyAwemewID;
@property(nonatomic) long long replyChannelID; // @synthesize replyChannelID=_replyChannelID;
@property(copy, nonatomic) NSString *replyToReplyID; // @synthesize replyToReplyID=_replyToReplyID;
@property(copy, nonatomic) NSString *replyID; // @synthesize replyID=_replyID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
