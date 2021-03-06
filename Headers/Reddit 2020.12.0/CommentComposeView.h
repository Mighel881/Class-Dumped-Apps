//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseScrollView.h>

#import "BaseTextViewDelegate-Protocol.h"
#import "CommentComposeKeyboardAccessoryViewDelegate-Protocol.h"
#import "LinkViewControllerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BaseAttachmentTextView, BaseLabel, BaseView, CommentComposeImageManager, NSString, Post, _TtC6Reddit23MetaEmoteComposeManager, _TtC6Reddit23MetaGIPHYComposeManager;

@interface CommentComposeView : BaseScrollView <BaseTextViewDelegate, UITextViewDelegate, LinkViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, CommentComposeKeyboardAccessoryViewDelegate>
{
    BaseAttachmentTextView *_replyTextView;
    CommentComposeImageManager *_imageManager;
    _TtC6Reddit23MetaEmoteComposeManager *_emoteComposeManager;
    _TtC6Reddit23MetaGIPHYComposeManager *_giphyComposeManager;
    Post *_post;
    BaseLabel *_titleLabel;
    BaseView *_titleDivider;
}

@property(retain, nonatomic) BaseView *titleDivider; // @synthesize titleDivider=_titleDivider;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) _TtC6Reddit23MetaGIPHYComposeManager *giphyComposeManager; // @synthesize giphyComposeManager=_giphyComposeManager;
@property(retain, nonatomic) _TtC6Reddit23MetaEmoteComposeManager *emoteComposeManager; // @synthesize emoteComposeManager=_emoteComposeManager;
@property(retain, nonatomic) CommentComposeImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) BaseAttachmentTextView *replyTextView; // @synthesize replyTextView=_replyTextView;
- (void).cxx_destruct;
- (void)linkViewControllerDidTapInsert:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)moveCaretIfPossibleInScrollView:(id)arg1;
- (void)setEmoteComposeKeyboardVisible:(_Bool)arg1;
- (void)toggleEmoteCompose;
@property(nonatomic) _Bool isGIPHYComposeEnabled;
@property(nonatomic) _Bool isEmoteComposeEnabled;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (void)didTapCloseLinkPopUp;
- (void)commentComposeKeyboardAccessoryViewDidSelectGIFs:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectEmotes:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectPhotos:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectCamera:(id)arg1;
- (void)commentComposeKeyboardAccessoryViewDidSelectLink:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureWithPost:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

