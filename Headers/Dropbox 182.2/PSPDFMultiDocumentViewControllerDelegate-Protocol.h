//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSArray, PSPDFDocument, PSPDFMultiDocumentViewController;

@protocol PSPDFMultiDocumentViewControllerDelegate <NSObject>

@optional
- (void)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 didChangeVisibleDocument:(PSPDFDocument *)arg2;
- (void)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 willChangeVisibleDocument:(PSPDFDocument *)arg2;
- (void)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 didChangeDocuments:(NSArray *)arg2;
- (void)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 willChangeDocuments:(NSArray *)arg2;
@end
