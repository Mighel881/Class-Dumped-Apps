//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEButton, AWEPOICollectView, AWEPOIDetailNavigationBarView, NSString;

@interface AWEPOIDetailNaviBarController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _shareInProgress;
    AWEPOIDetailNavigationBarView *_navigationBar;
    AWEButton *_moreBtn;
    AWEButton *_shareBtn;
    AWEPOICollectView *_collectBtn;
    AWEButton *_backgroundBackButton;
    CDUnknownBlockType _mapFetcher;
}

@property(nonatomic) _Bool shareInProgress; // @synthesize shareInProgress=_shareInProgress;
@property(copy, nonatomic) CDUnknownBlockType mapFetcher; // @synthesize mapFetcher=_mapFetcher;
@property(retain, nonatomic) AWEButton *backgroundBackButton; // @synthesize backgroundBackButton=_backgroundBackButton;
@property(retain, nonatomic) AWEPOICollectView *collectBtn; // @synthesize collectBtn=_collectBtn;
@property(retain, nonatomic) AWEButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) AWEButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) AWEPOIDetailNavigationBarView *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)p_bindActionAndState;
- (void)rx_store:(id)arg1 didSetWithModule:(id)arg2;
- (id)poiDetail;
- (id)constData;
- (id)store;
- (void)p_collect;
- (void)p_onCollectButtonClicked_IMP:(id)arg1;
- (void)onCollectBtnClicked:(id)arg1;
- (void)sharePOIInfo:(id)arg1;
- (void)p_onShareButtonClicked_IMP:(id)arg1;
- (void)onShareBtnClicked:(id)arg1;
- (void)p_onMoreButtonClicked_IMP:(id)arg1;
- (void)onMoreBtnClicked:(id)arg1;
- (void)p_setupNavigationBarButtonItems;
- (void)p_setup;
- (id)initWithMapFetcher:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
