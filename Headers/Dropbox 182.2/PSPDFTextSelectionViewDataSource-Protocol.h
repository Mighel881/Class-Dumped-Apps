//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFOverridable-Protocol.h>
#import <PSPDFKitUI/UICoordinateSpace-Protocol.h>

@class PSPDFDocument, UIScrollView, UIView;
@protocol UICoordinateSpace;

@protocol PSPDFTextSelectionViewDataSource <PSPDFOverridable, UICoordinateSpace>
@property(readonly, nonatomic) id <UICoordinateSpace> pdfCoordinateSpace;
@property(readonly, nonatomic) UIView *spreadView;
@property(readonly, nonatomic) UIScrollView *zoomView;
@property(readonly, nonatomic) unsigned long long pageIndex;
@property(readonly, nonatomic) PSPDFDocument *document;

@optional
@property(readonly, nonatomic) _Bool textSelectionShouldSnapToWord;
@property(readonly, nonatomic) unsigned long long textSelectionMode;
@property(readonly, nonatomic, getter=isImageSelectionEnabled) _Bool imageSelectionEnabled;
@property(readonly, nonatomic, getter=isTextSelectionEnabled) _Bool textSelectionEnabled;
@end
