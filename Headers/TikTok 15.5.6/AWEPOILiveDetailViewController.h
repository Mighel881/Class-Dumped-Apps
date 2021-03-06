//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class AWEPOIDetailDataManager, AWEPOIDetailInfoContainerController, NSString, UIScrollView;
@protocol AWEPOILiveDetailViewControllerDelegate;

@interface AWEPOILiveDetailViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _isFirstPageLoadingShowed;
    unsigned long long _scene;
    id <AWEPOILiveDetailViewControllerDelegate> _delegate;
    AWEPOIDetailInfoContainerController *_contentViewController;
    UIScrollView *_contentView;
    AWEPOIDetailDataManager *_dataManager;
}

@property(nonatomic) _Bool isFirstPageLoadingShowed; // @synthesize isFirstPageLoadingShowed=_isFirstPageLoadingShowed;
@property(retain, nonatomic) AWEPOIDetailDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AWEPOIDetailInfoContainerController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <AWEPOILiveDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)p_updateVisibleZone;
- (void)p_bindStateAndAction;
- (id)constData;
- (id)poiDetail;
- (void)p_registerStoreWithModel:(id)arg1 poiId:(id)arg2;
- (id)store;
- (void)p_setupUI;
- (void)scrollViewDidScroll:(id)arg1;
- (void)p_updateUIWithData;
- (void)p_fetchData;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) NSString *poiID;
- (void)viewDidLoad;
- (id)initWithPOI:(id)arg1 scene:(unsigned long long)arg2 extraParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

