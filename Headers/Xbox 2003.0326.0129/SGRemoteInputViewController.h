//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXViewController.h"

#import "CustomModalable-Protocol.h"
#import "IBranchSessionInstrumentation-Protocol.h"
#import "XBXSwitchPanelItemDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SGInputSwitchPanel, SGProgressBarControl, UIButton, UILabel, UIView, UniversalRemoteViewController;

@interface SGRemoteInputViewController : XBXViewController <CustomModalable, XBXSwitchPanelItemDelegate, IBranchSessionInstrumentation>
{
    _Bool _volumeButtonEnabled;
    _Bool _mediaPlaying;
    int _switchPanelMode;
    int _appBarMode;
    int _localAppBarMode;
    unsigned int _mediaTitleId;
    int _activeRemoteButton;
    SGInputSwitchPanel *_switchPanel;
    UIView *_bottomPanel;
    UIView *_topBarContainerView;
    UIView *_remoteHighlight;
    UIView *_buttonContainer;
    UIView *_topContainer;
    UIView *_universalView;
    UILabel *_universalRemoteMessageLabel;
    UIButton *_universalRemoteButton;
    UIButton *_xboxRemoteButton;
    UIView *_instructionButtonsContainer;
    UIButton *_closeButton;
    UIButton *_dismissKeyboardButton;
    UILabel *_textInstructionLabel;
    UIButton *_volumeButton;
    SGProgressBarControl *_progressControl;
    UIButton *_yButton;
    UIButton *_xButton;
    UIButton *_bButton;
    UIButton *_jackButton;
    UIButton *_jillButton;
    UIButton *_xenonButton;
    UIView *_tvStreamingView;
    NSLayoutConstraint *_bottomPanelHeightConstraint;
    NSLayoutConstraint *_bottomPanelBottomConstraint;
    UniversalRemoteViewController *_universalRemoteInstance;
    NSLayoutConstraint *_topBarHeightConstraint;
    NSLayoutConstraint *_buttonsContainerHeightConstraint;
    NSLayoutConstraint *_switchPanelBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *switchPanelBottomConstraint; // @synthesize switchPanelBottomConstraint=_switchPanelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerHeightConstraint; // @synthesize buttonsContainerHeightConstraint=_buttonsContainerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topBarHeightConstraint; // @synthesize topBarHeightConstraint=_topBarHeightConstraint;
@property(nonatomic) int activeRemoteButton; // @synthesize activeRemoteButton=_activeRemoteButton;
@property(nonatomic) _Bool mediaPlaying; // @synthesize mediaPlaying=_mediaPlaying;
@property(nonatomic) unsigned int mediaTitleId; // @synthesize mediaTitleId=_mediaTitleId;
@property(nonatomic) int localAppBarMode; // @synthesize localAppBarMode=_localAppBarMode;
@property(nonatomic) int appBarMode; // @synthesize appBarMode=_appBarMode;
@property(nonatomic) int switchPanelMode; // @synthesize switchPanelMode=_switchPanelMode;
@property(retain, nonatomic) UniversalRemoteViewController *universalRemoteInstance; // @synthesize universalRemoteInstance=_universalRemoteInstance;
@property(nonatomic, getter=isVolumeButtonEnabled) _Bool volumeButtonEnabled; // @synthesize volumeButtonEnabled=_volumeButtonEnabled;
@property(retain, nonatomic) NSLayoutConstraint *bottomPanelBottomConstraint; // @synthesize bottomPanelBottomConstraint=_bottomPanelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomPanelHeightConstraint; // @synthesize bottomPanelHeightConstraint=_bottomPanelHeightConstraint;
@property(retain, nonatomic) UIView *tvStreamingView; // @synthesize tvStreamingView=_tvStreamingView;
@property(retain, nonatomic) UIButton *xenonButton; // @synthesize xenonButton=_xenonButton;
@property(retain, nonatomic) UIButton *jillButton; // @synthesize jillButton=_jillButton;
@property(retain, nonatomic) UIButton *jackButton; // @synthesize jackButton=_jackButton;
@property(retain, nonatomic) UIButton *bButton; // @synthesize bButton=_bButton;
@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) UIButton *yButton; // @synthesize yButton=_yButton;
@property(retain, nonatomic) SGProgressBarControl *progressControl; // @synthesize progressControl=_progressControl;
@property(retain, nonatomic) UIButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) UILabel *textInstructionLabel; // @synthesize textInstructionLabel=_textInstructionLabel;
@property(retain, nonatomic) UIButton *dismissKeyboardButton; // @synthesize dismissKeyboardButton=_dismissKeyboardButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *instructionButtonsContainer; // @synthesize instructionButtonsContainer=_instructionButtonsContainer;
@property(retain, nonatomic) UIButton *xboxRemoteButton; // @synthesize xboxRemoteButton=_xboxRemoteButton;
@property(retain, nonatomic) UIButton *universalRemoteButton; // @synthesize universalRemoteButton=_universalRemoteButton;
@property(retain, nonatomic) UILabel *universalRemoteMessageLabel; // @synthesize universalRemoteMessageLabel=_universalRemoteMessageLabel;
@property(retain, nonatomic) UIView *universalView; // @synthesize universalView=_universalView;
@property(retain, nonatomic) UIView *topContainer; // @synthesize topContainer=_topContainer;
@property(retain, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) UIView *remoteHighlight; // @synthesize remoteHighlight=_remoteHighlight;
@property(retain, nonatomic) UIView *topBarContainerView; // @synthesize topBarContainerView=_topBarContainerView;
@property(retain, nonatomic) UIView *bottomPanel; // @synthesize bottomPanel=_bottomPanel;
@property(retain, nonatomic) SGInputSwitchPanel *switchPanel; // @synthesize switchPanel=_switchPanel;
- (void).cxx_destruct;
- (id)urcDisabled;
- (id)pageName;
- (void)sendChannelNumberCommand:(id)arg1;
- (void)sendChannelNameCommand:(id)arg1;
- (void)sendButtonCommand:(id)arg1;
- (void)animateRemote;
- (void)createUniversalRemote;
- (void)setHighlightUnderButton:(id)arg1;
- (void)onLiveTvInfoReceived:(id)arg1;
- (void)universalClicked:(id)arg1;
- (void)clearClicked:(id)arg1;
- (id)customModalOverlayViewColor;
- (void)dismissClicked:(id)arg1;
- (void)xboxClicked:(id)arg1;
- (void)yClicked:(id)arg1;
- (void)xClicked:(id)arg1;
- (void)backClicked:(id)arg1;
- (void)volumeClicked:(id)arg1;
- (void)xenonClicked:(id)arg1;
- (void)jillClicked:(id)arg1;
- (void)jackClicked:(id)arg1;
- (id)getViewModel;
- (void)addMediaControl;
- (void)addIEControl;
- (void)addNoneControl;
- (void)clearButtonPanel;
- (void)close;
- (void)updateVolumeButtonHidden;
- (void)onViewModelIsUniversalRemoteEnabledChanged;
- (void)onViewModelShowVolumeButtonChanged;
- (void)onViewModelRemoteChanged;
- (void)onDestroy;
- (void)onNavigatedFrom:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onNavigatedTo:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)changeToNowPlayingMode;
- (void)setupViewModelDataStateObserving;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

