//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeDetailTableViewControllerDelegate-Protocol.h"
#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEGeneralSearchModel, NSArray, NSString, UICollectionView, UILabel, UIView;
@protocol AWEAwemeDetailTableViewControllerProtocol, AWEModernFeedCellContext;

@interface AWEGeneralFilmTVCardCellController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEAwemeDetailTableViewControllerDelegate, AWEModernFeedCellControllerProtocol>
{
    id <AWEModernFeedCellContext> _context;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    NSArray *_topicArray;
    AWEGeneralSearchModel *_searchModel;
    NSString *_keyWord;
    NSString *_searchId;
    UIView *_dividingLine;
    UIViewController<AWEAwemeDetailTableViewControllerProtocol> *_detailVC;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_44;
@property(nonatomic) __weak UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(copy, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) NSArray *topicArray; // @synthesize topicArray=_topicArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)tokenType;
- (void)trackSearchResultShowEvent:(id)arg1 isSubCard:(_Bool)arg2;
- (void)trackSearchResultClickEvent:(_Bool)arg1 withModel:(id)arg2;
- (void)openDetail:(id)arg1;
- (_Bool)detailTableViewControllerShouldUseFeedImageCache:(id)arg1;
- (void)detailTableViewController:(id)arg1 scrollDidEndAtIndexPath:(id)arg2 model:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configUI;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
