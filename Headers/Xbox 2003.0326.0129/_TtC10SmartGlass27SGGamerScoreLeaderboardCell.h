//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXTableViewCell.h"

@class UICollectionView;

@interface _TtC10SmartGlass27SGGamerScoreLeaderboardCell : XBXTableViewCell
{
    // Error parsing type: , name: leaderboardSummaryCollectionView
}

+ (id)reuseIdentifier;
+ (double)cellHeight;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onDataContextStateChanged;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupObservers;
- (void)awakeFromNib;
@property(nonatomic, retain) UICollectionView *leaderboardSummaryCollectionView; // @synthesize leaderboardSummaryCollectionView;

@end

