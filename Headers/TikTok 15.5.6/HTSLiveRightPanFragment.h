//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class HTSEventContext, LiveRoomModel, NSString, UIPanGestureRecognizer;
@protocol HTSLiveDetailRouter, HTSLiveViewHierarchyProvider, IESLiveBackTipRouter, IESLiveCustomConfig, IESLiveEnvironment, IESLiveSettings, IESLiveTracker;

@interface HTSLiveRightPanFragment : NSObject <UIGestureRecognizerDelegate, HTSLiveComponent>
{
    _Bool _isRightPanEnabled;
    LiveRoomModel *_room;
    long long _orientation;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveEnvironment> _appEnvironment;
    id <IESLiveCustomConfig> _customConfig;
    UIPanGestureRecognizer *_rightPan;
    HTSEventContext *_trackContext;
    id <IESLiveBackTipRouter> _backRouter;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveSettings> _settings;
    id <IESLiveTracker> _tracker;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveBackTipRouter> backRouter; // @synthesize backRouter=_backRouter;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(nonatomic) _Bool isRightPanEnabled; // @synthesize isRightPanEnabled=_isRightPanEnabled;
@property(nonatomic) __weak UIPanGestureRecognizer *rightPan; // @synthesize rightPan=_rightPan;
@property(retain, nonatomic) id <IESLiveCustomConfig> customConfig; // @synthesize customConfig=_customConfig;
@property(retain, nonatomic) id <IESLiveEnvironment> appEnvironment; // @synthesize appEnvironment=_appEnvironment;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (void)componentWillUnmount;
- (void)componentOrientationChanged:(long long)arg1;
- (void)componentDidMount;
- (void)trackRightPanExit;
- (void)observePanState:(id)arg1;
- (void)addRightPan;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
