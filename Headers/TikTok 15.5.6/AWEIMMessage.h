//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMAttachmentMessage-Protocol.h"
#import "NSCopying-Protocol.h"

@class AWEIMMessageGroup, AWEIMStrangerUser, AWEIMUser, NSAttributedString, NSDictionary, NSString;

@interface AWEIMMessage : NSObject <NSCopying, AWEIMAttachmentMessage>
{
    _Bool _recalled;
    _Bool _isFromStranger;
    NSString *_messageID;
    NSString *_conversationID;
    long long _busiType;
    long long _localID;
    long long _globalIndex;
    long long _createTime;
    long long _messageType;
    long long _chatModelType;
    long long _aweType;
    long long _messageState;
    long long _serverMessageID;
    long long _rootMessageID;
    long long _prevMessageID;
    NSDictionary *_localExt;
    NSDictionary *_syncedExt;
    NSString *_fromUid;
    NSString *_secFromUid;
    NSAttributedString *_attributedContent;
    AWEIMMessageGroup *_group;
    struct CGSize _messageSize;
}

+ (id)convertMsgTypeIntoString:(long long)arg1 aweType:(long long)arg2;
+ (id)identifier;
@property(nonatomic) __weak AWEIMMessageGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) NSAttributedString *attributedContent; // @synthesize attributedContent=_attributedContent;
@property(nonatomic) struct CGSize messageSize; // @synthesize messageSize=_messageSize;
@property(nonatomic) _Bool isFromStranger; // @synthesize isFromStranger=_isFromStranger;
@property(copy, nonatomic) NSString *secFromUid; // @synthesize secFromUid=_secFromUid;
@property(copy, nonatomic) NSString *fromUid; // @synthesize fromUid=_fromUid;
@property(retain, nonatomic) NSDictionary *syncedExt; // @synthesize syncedExt=_syncedExt;
@property(retain, nonatomic) NSDictionary *localExt; // @synthesize localExt=_localExt;
@property(nonatomic) long long prevMessageID; // @synthesize prevMessageID=_prevMessageID;
@property(nonatomic) long long rootMessageID; // @synthesize rootMessageID=_rootMessageID;
@property(nonatomic) long long serverMessageID; // @synthesize serverMessageID=_serverMessageID;
@property(nonatomic) _Bool recalled; // @synthesize recalled=_recalled;
@property(nonatomic) long long messageState; // @synthesize messageState=_messageState;
@property(nonatomic) long long aweType; // @synthesize aweType=_aweType;
@property(nonatomic) long long chatModelType; // @synthesize chatModelType=_chatModelType;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long globalIndex; // @synthesize globalIndex=_globalIndex;
@property(nonatomic) long long localID; // @synthesize localID=_localID;
@property(nonatomic) long long busiType; // @synthesize busiType=_busiType;
@property(copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (_Bool)isAttachmentAtRemote;
- (_Bool)isAttachmentAtLocal;
- (_Bool)isAttachmentMessage;
- (void)updateWithMessage:(id)arg1;
- (id)getContent;
- (id)getContentDict;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool userGenerated;
- (id)compatibleIdentifier;
- (void)prepareForConversationHint;
- (id)calculateAttributedContent;
- (_Bool)isCellShouldMoveContainerView;
- (_Bool)isAllowedCellEdit;
- (_Bool)isAllowedForward;
- (_Bool)shouldShowNickname;
- (_Bool)sendFromMe;
- (id)initWithContentDict:(id)arg1;
@property(readonly, nonatomic) _Bool isFromCommerce;
@property(readonly, nonatomic) AWEIMUser *toUser;
@property(readonly, nonatomic) NSString *toUid;
- (_Bool)isIllegalMessageForUserID:(id)arg1;
- (id)awe_groupNoticeNicknameDictionary;
- (id)awe_filePathDictionary;
- (id)awe_fileIDDictionary;
- (id)awe_filePathForAttachmentFileType:(int)arg1;
- (id)awe_fileIDForAttachmentFileType:(int)arg1;
@property(readonly, nonatomic) _Bool groupConInfoNotComplete;
@property(readonly, nonatomic) _Bool storyNotExisted;
@property(readonly, nonatomic) _Bool placeholderFlag;
@property(readonly, nonatomic) _Bool readFlag;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) NSString *fileID;
@property(readonly, nonatomic) _Bool im_shouldShowFootnote;
@property(readonly, nonatomic) _Bool im_messageFromProjectX;
@property(retain, nonatomic) AWEIMStrangerUser *stranger_toUser;
@property(retain, nonatomic) AWEIMStrangerUser *stranger_fromUser;
@property(retain, nonatomic) NSString *ext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

