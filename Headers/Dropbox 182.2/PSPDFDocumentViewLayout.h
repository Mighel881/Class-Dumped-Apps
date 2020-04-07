//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class PSPDFConfiguration, PSPDFDocument, PSPDFDocumentViewSpreadCalculator;
@protocol PSPDFDocumentViewLayoutDelegate;

@interface PSPDFDocumentViewLayout : UICollectionViewLayout
{
    struct {
        unsigned int delegateWillInvalidateLayoutWithContext:1;
        unsigned int delegateDidInvalidateLayoutWithContext:1;
    } _flags;
    _Bool _spreadBasedZooming;
    PSPDFDocument *_document;
    PSPDFConfiguration *_configuration;
    PSPDFDocumentViewSpreadCalculator *_spreadCalculator;
    id <PSPDFDocumentViewLayoutDelegate> _delegate;
    struct UIEdgeInsets _additionalScrollViewFrameInsets;
    struct CGRect _viewport;
}

+ (_Bool)requiresPageViewControllerSetup;
+ (Class)invalidationContextClass;
+ (id)pageCurlLayout;
+ (id)continuousScrollingLayout;
+ (id)scrollPerSpreadLayout;
@property(nonatomic) struct CGRect viewport; // @synthesize viewport=_viewport;
@property(nonatomic) __weak id <PSPDFDocumentViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PSPDFDocumentViewSpreadCalculator *spreadCalculator; // @synthesize spreadCalculator=_spreadCalculator;
@property(nonatomic) struct UIEdgeInsets additionalScrollViewFrameInsets; // @synthesize additionalScrollViewFrameInsets=_additionalScrollViewFrameInsets;
@property(nonatomic) _Bool spreadBasedZooming; // @synthesize spreadBasedZooming=_spreadBasedZooming;
- (void).cxx_destruct;
- (id)description;
- (void)invalidateConfiguration;
@property(readonly, nonatomic) struct UIEdgeInsets scrollViewFrameInsets;
- (struct CGSize)sizeByAddingPageInfoSizeForIndex:(unsigned long long)arg1 toSize:(struct CGSize)arg2;
- (struct CGSize)sizeForSpreadAtIndex:(long long)arg1;
- (struct CGSize)pdfSizeForSpreadAtIndex:(long long)arg1;
- (struct CGSize)effectiveViewportSizeForViewport:(struct CGRect)arg1;
@property(nonatomic) long long spreadMode;
- (struct _NSRange)pageRangeForSpreadAtIndex:(long long)arg1;
- (long long)spreadIndexForPageAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSpreads;
- (struct CGPoint)contentOffsetForContinuousSpreadIndex:(double)arg1;
- (double)continuousSpreadIndexForContentOffset:(struct CGPoint)arg1;
@property(retain, nonatomic) PSPDFConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForViewportChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForViewportChange:(struct CGRect)arg1;

@end
