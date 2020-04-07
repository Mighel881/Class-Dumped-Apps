//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASDisplayNode, CommentsHeaderView, FeedPostOptions, Post;
@protocol PostDetailHeaderNodeDelegate;

@interface PostDetailHeaderNode : BaseFeedDisplayNode
{
    id <PostDetailHeaderNodeDelegate> _delegate;
    Post *_post;
    FeedPostOptions *_options;
    ASDisplayNode *_contentNode;
}

@property(retain, nonatomic) ASDisplayNode *contentNode; // @synthesize contentNode=_contentNode;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(nonatomic) __weak id <PostDetailHeaderNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didTapCommentHeaderNode:(id)arg1;
- (void)createCommentHeaderView;
@property(readonly, nonatomic) CommentsHeaderView *commentsHeaderView;
- (id)initWithPost:(id)arg1 feedPostOptions:(id)arg2;

@end
