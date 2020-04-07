//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "AWESearchRecommWordsCollectionViewLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEWordSourceModel, NSDictionary, NSString, UICollectionView, UILabel, UIView;

@interface AWEGeneralSearchRecommWordsCellController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWESearchRecommWordsCollectionViewLayoutDelegate, AWEModernFeedCellControllerProtocol>
{
    UIView *_headerView;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    UIView *_separatorView;
    AWEWordSourceModel *_recommWordsModel;
    NSDictionary *_logPassback;
}

+ (long long)numberOfRowsForModel:(id)arg1;
+ (double)collectionContentHeightWithModel:(id)arg1;
+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_124;
@property(copy, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(retain, nonatomic) AWEWordSourceModel *recommWordsModel; // @synthesize recommWordsModel=_recommWordsModel;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (id)modelAtIndex:(long long)arg1;
- (double)recommWordsLayout:(id)arg1 widthForItemAtIndexPath:(id)arg2;
- (long long)numberOfRowsForRecommWordsLayout:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)contentHeightForRecommWordsLayout:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)buildViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
