//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableDictionary;

@interface AWEPOIDetailInfoContainerController : UIViewController
{
    struct vector<std::__1::tuple<CGRect, id, AWEPOIDetailCellViewController *>, std::__1::allocator<std::__1::tuple<CGRect, id, AWEPOIDetailCellViewController *>>> _layoutAttibutes;
    _Bool _isContentHeightChanged;
    NSMutableDictionary *_reusePool;
    double _contentHeight;
    NSArray *_contentIdentifiers;
    double _firstLiveVcIndex;
    double _reloadIndex;
    struct CGRect _visibleRect;
}

@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) _Bool isContentHeightChanged; // @synthesize isContentHeightChanged=_isContentHeightChanged;
@property(nonatomic) double reloadIndex; // @synthesize reloadIndex=_reloadIndex;
@property(nonatomic) double firstLiveVcIndex; // @synthesize firstLiveVcIndex=_firstLiveVcIndex;
@property(copy, nonatomic) NSArray *contentIdentifiers; // @synthesize contentIdentifiers=_contentIdentifiers;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) NSMutableDictionary *reusePool; // @synthesize reusePool=_reusePool;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)rx_store:(id)arg1 didSetWithModule:(id)arg2;
- (id)poiDetail;
- (id)constData;
- (id)store;
- (__wrap_iter_044602ad)p_firstLiveIt;
- (void)p_returnCellViewController:(id)arg1 WithItem:(id)arg2;
- (id)p_getCellViewControllerWithItem:(id)arg1;
- (void)p_showItem:(tuple_652e4a0d *)arg1 itemIndex:(long long)arg2;
- (_Bool)p_removeItem:(tuple_652e4a0d *)arg1;
- (void)p_updateViewHierarchy;
- (void)p_buildViewHierarchy;
- (void)p_updateLayoutAttributesWithKey:(id)arg1;
- (void)p_caculateLayoutAttributes;
- (void)p_reloadIndexWithKey:(id)arg1;
- (void)p_reloadData;
- (double)p_contentHeight;
- (void)p_didEndDisplayingViewController:(id)arg1 forItem:(id)arg2;
- (void)p_willEndDisplayingViewController:(id)arg1 forItem:(id)arg2;
- (void)p_didDisplayViewController:(id)arg1 forItem:(id)arg2;
- (void)p_willDisplayViewController:(id)arg1 forItem:(id)arg2;
- (void)p_updateViewController:(id)arg1 forItem:(id)arg2;
- (double)p_heightForItem:(id)arg1;
- (id)p_createViewControllerForIdentifier:(id)arg1;
- (id)p_identifierForItem:(id)arg1;
- (id)p_items;
- (void)p_generateDataSource;
- (void)hostDidDisappear;
- (void)hostWillDisappear;
- (void)hostDidAppear;
- (void)hostWillAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end
