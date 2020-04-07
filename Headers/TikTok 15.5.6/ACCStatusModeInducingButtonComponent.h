//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCStatusModeInducingButtonComponentProtocol-Protocol.h"

@class LOTAnimationView, NSString, UIView;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCRecordRootComponentProtocol;

@interface ACCStatusModeInducingButtonComponent : NSObject <ACCStatusModeInducingButtonComponentProtocol>
{
    id <ACCComponentBusProtocol> _componentBus;
    LOTAnimationView *_inducingView;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    UIView *_inducingViewWrapper;
}

@property(retain, nonatomic) UIView *inducingViewWrapper; // @synthesize inducingViewWrapper=_inducingViewWrapper;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(retain, nonatomic) LOTAnimationView *inducingView; // @synthesize inducingView=_inducingView;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)clickInducingButton;
- (_Bool)needToShow;
- (void)downloadLottieWithCompletion:(CDUnknownBlockType)arg1;
- (void)containerViewControllerDidLoad;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end
