//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveRoomModel;
@protocol HTSLiveDoubleInteractionContext, HTSLiveInteractionEntranceProvider, IESLiveEnvironment, IESLiveSettings;

@interface HTSLiveDoubleInteractionRouter : NSObject
{
    LiveRoomModel *_room;
    id <HTSLiveInteractionEntranceProvider> _entranceProvider;
    id <HTSLiveDoubleInteractionContext> _anchorInteractioContext;
    id <IESLiveEnvironment> _liveEnvironment;
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(nonatomic) __weak id <HTSLiveDoubleInteractionContext> anchorInteractioContext; // @synthesize anchorInteractioContext=_anchorInteractioContext;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (void)showReceiveConnectingVC:(id)arg1;
- (void)showInviteGroupVC;
- (void)showInviteListVC;
- (_Bool)enablePKOptimizeForSocial;
- (id)initWithEntity:(id)arg1;

@end
