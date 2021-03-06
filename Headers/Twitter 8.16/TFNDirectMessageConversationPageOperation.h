//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSGroupOperation.h>

#import <T1Twitter/TFNDirectMessageFetchConversationPageOperationDelegate-Protocol.h>

@class TFNDirectMessageConversation, TFNDirectMessageFetchConversationPageOperation, TFNDirectMessageModel, TFNDirectMessageProcessConversationPageResponseOperation;

@interface TFNDirectMessageConversationPageOperation : TFSGroupOperation <TFNDirectMessageFetchConversationPageOperationDelegate>
{
    TFNDirectMessageConversation *_conversation;
    TFNDirectMessageModel *_model;
    long long _maxEventID;
    CDUnknownBlockType _paginationCompletionBlock;
    TFNDirectMessageFetchConversationPageOperation *_fetchOperation;
    TFNDirectMessageProcessConversationPageResponseOperation *_processResponseOperation;
}

@property(readonly, nonatomic) TFNDirectMessageProcessConversationPageResponseOperation *processResponseOperation; // @synthesize processResponseOperation=_processResponseOperation;
@property(readonly, nonatomic) TFNDirectMessageFetchConversationPageOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(copy, nonatomic) CDUnknownBlockType paginationCompletionBlock; // @synthesize paginationCompletionBlock=_paginationCompletionBlock;
@property(readonly, nonatomic) long long maxEventID; // @synthesize maxEventID=_maxEventID;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)fetchConversationPageOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)fetchConversationPageOperation:(id)arg1 didSucceedWithResponse:(id)arg2;
- (void)completeOperation;
- (id)initWithConversation:(id)arg1 model:(id)arg2 maxEventID:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

