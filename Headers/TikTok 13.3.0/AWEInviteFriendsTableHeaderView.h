//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEInviteFriendsInviteViaView, AWEUIListTableViewHeaderView, UIButton;

@interface AWEInviteFriendsTableHeaderView : UIView
{
    _Bool _showsInviteAll;
    UIButton *_inviteAllButton;
    AWEInviteFriendsInviteViaView *_inviteViaView;
    AWEUIListTableViewHeaderView *_inviteViaHeaderView;
    AWEUIListTableViewHeaderView *_inviteAllHeaderView;
}

@property(retain, nonatomic) AWEUIListTableViewHeaderView *inviteAllHeaderView; // @synthesize inviteAllHeaderView=_inviteAllHeaderView;
@property(retain, nonatomic) AWEUIListTableViewHeaderView *inviteViaHeaderView; // @synthesize inviteViaHeaderView=_inviteViaHeaderView;
@property(readonly, nonatomic) AWEInviteFriendsInviteViaView *inviteViaView; // @synthesize inviteViaView=_inviteViaView;
@property(readonly, nonatomic) UIButton *inviteAllButton; // @synthesize inviteAllButton=_inviteAllButton;
@property(nonatomic) _Bool showsInviteAll; // @synthesize showsInviteAll=_showsInviteAll;
- (void).cxx_destruct;
- (double)suggestedHeight;
- (double)addSubview:(id)arg1 atY:(double)arg2 withHeight:(double)arg3;
- (id)initWithShareChannels:(id)arg1;

@end
