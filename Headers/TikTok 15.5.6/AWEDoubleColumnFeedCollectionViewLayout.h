//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface AWEDoubleColumnFeedCollectionViewLayout : UICollectionViewLayout
{
    _Bool _shouldFocusFirstItem;
    double _minimumColumnSpacing;
    double _minimumInteritemSpacing;
    NSMutableDictionary *_sectionItemAttributes;
    NSMutableArray *_allItemAttributes;
    long long _currentRow;
    long long _currentColumn;
    long long _maxColumnPerRow;
    struct CGSize _firstItemSize;
    struct CGSize _itemSize;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) long long maxColumnPerRow; // @synthesize maxColumnPerRow=_maxColumnPerRow;
@property(nonatomic) long long currentColumn; // @synthesize currentColumn=_currentColumn;
@property(nonatomic) long long currentRow; // @synthesize currentRow=_currentRow;
@property(retain, nonatomic) NSMutableArray *allItemAttributes; // @synthesize allItemAttributes=_allItemAttributes;
@property(retain, nonatomic) NSMutableDictionary *sectionItemAttributes; // @synthesize sectionItemAttributes=_sectionItemAttributes;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumColumnSpacing; // @synthesize minimumColumnSpacing=_minimumColumnSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct CGSize firstItemSize; // @synthesize firstItemSize=_firstItemSize;
@property(nonatomic) _Bool shouldFocusFirstItem; // @synthesize shouldFocusFirstItem=_shouldFocusFirstItem;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (double)getHeightForRow:(unsigned long long)arg1;
- (double)getTopYForRow:(unsigned long long)arg1;
- (void)addAttributesForSection:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)commonInit;

@end

