//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "IESLiveNewPlayerControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEGradientView, AWELiveEpidCardView, AWELiveEpidDataController, IESLiveNewPlayerController, NSString, UITableView;
@protocol AWEModernFeedCellContext, IESLiveSettings;

@interface AWELiveEpidCellViewController : UIViewController <AWEModernFeedCellControllerProtocol, UITableViewDelegate, UITableViewDataSource, IESLiveNewPlayerControllerDelegate>
{
    _Bool _didShowInVC;
    _Bool _enableFrequentCheck;
    _Bool _didEnterByteLive;
    id <AWEModernFeedCellContext> _context;
    IESLiveNewPlayerController *_playerController;
    AWELiveEpidCardView *_liveCardView;
    AWELiveEpidDataController *_dataController;
    UITableView *_cardListView;
    double _lastCheckStatusTime;
    double _startPlayerTime;
    long long _loopCheckTimestamp;
    id <IESLiveSettings> _liveSettings;
    NSString *_keyWord;
    AWEGradientView *_backgroundView;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_65;
@property(retain, nonatomic) AWEGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(nonatomic) _Bool didEnterByteLive; // @synthesize didEnterByteLive=_didEnterByteLive;
@property(nonatomic) long long loopCheckTimestamp; // @synthesize loopCheckTimestamp=_loopCheckTimestamp;
@property(nonatomic) _Bool enableFrequentCheck; // @synthesize enableFrequentCheck=_enableFrequentCheck;
@property(nonatomic) double startPlayerTime; // @synthesize startPlayerTime=_startPlayerTime;
@property(nonatomic) double lastCheckStatusTime; // @synthesize lastCheckStatusTime=_lastCheckStatusTime;
@property(nonatomic) _Bool didShowInVC; // @synthesize didShowInVC=_didShowInVC;
@property(retain, nonatomic) UITableView *cardListView; // @synthesize cardListView=_cardListView;
@property(retain, nonatomic) AWELiveEpidDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) AWELiveEpidCardView *liveCardView; // @synthesize liveCardView=_liveCardView;
@property(retain, nonatomic) IESLiveNewPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_trackLiveDuration;
- (void)trackSearchLivePlay;
- (void)trackSearchResultShowEvent;
- (void)trackSearchResultClickEvent:(id)arg1;
- (void)_trackTabEvent;
- (void)_trackLiveShow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)checkRoomEndStatus;
- (void)player:(id)arg1 playbackStateDidChange:(unsigned long long)arg2;
- (void)player:(id)arg1 didReceiveError:(id)arg2;
- (void)player:(id)arg1 mediaSizeDidChange:(struct CGSize)arg2;
- (void)player:(id)arg1 loadStateDidChange:(unsigned long long)arg2;
- (_Bool)shouldPlayInNonAutoplayMode;
- (id)videoView;
- (void)didResignActiveForReason:(unsigned long long)arg1;
- (void)didBecomeActiveForReason:(unsigned long long)arg1;
- (void)didEndShowing;
- (_Bool)isMediaSourceCard;
- (void)updateBackgourndView:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)clickFullLive;
- (void)_deleteLiveCardWithModel:(id)arg1;
- (void)_stopPlayer;
- (void)_startPlayLiveWithURL:(id)arg1;
- (void)_updateLiveCard;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
