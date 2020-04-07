//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AWEStoryEntranceLoadingDataSource-Protocol.h"
#import "AWEStoryMessage-Protocol.h"

@class AWEAdaptorUserModel, NSString, UIButton, UIImageView, UILabel;

@interface AWEFeedFriendsListCell : UITableViewCell <AWEStoryMessage, AWEStoryEntranceLoadingDataSource>
{
    _Bool _isEditing;
    UIImageView *_avatarView;
    CDUnknownBlockType _rightIconTappedBlock;
    CDUnknownBlockType _avatarIconTappedBlock;
    UILabel *_nameLabel;
    UILabel *_sigLabel;
    UILabel *_updateCountLabel;
    UIButton *_rightIconButton;
    UIImageView *_verificationIcon;
    unsigned long long _updateCount;
    AWEAdaptorUserModel *_userModel;
}

+ (id)defaultAvatarLoadingImage;
+ (id)identifier;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) AWEAdaptorUserModel *userModel; // @synthesize userModel=_userModel;
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) UIImageView *verificationIcon; // @synthesize verificationIcon=_verificationIcon;
@property(retain, nonatomic) UIButton *rightIconButton; // @synthesize rightIconButton=_rightIconButton;
@property(retain, nonatomic) UILabel *updateCountLabel; // @synthesize updateCountLabel=_updateCountLabel;
@property(retain, nonatomic) UILabel *sigLabel; // @synthesize sigLabel=_sigLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType avatarIconTappedBlock; // @synthesize avatarIconTappedBlock=_avatarIconTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType rightIconTappedBlock; // @synthesize rightIconTappedBlock=_rightIconTappedBlock;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (id)xMsgIcon;
- (unsigned long long)currentXStyle;
- (void)setRightIcon;
- (void)didAvatarIconTapped;
- (void)didTapRightIcon;
- (id)storyEntranceLoadingHostView;
- (void)didFinishUpdateUnreadAwemeWithUser:(id)arg1;
- (_Bool)isStory;
- (void)updateStoryState;
- (void)layoutCellSubviews;
- (void)_addHighlightToAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)p_updateSigLabelWithString:(id)arg1 format:(id)arg2;
- (void)_highLightSearchText:(id)arg1;
- (void)refreshUI;
- (void)setupUI;
- (void)configWithUserModel:(id)arg1 updateCount:(unsigned long long)arg2;
- (void)refreshWithUserModel:(id)arg1 updateCount:(unsigned long long)arg2 isEditing:(_Bool)arg3;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
