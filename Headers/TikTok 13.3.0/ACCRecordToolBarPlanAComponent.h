//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCRecordToolBarComponent.h"

#import "ACCRecordAuthComponentMessageProtocol-Protocol.h"
#import "ACCRecordToolBarPlanAComponentProtocol-Protocol.h"

@class AWEAnimatedButton, AWECameraContainerFeatureButtonScrollView, NSArray, NSMutableSet, NSString, UIButton, UILabel;
@protocol ACCComponentBusProtocol, ACCComponentProtocol;

@interface ACCRecordToolBarPlanAComponent : ACCRecordToolBarComponent <ACCRecordToolBarPlanAComponentProtocol, ACCRecordAuthComponentMessageProtocol>
{
    _Bool _hasShowMoreBubble;
    AWEAnimatedButton *_moreButton;
    AWECameraContainerFeatureButtonScrollView *_featureButtonScrollView;
    NSArray *_sideToolButtonTypeSortedArray;
    unsigned long long _state;
}

@property(nonatomic) _Bool hasShowMoreBubble; // @synthesize hasShowMoreBubble=_hasShowMoreBubble;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)setSideToolButtonTypeSortedArray:(id)arg1;
- (void)setFeatureButtonScrollView:(id)arg1;
@property(retain, nonatomic) AWEAnimatedButton *moreButton; // @synthesize moreButton=_moreButton;
- (void).cxx_destruct;
- (void)showMoreBubbleIfNeeded;
- (void)msg_didPassCheckAuth:(unsigned long long)arg1;
- (void)msg_didConfirmAllowUseCamera:(_Bool)arg1;
- (void)msg_makeNormalRecordComponentsFadeDisappear:(_Bool)arg1 showSwapCameraBtn:(_Bool)arg2 triggerByPanel:(_Bool)arg3;
- (void)msg_makeNormalRecordComponentsDisappear:(_Bool)arg1 exceptToolbar:(_Bool)arg2;
- (id)featureButtonScrollView;
- (_Bool)needShowWithType:(unsigned long long)arg1;
- (id)sideToolButtonTypeSortedArray;
- (void)updateFeatureScrollViewWithTypes:(id)arg1;
- (void)expandToolBar;
- (void)foldToolBarWithAnimate:(_Bool)arg1;
- (void)p_moreButtonClicked:(id)arg1;
- (void)updateConstraints;
- (void)addSideToolButtons;
- (void)containerViewControllerDidAppear;
- (void)foldToolBar;
- (void)containerViewControllerPostDidLoad;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UILabel *audioClipButtonLabel;
@property(retain, nonatomic) AWEAnimatedButton *beautySwitchButton;
@property(retain, nonatomic) UILabel *beautySwitchButtonLabel;
@property(retain, nonatomic) UIButton *cameraSwapButton;
@property(retain, nonatomic) UILabel *cameraSwapButtonLabel;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isSwapCamera;
@property(retain, nonatomic) UILabel *moreButtonLabel;
@property(retain, nonatomic) AWEAnimatedButton *musicClipButton;
@property(nonatomic) _Bool shouldShowTorchButton;
@property(retain, nonatomic) AWEAnimatedButton *speedControlButton;
@property(retain, nonatomic) UILabel *speedControlButtonLabel;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useBeautySwitchButton;
@property(retain, nonatomic) NSMutableSet *viewsNeedsHidden;

@end
