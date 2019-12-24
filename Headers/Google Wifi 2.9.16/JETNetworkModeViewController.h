//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "JETTopBarViewDelegate-Protocol.h"

@class JETSelectActionContentViewObject, JETTopBarView;

@interface JETNetworkModeViewController : JETGroupAwareCollectionViewController <JETTopBarViewDelegate>
{
    JETSelectActionContentViewObject *_rootAccessPointItem;
    JETTopBarView *_topBarView;
}

@property(retain, nonatomic) JETTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) JETSelectActionContentViewObject *rootAccessPointItem; // @synthesize rootAccessPointItem=_rootAccessPointItem;
- (void).cxx_destruct;
- (id)topBarBadgeTextWithBackgroundColor:(id)arg1;
- (void)rootAccessPointItemTapped;
- (id)buildMeshAccessPointItems;
- (id)rootAccessPointNetworkMode;
- (void)topBarTapped;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)accessPointsGroupIsUpdated;
- (void)constructModel;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

@end
