//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveAudienceListModel, LiveRoomModel, RACCommand;
@protocol HTSLiveDetailRouter, IESLiveEnvironment;

@interface HTSLiveAudienceListViewModel : NSObject
{
    RACCommand *_updater;
    long long _rankType;
    IESLiveAudienceListModel *_listModel;
    LiveRoomModel *_roomModel;
    id <IESLiveEnvironment> _appTarget;
    id <HTSLiveDetailRouter> _router;
}

@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) IESLiveAudienceListModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) long long rankType; // @synthesize rankType=_rankType;
@property(retain, nonatomic) RACCommand *updater; // @synthesize updater=_updater;
- (void).cxx_destruct;
- (id)footerContent;
- (id)rankDesc;
- (id)title;
- (void)doUpdate;

@end
