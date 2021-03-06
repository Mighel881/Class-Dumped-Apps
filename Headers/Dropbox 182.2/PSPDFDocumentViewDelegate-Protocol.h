//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class PSPDFDocumentView, PSPDFSpreadView, UIScrollView;

@protocol PSPDFDocumentViewDelegate <NSObject>
- (void)documentView:(PSPDFDocumentView *)arg1 configureZoomView:(UIScrollView *)arg2 forSpreadAtIndex:(long long)arg3;
- (void)documentView:(PSPDFDocumentView *)arg1 configureScrollView:(UIScrollView *)arg2;
- (void)documentView:(PSPDFDocumentView *)arg1 didScrollInnerScollView:(UIScrollView *)arg2 forSpreadAtIndex:(long long)arg3;
- (void)documentView:(PSPDFDocumentView *)arg1 didUpdateZoomScale:(double)arg2 forSpreadAtIndex:(long long)arg3;
- (void)documentView:(PSPDFDocumentView *)arg1 didCleanupSpreadView:(PSPDFSpreadView *)arg2 forSpreadAtIndex:(long long)arg3;
- (void)documentView:(PSPDFDocumentView *)arg1 didConfigureSpreadView:(PSPDFSpreadView *)arg2 forSpreadAtIndex:(long long)arg3;
- (void)documentView:(PSPDFDocumentView *)arg1 didEndDisplayingSpreadView:(PSPDFSpreadView *)arg2 forSpreadAtIndex:(long long)arg3;
- (void)documentView:(PSPDFDocumentView *)arg1 willBeginDisplayingSpreadView:(PSPDFSpreadView *)arg2 forSpreadAtIndex:(long long)arg3;
- (void)documentView:(PSPDFDocumentView *)arg1 didChangeContinuousSpreadIndex:(double)arg2;
- (void)documentView:(PSPDFDocumentView *)arg1 didChangeSpreadIndex:(long long)arg2;
@end

