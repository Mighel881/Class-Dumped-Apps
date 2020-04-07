//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HTSLiveInteractiveUserModel, UIButton, UIImageView, UILabel;
@protocol HTSLiveInteractiveAnchorActions;

@interface IESLiveMultiInteractGuestListCell : UITableViewCell
{
    CDUnknownBlockType _onAcceptButtonTapped;
    HTSLiveInteractiveUserModel *_model;
    UIImageView *_avatarView;
    UILabel *_nicknameLabel;
    UILabel *_applyTimeLabel;
    UIButton *_acceptButton;
    UIImageView *_genderIcon;
    UIImageView *_honorLevelIcon;
    UIImageView *_fansClubIcon;
    id <HTSLiveInteractiveAnchorActions> _actionDispatcher;
}

@property(retain, nonatomic) id <HTSLiveInteractiveAnchorActions> actionDispatcher; // @synthesize actionDispatcher=_actionDispatcher;
@property(retain, nonatomic) UIImageView *fansClubIcon; // @synthesize fansClubIcon=_fansClubIcon;
@property(retain, nonatomic) UIImageView *honorLevelIcon; // @synthesize honorLevelIcon=_honorLevelIcon;
@property(retain, nonatomic) UIImageView *genderIcon; // @synthesize genderIcon=_genderIcon;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *applyTimeLabel; // @synthesize applyTimeLabel=_applyTimeLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) HTSLiveInteractiveUserModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType onAcceptButtonTapped; // @synthesize onAcceptButtonTapped=_onAcceptButtonTapped;
- (void).cxx_destruct;
- (void)didTapAcceptButton;
- (void)updateWithModel:(id)arg1 nowTime:(id)arg2;
- (void)layoutUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
