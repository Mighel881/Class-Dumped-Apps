//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLivePopupBaseViewController.h"

@class HTSLiveConnectingView, HTSLivePKAutoMatchViewModel, IESLiveGradientButton, NSString, UIButton, UILabel, UIView;
@protocol HTSLiveAnchorDoubleInteractionActions, HTSLiveBannerActions, HTSLiveDoubleInteractionContext, HTSLiveInteractionEntranceActions, HTSLiveInteractionEntranceProvider, HTSLiveInviterAutoMatchViewControllerDelegate, HTSLiveToolbarProvider, IESLiveEnvironment, IESLiveSettings, IESLiveToastFactory;

@interface HTSLiveInviterAutoMatchViewController : HTSLivePopupBaseViewController
{
    _Bool _hideNavItems;
    _Bool _startAutoMatchImmediately;
    _Bool _quitAutoMatch;
    unsigned long long _autoMatchStatus;
    id <HTSLiveInviterAutoMatchViewControllerDelegate> _delegate;
    id <HTSLiveDoubleInteractionContext> _pkContextEntity;
    UIView *_containerView;
    HTSLiveConnectingView *_connectingView;
    UILabel *_tipLabel;
    NSString *_navTitle;
    UIButton *_cancel;
    IESLiveGradientButton *_resume;
    UIButton *_continueManual;
    IESLiveGradientButton *_continueAuto;
    UIView *_bottomLine;
    HTSLivePKAutoMatchViewModel *_autoMatchViewModel;
    id <HTSLiveInteractionEntranceProvider> _entranceProvider;
    id <HTSLiveToolbarProvider> _toolbarProvider;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveEnvironment> _liveEnvironment;
    id <IESLiveSettings> _settings;
    id <HTSLiveAnchorDoubleInteractionActions> _actionCreator;
    id <HTSLiveInteractionEntranceActions> _entranceActionCreator;
    id <HTSLiveBannerActions> _bannerActionCreator;
}

@property(retain, nonatomic) id <HTSLiveBannerActions> bannerActionCreator; // @synthesize bannerActionCreator=_bannerActionCreator;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceActions> entranceActionCreator; // @synthesize entranceActionCreator=_entranceActionCreator;
@property(retain, nonatomic) id <HTSLiveAnchorDoubleInteractionActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) HTSLivePKAutoMatchViewModel *autoMatchViewModel; // @synthesize autoMatchViewModel=_autoMatchViewModel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) _Bool quitAutoMatch; // @synthesize quitAutoMatch=_quitAutoMatch;
@property(retain, nonatomic) IESLiveGradientButton *continueAuto; // @synthesize continueAuto=_continueAuto;
@property(retain, nonatomic) UIButton *continueManual; // @synthesize continueManual=_continueManual;
@property(retain, nonatomic) IESLiveGradientButton *resume; // @synthesize resume=_resume;
@property(retain, nonatomic) UIButton *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak HTSLiveConnectingView *connectingView; // @synthesize connectingView=_connectingView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id <HTSLiveDoubleInteractionContext> pkContextEntity; // @synthesize pkContextEntity=_pkContextEntity;
@property(nonatomic) __weak id <HTSLiveInviterAutoMatchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long autoMatchStatus; // @synthesize autoMatchStatus=_autoMatchStatus;
@property(nonatomic) _Bool startAutoMatchImmediately; // @synthesize startAutoMatchImmediately=_startAutoMatchImmediately;
@property(nonatomic) _Bool hideNavItems; // @synthesize hideNavItems=_hideNavItems;
- (void).cxx_destruct;
- (void)didInviteButtonClicked:(id)arg1;
- (void)didBackButtonClicked:(id)arg1;
- (_Bool)enableInteractiveCustomBackGround;
- (void)onAutoMatchFailed;
- (void)showInviteConnectingVC;
- (void)showInviteListVC;
- (void)autoMatch;
- (void)manualMatch;
- (void)resumeAutoMatch;
- (void)cancelAutoMatch;
- (void)retryAutoMatch;
- (void)setupDefaultViews;
- (void)setupCustomViews;
- (void)setupViews;
- (void)onSetupNavBar:(id)arg1;
- (void)bindWithViewModel;
- (void)dismiss;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end
