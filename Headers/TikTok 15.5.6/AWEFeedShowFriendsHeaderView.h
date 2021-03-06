//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWECommonSearchBarDelegate-Protocol.h"

@class AWEAnimatedButton, AWEContactListTableViewHeader, NSString, UILabel;
@protocol AWEFeedShowFriendsHeaderViewDelegate;

@interface AWEFeedShowFriendsHeaderView : UIView <AWECommonSearchBarDelegate>
{
    _Bool _isEditing;
    id <AWEFeedShowFriendsHeaderViewDelegate> _delegate;
    CDUnknownBlockType _editBeginBlock;
    CDUnknownBlockType _finishEditBlock;
    UIView *_titleView;
    UILabel *_titleLabel;
    AWEAnimatedButton *_headerEditButton;
    UILabel *_headerFinishLabel;
    AWEContactListTableViewHeader *_searchBarHeader;
}

@property(retain, nonatomic) AWEContactListTableViewHeader *searchBarHeader; // @synthesize searchBarHeader=_searchBarHeader;
@property(retain, nonatomic) UILabel *headerFinishLabel; // @synthesize headerFinishLabel=_headerFinishLabel;
@property(retain, nonatomic) AWEAnimatedButton *headerEditButton; // @synthesize headerEditButton=_headerEditButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) CDUnknownBlockType finishEditBlock; // @synthesize finishEditBlock=_finishEditBlock;
@property(copy, nonatomic) CDUnknownBlockType editBeginBlock; // @synthesize editBeginBlock=_editBeginBlock;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak id <AWEFeedShowFriendsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)p_titleLabel;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)finishIconClicked;
- (void)editIconClicked;
- (void)updateUI:(_Bool)arg1;
- (void)setupUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

