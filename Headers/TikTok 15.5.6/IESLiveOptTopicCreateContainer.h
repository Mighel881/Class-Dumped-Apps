//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWETextInputControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AWETextView, AWETextViewManager, NSArray, NSString, UIButton, UILabel, UITableView, UIVisualEffectView;
@protocol AWETextInputControllerProtocol, IESLiveTracker;

@interface IESLiveOptTopicCreateContainer : UIView <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, AWETextInputControllerDelegate>
{
    UIButton *_backBtn;
    UIButton *_createBtn;
    AWETextView *_titleTextView;
    id <AWETextInputControllerProtocol> _textViewController;
    AWETextViewManager *_textViewManager;
    NSArray *_suggestions;
    id <IESLiveTracker> _tracker;
    UIVisualEffectView *_blurView;
    UILabel *_titleLabel;
    UIView *_topSeperateView;
    UILabel *_tagLabel;
    UIView *_bottomSeperateView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *bottomSeperateView; // @synthesize bottomSeperateView=_bottomSeperateView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIView *topSeperateView; // @synthesize topSeperateView=_topSeperateView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) AWETextViewManager *textViewManager; // @synthesize textViewManager=_textViewManager;
@property(retain, nonatomic) id <AWETextInputControllerProtocol> textViewController; // @synthesize textViewController=_textViewController;
@property(retain, nonatomic) AWETextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIButton *createBtn; // @synthesize createBtn=_createBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (id)_filterSpecialCharacter:(id)arg1;
- (void)textInputDidDeleteDuetChain:(id)arg1;
- (void)textInput:(id)arg1 didReplaceTextInRange:(struct _NSRange)arg2 withText:(id)arg3;
- (void)textInput:(id)arg1 didRequestSuggestion:(id)arg2 hitBlackList:(_Bool)arg3;
- (void)textInputDidNeedClosingSuggestion:(id)arg1;
- (void)textInputDidStartLoadingSuggestions:(id)arg1;
- (void)textInputValueChanged:(id)arg1;
- (void)textInputDidExceedMaxUserCount:(id)arg1;
- (void)textInputDidExceedMaxLength:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_didChangedTopicText;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
