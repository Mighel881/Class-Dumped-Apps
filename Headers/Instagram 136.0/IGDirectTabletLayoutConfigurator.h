//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVerticalCollectionViewLayout, UICollectionView, UICollectionViewFlowLayout;

@interface IGDirectTabletLayoutConfigurator : NSObject
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_plainLayout;
    IGVerticalCollectionViewLayout *_borderingLayout;
}

@property(readonly, nonatomic) IGVerticalCollectionViewLayout *borderingLayout; // @synthesize borderingLayout=_borderingLayout;
@property(readonly, nonatomic) UICollectionViewFlowLayout *plainLayout; // @synthesize plainLayout=_plainLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)updateLayout;
- (id)initWithCollectionView:(id)arg1;

@end

