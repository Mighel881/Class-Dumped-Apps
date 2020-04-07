//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveCancelableSegue-Protocol.h"
#import "IESLiveFeedDrawerSegue-Protocol.h"
#import "IESLiveObservableSegue-Protocol.h"
#import "IESLiveTrackerSegue-Protocol.h"

@class IESLiveNewPlayerController, LiveRoomModel, NSDictionary, NSNumber, NSString, UIViewController;
@protocol HTSLiveAudienceViewControllerDelegate;

@interface IESLiveRoomSegue : NSObject <IESLiveCancelableSegue, IESLiveTrackerSegue, IESLiveObservableSegue, IESLiveFeedDrawerSegue>
{
    _Bool _isFromDouPlusVideo;
    _Bool _isFromEffectAdVideo;
    _Bool _enableFeedDrawer;
    _Bool _toMultiSegue;
    _Bool _disableErrorPrompts;
    _Bool _goLiveSquare;
    _Bool _allowDislike;
    _Bool _canceled;
    NSString *_enterMethod;
    NSString *_enterFrom;
    NSString *_actionType;
    NSDictionary *_contextParams;
    long long _starlightRank;
    NSDictionary *_douPlusExtra;
    NSString *_outerRequestID;
    NSString *_previousPage;
    NSDictionary *_effectAdExtra;
    CDUnknownBlockType _roomFinished;
    NSDictionary *_clickCxtParams;
    NSNumber *_roomID;
    NSNumber *_portalID;
    NSString *_originatingRoomID;
    LiveRoomModel *_room;
    NSNumber *_anchorID;
    NSString *_secAnchorID;
    UIViewController *_sourceController;
    IESLiveNewPlayerController *_player;
    id <HTSLiveAudienceViewControllerDelegate> _audienceViewControllerDelegate;
}

+ (id)segueWithSourceController:(id)arg1 room:(id)arg2;
+ (id)segueWithSourceController:(id)arg1 anchorID:(id)arg2;
+ (id)segueWithSourceController:(id)arg1 roomID:(id)arg2;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool allowDislike; // @synthesize allowDislike=_allowDislike;
@property(nonatomic) _Bool goLiveSquare; // @synthesize goLiveSquare=_goLiveSquare;
@property(nonatomic) _Bool disableErrorPrompts; // @synthesize disableErrorPrompts=_disableErrorPrompts;
@property(nonatomic) __weak id <HTSLiveAudienceViewControllerDelegate> audienceViewControllerDelegate; // @synthesize audienceViewControllerDelegate=_audienceViewControllerDelegate;
@property(retain, nonatomic) IESLiveNewPlayerController *player; // @synthesize player=_player;
@property(nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(nonatomic) _Bool toMultiSegue; // @synthesize toMultiSegue=_toMultiSegue;
@property(copy, nonatomic) NSString *secAnchorID; // @synthesize secAnchorID=_secAnchorID;
@property(retain, nonatomic) NSNumber *anchorID; // @synthesize anchorID=_anchorID;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(copy, nonatomic) NSString *originatingRoomID; // @synthesize originatingRoomID=_originatingRoomID;
@property(retain, nonatomic) NSNumber *portalID; // @synthesize portalID=_portalID;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(copy, nonatomic) NSDictionary *clickCxtParams; // @synthesize clickCxtParams=_clickCxtParams;
@property(copy, nonatomic) CDUnknownBlockType roomFinished; // @synthesize roomFinished=_roomFinished;
@property(nonatomic) _Bool enableFeedDrawer; // @synthesize enableFeedDrawer=_enableFeedDrawer;
@property(retain, nonatomic) NSDictionary *effectAdExtra; // @synthesize effectAdExtra=_effectAdExtra;
@property(nonatomic) _Bool isFromEffectAdVideo; // @synthesize isFromEffectAdVideo=_isFromEffectAdVideo;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(retain, nonatomic) NSString *outerRequestID; // @synthesize outerRequestID=_outerRequestID;
@property(retain, nonatomic) NSDictionary *douPlusExtra; // @synthesize douPlusExtra=_douPlusExtra;
@property(nonatomic) _Bool isFromDouPlusVideo; // @synthesize isFromDouPlusVideo=_isFromDouPlusVideo;
@property(nonatomic) long long starlightRank; // @synthesize starlightRank=_starlightRank;
@property(retain, nonatomic) NSDictionary *contextParams; // @synthesize contextParams=_contextParams;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
- (void).cxx_destruct;
- (_Bool)shouldCancelNewSegue:(id)arg1;
- (_Bool)canDirectEnterLiveRoom;
- (void)cancelRoomSegue;
- (_Bool)isCanceled;
- (id)enteredRoomOwnerID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
