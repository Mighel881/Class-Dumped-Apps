//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface _TtC11CoreSwiftUI33CollectionViewClusteredListLayout : UICollectionViewLayout
{
    // Error parsing type: , name: itemSpacing
    // Error parsing type: , name: sectionInsets
    // Error parsing type: , name: contentInsets
    // Error parsing type: , name: clusterOuterPad
    // Error parsing type: , name: clusterInnerPad
    // Error parsing type: , name: alignContentToBottom
    // Error parsing type: , name: autoClusterUsingItemHeadersAndFooters
    // Error parsing type: , name: defaultItemHeight
    // Error parsing type: , name: lastBounds
    // Error parsing type: , name: contentSize
    // Error parsing type: , name: invalidationContexts
    // Error parsing type: , name: itemAttributes
    // Error parsing type: , name: itemHeaderAttributes
    // Error parsing type: , name: itemFooterAttributes
    // Error parsing type: , name: itemPaddings
    // Error parsing type: , name: supplementaryAttribsForceReapplyCounter
    // Error parsing type: , name: clusterIdMap
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;

@end
