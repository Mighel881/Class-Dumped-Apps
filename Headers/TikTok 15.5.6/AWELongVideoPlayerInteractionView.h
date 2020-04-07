//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, AWEAwemePlayInteractionPresenter, AWEAwemePlayInteractionViewController, AWEDemaciaPlayerAirPlayInfoView, AWEFeedVideoButton, AWELongVideoPlayerViewController, NSDictionary, UIButton;

@interface AWELongVideoPlayerInteractionView : UIView
{
    long long _orientation;
    AWELongVideoPlayerViewController *_presentVC;
    AWEAwemePlayInteractionViewController *_interactionController;
    AWEAwemePlayInteractionPresenter *_presenter;
    AWEAwemeModel *_model;
    NSDictionary *_paramDic;
    AWEFeedVideoButton *_likeButton;
    AWEFeedVideoButton *_commentButton;
    AWEFeedVideoButton *_shareButton;
    AWEDemaciaPlayerAirPlayInfoView *_airPlayInfoView;
    UIButton *_likeNumberButton;
    UIButton *_commentNumberButton;
}

@property(retain, nonatomic) UIButton *commentNumberButton; // @synthesize commentNumberButton=_commentNumberButton;
@property(retain, nonatomic) UIButton *likeNumberButton; // @synthesize likeNumberButton=_likeNumberButton;
@property(retain, nonatomic) AWEDemaciaPlayerAirPlayInfoView *airPlayInfoView; // @synthesize airPlayInfoView=_airPlayInfoView;
@property(retain, nonatomic) AWEFeedVideoButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) AWEFeedVideoButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) AWEFeedVideoButton *likeButton; // @synthesize likeButton=_likeButton;
@property(copy, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) __weak AWEAwemePlayInteractionPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) AWEAwemePlayInteractionViewController *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) __weak AWELongVideoPlayerViewController *presentVC; // @synthesize presentVC=_presentVC;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)adTrackWithLabel:(id)arg1;
- (void)updateWithAirPlayDeviceName:(id)arg1;
- (_Bool)isInteracting;
- (void)doActionIfNotValidWithText:(id)arg1;
- (void)doActionIfNotValid;
- (_Bool)alertIfNotValid;
- (void)updateLikeBtn;
- (void)onAwemeDiggNotification:(id)arg1;
- (struct CGPoint)locationTransfer:(struct CGPoint)arg1;
- (void)playDiggAnimation:(struct CGPoint)arg1;
- (void)tapGesture:(id)arg1;
- (void)initCommonTracker;
- (void)refreshAweModel:(id)arg1 paramDic:(id)arg2 presentVC:(id)arg3;
- (void)setupButtons;
- (void)dealloc;
- (id)init;

@end
