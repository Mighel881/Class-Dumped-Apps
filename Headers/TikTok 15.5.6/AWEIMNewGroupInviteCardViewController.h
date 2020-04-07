//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMNewGroupInviteCardUserCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEAnimatedButton, AWEIMShareVerifyResponseModel, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView;
@protocol AWEIMNewGroupInviteCardViewControllerDelegate;

@interface AWEIMNewGroupInviteCardViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMNewGroupInviteCardUserCellDelegate>
{
    UIView *_maskView;
    UIView *_containerView;
    NSString *_token;
    id <AWEIMNewGroupInviteCardViewControllerDelegate> _delegate;
    UIButton *_closeBtn;
    UIImageView *_avatarGroupImageView;
    UILabel *_groupNameLabel;
    UILabel *_tipsLabel;
    UIView *_splitLine;
    UICollectionView *_collectionView;
    AWEAnimatedButton *_addGroupBtn;
    AWEIMShareVerifyResponseModel *_data;
    struct CGPoint _lastLocation;
}

@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) AWEIMShareVerifyResponseModel *data; // @synthesize data=_data;
@property(retain, nonatomic) AWEAnimatedButton *addGroupBtn; // @synthesize addGroupBtn=_addGroupBtn;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(retain, nonatomic) UIImageView *avatarGroupImageView; // @synthesize avatarGroupImageView=_avatarGroupImageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak id <AWEIMNewGroupInviteCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)selfPanned:(id)arg1;
- (void)p_removeView;
- (void)p_enterGroupAndFollowUser;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)avatarTapped:(id)arg1;
- (void)p_followUser;
- (void)p_updateCardContent;
- (void)updateSureBtnWithGroupInviteCardStatus:(unsigned long long)arg1;
- (void)p_updateGroupNameLabelWithParticipantsCount:(long long)arg1 name:(id)arg2;
- (void)p_fetchData;
- (void)showOnView:(id)arg1;
- (void)p_setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
