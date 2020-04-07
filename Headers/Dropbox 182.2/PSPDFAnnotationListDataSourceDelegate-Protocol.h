//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSArray, PSPDFAnnotation, PSPDFAnnotationListDataSource, PSPDFIndexPathDiff;

@protocol PSPDFAnnotationListDataSourceDelegate <NSObject>

@optional
- (_Bool)annotationListDataSource:(PSPDFAnnotationListDataSource *)arg1 shouldLoadAnnotation:(PSPDFAnnotation *)arg2 onPageAtIndex:(unsigned long long)arg3;
- (NSArray *)annotationListDataSource:(PSPDFAnnotationListDataSource *)arg1 loadAnnotationsOnPageAtIndex:(unsigned long long)arg2;
- (void)annotationListDataSource:(PSPDFAnnotationListDataSource *)arg1 updatePagesAndAnnotationsWithIndexPathDiff:(PSPDFIndexPathDiff *)arg2;
- (void)annotationListDataSourceDidEndUpdates:(PSPDFAnnotationListDataSource *)arg1;
- (void)annotationListDataSourceWillBeginUpdates:(PSPDFAnnotationListDataSource *)arg1;
- (void)annotationListDataSourceDidSuppressUpdates:(PSPDFAnnotationListDataSource *)arg1;
- (_Bool)annotationListDataSourceShouldSuppressUpdates:(PSPDFAnnotationListDataSource *)arg1;
- (void)annotationListDataSourceDidReloadAnnotations:(PSPDFAnnotationListDataSource *)arg1 aborted:(_Bool)arg2;
- (void)annotationListDataSourceWillReloadAnnotations:(PSPDFAnnotationListDataSource *)arg1;
@end
