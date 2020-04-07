//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCAudioClipComponentProtocol-Protocol.h"
#import "ACCRecordSelectMusicComponentMessage-Protocol.h"
#import "ACCRecordSwitchModeComponentMessageProtocol-Protocol.h"
#import "ACCRecordToolBarComponentMessage-Protocol.h"

@class AVAsset, AVPlayer, AWEAudioClipView, NSString, UIView;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCRecordRootComponentProtocol;

@interface ACCAudioClipComponent : NSObject <ACCAudioClipComponentProtocol, ACCRecordSelectMusicComponentMessage, ACCRecordToolBarComponentMessage, ACCRecordSwitchModeComponentMessageProtocol>
{
    _Bool _showingAudioClipView;
    _Bool _isFirstAppear;
    _Bool _useExternalPlayer;
    _Bool _reachedEndOfClipedFragment;
    _Bool _allowUsingVideoDurationAsMaxMusicDuration;
    id <ACCComponentBusProtocol> _componentBus;
    UIView *_containerView;
    AWEAudioClipView *_audioClipView;
    AVPlayer *_internalPlayer;
    AVAsset *_currentAsset;
    double _maxDuration;
    id <ACCRecordRootComponentProtocol> _rootComponent;
}

@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(retain, nonatomic) AVAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) AVPlayer *internalPlayer; // @synthesize internalPlayer=_internalPlayer;
@property(nonatomic) _Bool allowUsingVideoDurationAsMaxMusicDuration; // @synthesize allowUsingVideoDurationAsMaxMusicDuration=_allowUsingVideoDurationAsMaxMusicDuration;
@property(nonatomic, getter=isReachEndOfClipedFragment) _Bool reachedEndOfClipedFragment; // @synthesize reachedEndOfClipedFragment=_reachedEndOfClipedFragment;
@property(nonatomic) _Bool useExternalPlayer; // @synthesize useExternalPlayer=_useExternalPlayer;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) AWEAudioClipView *audioClipView; // @synthesize audioClipView=_audioClipView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, getter=isShowingAudioClipView) _Bool showingAudioClipView; // @synthesize showingAudioClipView=_showingAudioClipView;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)msg_didClickClipMusicButton;
- (void)msg_didChangeToMode:(long long)arg1 fromMode:(long long)arg2;
- (void)msg_shouldCaptureAnimationBegin:(CDUnknownBlockType)arg1;
- (void)updateChangeMusicUI;
- (void)msg_didPickMusic;
- (void)msg_didCancelMusic;
- (struct _ACCAudioRange)accAudioRangeWithHTSAudioRange:(struct _HTSAudioRange)arg1;
- (id)musicAsset;
- (void)containerViewControllerDidDisappear;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerWillAppear;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)p_clickClipMusicDoneBtn:(id)arg1;
- (void)p_playerReplayWithRange:(struct _ACCAudioRange)arg1;
- (void)p_updateAudioSliderStartTimeIndicatorBtnWithRange:(struct _ACCAudioRange)arg1;
- (void)p_addAuidoClipViewAudioRangeChangeObserver;
- (void)p_addAudioSliderObserver;
- (void)recoverAudioRelatedInfo;
- (void)showMusicClipViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showMusicClipView;
- (void)p_replayBarFromRangeLocation;
- (void)p_configPlayerWithAsset:(id)arg1;
- (void)updateAudioBarWithURL:(id)arg1 asset:(id)arg2 startLocation:(double)arg3 exsitingVideoTotalDuration:(double)arg4;
- (CDStruct_1b6d18a9)getBarStartLocation;
- (void)updateAudioBarTimeWithTime:(double)arg1;
- (void)updateAudioClipViewWithTime:(double)arg1;
- (void)addAudioCLipViewForView:(id)arg1;
- (id)init;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end
