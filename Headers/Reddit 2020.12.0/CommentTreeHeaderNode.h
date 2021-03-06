//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ASTextNodeDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ASTextNode, CommentMetaViewModel, CommentTreeNode, CommentTreeNodeHeaderOptions, CommentTreeVisualDepthNode, NSString, RichTextLoader, UILongPressGestureRecognizer, UITapGestureRecognizer, _TtC6Reddit34FeedPostMetaUsernameDecorationNode;
@protocol CommentTreeHeaderNodeDelegate;

@interface CommentTreeHeaderNode : BaseFeedDisplayNode <ASTextNodeDelegate, UIGestureRecognizerDelegate, ObjectObserverProtocol>
{
    ASTextNode *_titleTextNode;
    CommentTreeNode *_commentTreeNode;
    id <CommentTreeHeaderNodeDelegate> _delegate;
    CommentTreeVisualDepthNode *_visualDepthNode;
    CommentMetaViewModel *_commentMetaViewModel;
    ASTextNode *_iconsTextNode;
    _TtC6Reddit34FeedPostMetaUsernameDecorationNode *_usernameDecorationNode;
    CommentTreeNodeHeaderOptions *_options;
    RichTextLoader *_richTextLoader;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_iconsTapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *iconsTapGestureRecognizer; // @synthesize iconsTapGestureRecognizer=_iconsTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) RichTextLoader *richTextLoader; // @synthesize richTextLoader=_richTextLoader;
@property(retain, nonatomic) CommentTreeNodeHeaderOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) _TtC6Reddit34FeedPostMetaUsernameDecorationNode *usernameDecorationNode; // @synthesize usernameDecorationNode=_usernameDecorationNode;
@property(retain, nonatomic) ASTextNode *iconsTextNode; // @synthesize iconsTextNode=_iconsTextNode;
@property(retain, nonatomic) CommentMetaViewModel *commentMetaViewModel; // @synthesize commentMetaViewModel=_commentMetaViewModel;
@property(retain, nonatomic) CommentTreeVisualDepthNode *visualDepthNode; // @synthesize visualDepthNode=_visualDepthNode;
@property(nonatomic) __weak id <CommentTreeHeaderNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CommentTreeNode *commentTreeNode; // @synthesize commentTreeNode=_commentTreeNode;
@property(retain, nonatomic) ASTextNode *titleTextNode; // @synthesize titleTextNode=_titleTextNode;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (_Bool)textNode:(id)arg1 shouldHighlightLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didLoad;
- (void)didTapIcons:(id)arg1;
- (void)didLongPress:(id)arg1;
- (void)didSingleTap:(id)arg1;
- (struct UIEdgeInsets)labelsInset;
- (void)configureNodes;
- (void)createNodes;
- (void)dealloc;
- (id)initWithCommentTreeNode:(id)arg1 commentMetaViewModel:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

