//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCAutoCaptionComponentProtocolMessageProtocol-Protocol.h"
#import "ACCEditPlayerComponentMessageProtocol-Protocol.h"
#import "ACCStickerGestureComponentProtocol-Protocol.h"
#import "ACCStickerPannelComponentMessageProtocol-Protocol.h"
#import "ACCTextStickerContainerComponentMessageProtocol-Protocol.h"

@class AWEEditorStickerGestureViewController, NSString;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCEditLyricStickerComponentProtocol, ACCInfoStickerContainerComponentProtocol, ACCTextStickerContainerComponentProtocol, ACCVideoEditViewComponentProtocol;

@interface ACCStickerGestureComponent : NSObject <ACCTextStickerContainerComponentMessageProtocol, ACCStickerPannelComponentMessageProtocol, ACCAutoCaptionComponentProtocolMessageProtocol, ACCEditPlayerComponentMessageProtocol, ACCStickerGestureComponentProtocol>
{
    id <ACCComponentBusProtocol> componentBus;
    AWEEditorStickerGestureViewController *_stickerGestureController;
    id <ACCVideoEditViewComponentProtocol> _editViewComponent;
    id <ACCInfoStickerContainerComponentProtocol> _infoStickerContainerComponent;
    id <ACCTextStickerContainerComponentProtocol> _textStickerContainerComponent;
    id <ACCEditLyricStickerComponentProtocol> _editLyricStickerComponent;
}

@property(readonly, nonatomic) __weak id <ACCEditLyricStickerComponentProtocol> editLyricStickerComponent; // @synthesize editLyricStickerComponent=_editLyricStickerComponent;
@property(readonly, nonatomic) __weak id <ACCTextStickerContainerComponentProtocol> textStickerContainerComponent; // @synthesize textStickerContainerComponent=_textStickerContainerComponent;
@property(readonly, nonatomic) __weak id <ACCInfoStickerContainerComponentProtocol> infoStickerContainerComponent; // @synthesize infoStickerContainerComponent=_infoStickerContainerComponent;
@property(readonly, nonatomic) __weak id <ACCVideoEditViewComponentProtocol> editViewComponent; // @synthesize editViewComponent=_editViewComponent;
@property(retain, nonatomic) AWEEditorStickerGestureViewController *stickerGestureController; // @synthesize stickerGestureController=_stickerGestureController;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
- (void).cxx_destruct;
- (void)msg_playerDidFirstRenderLoaded;
- (void)finishPanOperation;
- (void)startPanOperation;
- (void)msg_autoCaptionClicked;
- (void)msg_textButtonClicked;
- (void)msg_stickerButtonClicked;
- (void)loadStickerContainerIfNeed;
- (void)containerViewControllerDidLoad;
- (id)autoInjectComponentDictionaryOfeditLyricStickerComponent;
- (id)autoInjectComponentDictionaryOftextStickerContainerComponent;
- (id)autoInjectComponentDictionaryOfinfoStickerContainerComponent;
- (id)autoInjectComponentDictionaryOfeditViewComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end
