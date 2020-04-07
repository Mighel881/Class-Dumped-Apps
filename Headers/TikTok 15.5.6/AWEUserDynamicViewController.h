//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEVideoFeedViewController.h"

#import "AWEPublishTaskMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEUserProfileTabBaseMethod-Protocol.h"

@class AWEUILoadingView, AWEUserDynamicDataController, NSDictionary, NSString;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEUserDynamicViewController : AWEVideoFeedViewController <AWEPublishTaskMessage, AWEUserMessage, AWEUserProfileTabBaseMethod>
{
    _Bool _isCurrentUser;
    _Bool _fromHome;
    _Bool _isForbiddenRefreshData;
    _Bool _isViewAppeared;
    _Bool _shouldReloadOnNextAppear;
    _Bool _willShowFullScreenVideoFeed;
    id <AWEUserProfileTabVCDelegate> _delegate;
    NSString *_userID;
    NSDictionary *_searchLogPassback;
    NSString *_searchType;
    AWEUserDynamicDataController *_dynamicDataController;
    AWEUILoadingView *_loadingView;
    struct CGPoint _savedDynamicContentOffset;
}

@property(nonatomic) _Bool willShowFullScreenVideoFeed; // @synthesize willShowFullScreenVideoFeed=_willShowFullScreenVideoFeed;
@property(nonatomic) struct CGPoint savedDynamicContentOffset; // @synthesize savedDynamicContentOffset=_savedDynamicContentOffset;
@property(nonatomic) _Bool shouldReloadOnNextAppear; // @synthesize shouldReloadOnNextAppear=_shouldReloadOnNextAppear;
@property(nonatomic) _Bool isViewAppeared; // @synthesize isViewAppeared=_isViewAppeared;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isForbiddenRefreshData; // @synthesize isForbiddenRefreshData=_isForbiddenRefreshData;
@property(retain, nonatomic) AWEUserDynamicDataController *dynamicDataController; // @synthesize dynamicDataController=_dynamicDataController;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSDictionary *searchLogPassback; // @synthesize searchLogPassback=_searchLogPassback;
@property(nonatomic) _Bool fromHome; // @synthesize fromHome=_fromHome;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) __weak id <AWEUserProfileTabVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldHideNoMoreText;
- (void)clearDisplayDatas;
- (id)avatarArrayForUser:(id)arg1;
- (long long)newAwemeInsertIndex;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (id)contentView;
- (double)contentSizeHeight;
- (void)adjustContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (double)contentOffsetY;
- (void)reloadData;
- (void)refreshData;
- (void)updateUserStatusWithBlock:(CDUnknownBlockType)arg1 userID:(id)arg2 remarkNameBlock:(CDUnknownBlockType)arg3;
- (void)didFinishSetRemarkWithUser:(id)arg1;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)didCreateRepost:(id)arg1;
- (void)refreshDataList;
- (void)setBadNetworkViewWithError:(id)arg1;
- (double)getScrollViewHeaderHeight;
- (double)videoFeedTopMargin;
- (void)handleWillShowFullScreenVideoFeed;
- (_Bool)isSingleTapEnterDetail;
- (void)didEndShowing;
- (void)didStarShowing;
- (_Bool)shouldNotActivateItem;
- (id)dataController;
- (id)sectionSearchType;
- (id)sectionBindedData;
- (id)sectionSearchLogPassback;
- (id)updateCellModel:(id)arg1 withContainerWidth:(double)arg2;
- (void)task:(id)arg1 didEndWithResult:(long long)arg2 error:(id)arg3;
- (void)_handleEmptyViewWithError:(id)arg1;
- (void)_refreshData;
- (void)p_loadMoreIfNeed:(id)arg1 error:(id)arg2;
- (void)animatedTableView;
- (void)showDynamicView:(_Bool)arg1;
- (void)initialFetch;
- (void)_setupUI;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserID:(id)arg1 referString:(id)arg2 user:(id)arg3;
- (id)initWithUserID:(id)arg1 referString:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
