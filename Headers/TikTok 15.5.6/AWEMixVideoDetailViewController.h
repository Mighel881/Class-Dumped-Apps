//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEMixVideoDetailViewDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEBizUIBubble, AWEButton, AWEMixVideoModel, NSNumber, NSString, UIImageView, UIView;
@protocol AWEMixVideoDetailView;

@interface AWEMixVideoDetailViewController : UIViewController <BTDRouterViewControllerProtocol, AWEMixVideoDetailViewDelegate>
{
    _Bool _firstAppear;
    _Bool _fromPersonPage;
    _Bool _scrollTip;
    NSString *_mixId;
    AWEMixVideoModel *_mixVideoModel;
    UIView *_navBackView;
    AWEButton *_shareBtn;
    UIImageView *_loadingImageView;
    UIView<AWEMixVideoDetailView> *_detailView;
    double _duration;
    NSString *_previousPage;
    NSNumber *_fromOrder;
    NSString *_authorID;
    NSString *_groupID;
    AWEBizUIBubble *_bubbleView;
    NSString *_searchID;
    NSString *_searchResultID;
    NSString *_searchLogPB;
}

+ (void)__awe__codeRunnerRun_73;
@property(copy, nonatomic) NSString *searchLogPB; // @synthesize searchLogPB=_searchLogPB;
@property(copy, nonatomic) NSString *searchResultID; // @synthesize searchResultID=_searchResultID;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) _Bool scrollTip; // @synthesize scrollTip=_scrollTip;
@property(retain, nonatomic) AWEBizUIBubble *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *authorID; // @synthesize authorID=_authorID;
@property(copy, nonatomic) NSNumber *fromOrder; // @synthesize fromOrder=_fromOrder;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(nonatomic) _Bool fromPersonPage; // @synthesize fromPersonPage=_fromPersonPage;
@property(nonatomic) _Bool firstAppear; // @synthesize firstAppear=_firstAppear;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIView<AWEMixVideoDetailView> *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) AWEButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIView *navBackView; // @synthesize navBackView=_navBackView;
@property(retain, nonatomic) AWEMixVideoModel *mixVideoModel; // @synthesize mixVideoModel=_mixVideoModel;
@property(copy, nonatomic) NSString *mixId; // @synthesize mixId=_mixId;
- (void).cxx_destruct;
- (void)onShareBtnClicked:(id)arg1;
- (void)scrollViewDidShowNav:(_Bool)arg1;
- (void)requestMixVideoListWithNoData:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showTitleTaphintBubble;
- (void)refreshData;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

