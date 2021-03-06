//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UICollectionViewLayout;
@protocol ASCollectionDataSource, ASCollectionDelegate, ASCollectionViewLayoutInspecting;

@interface _ASCollectionPendingState : NSObject
{
    _Bool _allowsSelection;
    _Bool _allowsMultipleSelection;
    _Bool _inverted;
    _Bool _usesSynchronousDataLoading;
    _Bool _alwaysBounceVertical;
    _Bool _alwaysBounceHorizontal;
    _Bool _animatesContentOffset;
    _Bool _showsVerticalScrollIndicator;
    _Bool _showsHorizontalScrollIndicator;
    id <ASCollectionDelegate> _delegate;
    id <ASCollectionDataSource> _dataSource;
    UICollectionViewLayout *_collectionViewLayout;
    long long _rangeMode;
    double _leadingScreensForBatching;
    id <ASCollectionViewLayoutInspecting> _layoutInspector;
    struct CGPoint _contentOffset;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) _Bool showsHorizontalScrollIndicator; // @synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator;
@property(nonatomic) _Bool showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(nonatomic) _Bool animatesContentOffset; // @synthesize animatesContentOffset=_animatesContentOffset;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool alwaysBounceHorizontal; // @synthesize alwaysBounceHorizontal=_alwaysBounceHorizontal;
@property(nonatomic) _Bool alwaysBounceVertical; // @synthesize alwaysBounceVertical=_alwaysBounceVertical;
@property(nonatomic) __weak id <ASCollectionViewLayoutInspecting> layoutInspector; // @synthesize layoutInspector=_layoutInspector;
@property(nonatomic) double leadingScreensForBatching; // @synthesize leadingScreensForBatching=_leadingScreensForBatching;
@property(nonatomic) _Bool usesSynchronousDataLoading; // @synthesize usesSynchronousDataLoading=_usesSynchronousDataLoading;
@property(nonatomic) _Bool inverted; // @synthesize inverted=_inverted;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) long long rangeMode; // @synthesize rangeMode=_rangeMode;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak id <ASCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ASCollectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;

@end

