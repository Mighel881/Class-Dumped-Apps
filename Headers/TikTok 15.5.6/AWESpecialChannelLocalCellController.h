//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWESpecialChannelContentModel, AWESpecialChannelLocalStatisticView, NSString, UICollectionView, UILabel, UIView;
@protocol AWEModernFeedCellContext;

@interface AWESpecialChannelLocalCellController : UIViewController <AWEModernFeedCellControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <AWEModernFeedCellContext> _context;
    UILabel *_locationLabel;
    UICollectionView *_collectionView;
    AWESpecialChannelContentModel *_contentModel;
    AWESpecialChannelLocalStatisticView *_localStatisticView;
    UIView *_startHintBGView;
    NSString *_referString;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_105;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) UIView *startHintBGView; // @synthesize startHintBGView=_startHintBGView;
@property(retain, nonatomic) AWESpecialChannelLocalStatisticView *localStatisticView; // @synthesize localStatisticView=_localStatisticView;
@property(retain, nonatomic) AWESpecialChannelContentModel *contentModel; // @synthesize contentModel=_contentModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)updateWithReferString:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)checkMoreContent;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
