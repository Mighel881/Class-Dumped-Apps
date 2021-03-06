//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLivePluginLayoutView-Protocol.h"
#import "LiveUserListViewDelegate-Protocol.h"

@class HTSLiveRoomProfileStore, LiveUserListView, NSString;
@protocol HTSLivePluginLayoutMachineProvider, HTSLiveRoomProfileActions, HTSLiveViewHierarchyProvider, IESLiveCloseProvider, IESLiveEnvironment, IESLiveFeedDrawerProvider, IESLiveSettings;

@interface IESLiveUserListView : UIView <LiveUserListViewDelegate, HTSLivePluginLayoutView>
{
    _Bool _isExpanding;
    HTSLiveRoomProfileStore *_store;
    LiveUserListView *_listView;
    id <IESLiveEnvironment> _appTarget;
    id <HTSLiveRoomProfileActions> _profileActionCreator;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <IESLiveFeedDrawerProvider> _drawerProvider;
    id <IESLiveCloseProvider> _closeProvider;
    id <IESLiveSettings> _settings;
}

@property(nonatomic) _Bool isExpanding; // @synthesize isExpanding=_isExpanding;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveCloseProvider> closeProvider; // @synthesize closeProvider=_closeProvider;
@property(retain, nonatomic) id <IESLiveFeedDrawerProvider> drawerProvider; // @synthesize drawerProvider=_drawerProvider;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <HTSLiveRoomProfileActions> profileActionCreator; // @synthesize profileActionCreator=_profileActionCreator;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) LiveUserListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) HTSLiveRoomProfileStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (struct CGSize)pluginLayoutContentSize;
- (unsigned long long)viewType;
- (void)didUpdateRoomUserCount:(id)arg1;
- (void)refreshAudienceList:(id)arg1;
- (void)refreshLiveRoomModel:(id)arg1;
- (void)setupViews;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

