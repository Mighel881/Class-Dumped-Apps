//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/UICollectionViewDataSource-Protocol.h>

@class NSIndexPath, UICollectionView;

@protocol TGDraggableCollectionViewDataSource <UICollectionViewDataSource>

@optional
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 didMoveToIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 willMoveToIndexPath:(NSIndexPath *)arg3;
@end
