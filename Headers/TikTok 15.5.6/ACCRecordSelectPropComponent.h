//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRecordAuthComponentMessageProtocol-Protocol.h"
#import "ACCRecordSelectPropComponentProtocol-Protocol.h"
#import "ACCStickerComponentMessageProtocol-Protocol.h"

@class ACCAnimatedButton, AWEStickerSwitchImageView, NSString, UILabel;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCRecordRootComponentProtocol, ACCStickerComponentProtocol;

@interface ACCRecordSelectPropComponent : NSObject <ACCRecordSelectPropComponentProtocol, ACCStickerComponentMessageProtocol, ACCRecordAuthComponentMessageProtocol>
{
    _Bool _hasCameraAndMicAuthorized;
    _Bool _hasContainerVCAppeared;
    id <ACCComponentBusProtocol> _componentBus;
    ACCAnimatedButton *_stickerSwitchButton;
    AWEStickerSwitchImageView *_stickerSwitchImageView;
    UILabel *_stickerSwitchLabel;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    id <ACCStickerComponentProtocol> _stickerComponent;
}

@property(nonatomic) _Bool hasContainerVCAppeared; // @synthesize hasContainerVCAppeared=_hasContainerVCAppeared;
@property(nonatomic) _Bool hasCameraAndMicAuthorized; // @synthesize hasCameraAndMicAuthorized=_hasCameraAndMicAuthorized;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> stickerComponent; // @synthesize stickerComponent=_stickerComponent;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(retain, nonatomic) UILabel *stickerSwitchLabel; // @synthesize stickerSwitchLabel=_stickerSwitchLabel;
@property(retain, nonatomic) AWEStickerSwitchImageView *stickerSwitchImageView; // @synthesize stickerSwitchImageView=_stickerSwitchImageView;
@property(retain, nonatomic) ACCAnimatedButton *stickerSwitchButton; // @synthesize stickerSwitchButton=_stickerSwitchButton;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)showSuperEntranceBubbleIfNeeded;
- (void)msg_didApplySticker:(id)arg1 success:(_Bool)arg2;
- (void)msg_didApplyLocalSticker:(id)arg1;
- (void)msg_didFetchcagetoryList:(id)arg1;
- (void)msg_didPassCheckAuth:(unsigned long long)arg1;
- (void)msg_didConfirmAllowUseCamera:(_Bool)arg1;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (void)dealloc;
- (void)clickStickersBtn:(id)arg1;
- (void)configStickerBtnWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configStickerBtnWithURLArray:(id)arg1 index:(long long)arg2 isDefault:(_Bool)arg3 isUsing:(_Bool)arg4;
- (void)configStickerBtnWithURLArray:(id)arg1 isDefault:(_Bool)arg2 isUsing:(_Bool)arg3;
- (void)configStickerBtnWithURLArray:(id)arg1;
- (id)autoInjectComponentDictionaryOfstickerComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end

