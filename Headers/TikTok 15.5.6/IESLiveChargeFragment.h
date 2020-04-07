//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "IESLiveChargeRouter-Protocol.h"

@class HTSEventContext, IESLiveHalfChargeView, LiveRoomModel, NSString;
@protocol HTSLiveViewHierarchyProvider, IESLiveContainerRouter, IESLiveEnvironment, IESLiveInternalRouter, IESLiveMonitor, IESLiveSettings, IESLiveTracker, IESLiveUserService;

@interface IESLiveChargeFragment : NSObject <HTSLiveComponent, IESLiveChargeRouter>
{
    HTSEventContext *_trackContext;
    LiveRoomModel *_room;
    IESLiveHalfChargeView *_halfChargeView;
    long long _orientation;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveSettings> _settings;
    id <IESLiveTracker> _tracker;
    id <IESLiveMonitor> _monitor;
    id <IESLiveUserService> _userService;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveInternalRouter> _internalRouter;
    id <IESLiveContainerRouter> _containerRouter;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) id <IESLiveContainerRouter> containerRouter; // @synthesize containerRouter=_containerRouter;
@property(retain, nonatomic) id <IESLiveInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) IESLiveHalfChargeView *halfChargeView; // @synthesize halfChargeView=_halfChargeView;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
- (void).cxx_destruct;
- (void)componentOrientationChanged:(long long)arg1;
- (void)componentDidMount;
- (void)p_showH5ChargeViewWithTrackParams:(id)arg1;
- (void)p_showChargeViewControllerWithParams:(id)arg1;
- (void)p_createLiveViewWithTrackParams:(id)arg1 successCallBack:(CDUnknownBlockType)arg2;
- (void)p_createFirstChargeViewWithTrackParams:(id)arg1 successCallBack:(CDUnknownBlockType)arg2;
- (void)p_showChargeViewWithUserInfo:(id)arg1 withFirstPayParams:(id)arg2 successCallBack:(CDUnknownBlockType)arg3;
- (id)p_buildChargeParamsWithUserInfo:(id)arg1 firstPayParams:(id)arg2;
- (void)showFirstChargePopupWithUserInfo:(id)arg1 withFirstPayParams:(id)arg2 successCallBack:(CDUnknownBlockType)arg3;
- (void)showChargePanelWithUserInfo:(id)arg1 withFirstPayParams:(id)arg2 successCallBack:(CDUnknownBlockType)arg3;
- (void)showChargePanelWithUserInfo:(id)arg1;
- (id)initWithRoom:(id)arg1 context:(id)arg2;
- (id)providedRouter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
