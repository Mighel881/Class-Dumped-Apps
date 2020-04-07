//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESMMGameActionHandler-Protocol.h"

@class HTSGLFilterGroup, IESMMARCamera, IESMMGameManager, NSDictionary, NSString;
@protocol IESMMEffectGroupProtocol, IESMMGameActionHandlerDelegate, IESMMGameMessageDispatcher;

@interface IESMMGameARCameraActionHandler : NSObject <IESMMGameActionHandler>
{
    id <IESMMGameActionHandlerDelegate> _delegate;
    id <IESMMGameMessageDispatcher> _messageDispatcher;
    IESMMGameManager *_gameManager;
    IESMMARCamera *_arCamera;
    HTSGLFilterGroup<IESMMEffectGroupProtocol> *_effectFilter;
    NSDictionary *_handleBlocks;
    long long _arCameraMaxMappingStatus;
}

@property(nonatomic) long long arCameraMaxMappingStatus; // @synthesize arCameraMaxMappingStatus=_arCameraMaxMappingStatus;
@property(retain, nonatomic) NSDictionary *handleBlocks; // @synthesize handleBlocks=_handleBlocks;
@property(nonatomic) __weak HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(nonatomic) __weak IESMMARCamera *arCamera; // @synthesize arCamera=_arCamera;
@property(nonatomic) __weak IESMMGameManager *gameManager; // @synthesize gameManager=_gameManager;
@property(nonatomic) __weak id <IESMMGameMessageDispatcher> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(nonatomic) __weak id <IESMMGameActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMapInitialAction:(id)arg1;
- (void)handleRequestMapAction:(id)arg1 fromPlayer:(id)arg2;
- (void)handleAnchorUpdateAction:(id)arg1;
- (void)handleAction:(id)arg1 fromPlayer:(id)arg2;
- (_Bool)canHandleAction:(id)arg1;
- (void)serverTryHitTestPlane;
- (void)configureARCameraWithGameState:(unsigned long long)arg1;
- (void)onGameStateDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
