//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAVPlayerWrapperDelegate-Protocol.h"
#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEAVPlayerWrapper, AWEGeneralSearchModel, AWEMusicModel, AWESearchMusicRankingSegemntedControl, NSIndexPath, NSMutableArray, NSString, UIImageView, UILabel, UIScrollView, UITableView, UIView;
@protocol AWEGeneralMusicRankingCellControllerDelegate, AWEModernFeedCellContext;

@interface AWEGeneralMusicRankingCellController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEAVPlayerWrapperDelegate, AWEModernFeedCellControllerProtocol>
{
    _Bool _isDownloadingMusic;
    id <AWEModernFeedCellContext> _context;
    id <AWEGeneralMusicRankingCellControllerDelegate> _playerDelegate;
    AWEAVPlayerWrapper *_audioPlayer;
    AWEMusicModel *_playingMusic;
    AWEGeneralSearchModel *_searchModel;
    NSString *_keyword;
    unsigned long long _currentAlbumIndex;
    NSIndexPath *_selectedIndexPath;
    UITableView *_selectedTableView;
    UIView *_headerView;
    UIImageView *_circleView;
    UILabel *_rankingTitleLabel;
    AWESearchMusicRankingSegemntedControl *_segmentedControl;
    UIView *_bottomView;
    UIScrollView *_scrollView;
    NSMutableArray *_musicListViewArray;
    NSMutableArray *_exposuredAlbum;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_90;
@property(retain, nonatomic) NSMutableArray *exposuredAlbum; // @synthesize exposuredAlbum=_exposuredAlbum;
@property(retain, nonatomic) NSMutableArray *musicListViewArray; // @synthesize musicListViewArray=_musicListViewArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) AWESearchMusicRankingSegemntedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UILabel *rankingTitleLabel; // @synthesize rankingTitleLabel=_rankingTitleLabel;
@property(retain, nonatomic) UIImageView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isDownloadingMusic; // @synthesize isDownloadingMusic=_isDownloadingMusic;
@property(retain, nonatomic) UITableView *selectedTableView; // @synthesize selectedTableView=_selectedTableView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) unsigned long long currentAlbumIndex; // @synthesize currentAlbumIndex=_currentAlbumIndex;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) AWEMusicModel *playingMusic; // @synthesize playingMusic=_playingMusic;
@property(retain, nonatomic) AWEAVPlayerWrapper *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <AWEGeneralMusicRankingCellControllerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)getTabType;
- (void)clickTrackerWithMusicModel:(id)arg1 indexPath:(id)arg2 clickType:(id)arg3;
- (void)clickTab;
- (void)clickMore;
- (void)exposureTrackerWithModel:(id)arg1 row:(unsigned long long)arg2;
- (void)exposureCell;
- (void)exposureCard;
- (id)enterFrom;
- (_Bool)isIndexPathValid:(id)arg1;
- (id)currentMusicList;
- (id)currentMusicListForTableView:(id)arg1;
- (void)playerWrapper:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)audioPlayMusicWithModel:(id)arg1;
- (void)didSelectMusicAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)cancelAudioPlay;
- (void)configureAudio;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)moreButtonAction;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configWithModel:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)setupBottomView;
- (void)setupMusicListView;
- (void)setupHeaderView;
- (void)setupBackground;
- (void)setupSubViews;
- (void)didBecomeActiveForReason:(unsigned long long)arg1;
- (void)didResignActiveForReason:(unsigned long long)arg1;
- (void)forceBecomeActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
