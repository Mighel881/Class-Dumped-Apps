//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSString, PSPDFAnnotationStyleViewController, PSPDFFreeTextAccessoryView;

@protocol PSPDFFreeTextAccessoryViewDelegate <NSObject>

@optional
- (void)freeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1 didChangeProperty:(NSString *)arg2;
- (_Bool)freeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1 shouldChangeProperty:(NSString *)arg2;
- (PSPDFAnnotationStyleViewController *)freeTextAccessoryViewDidRequestInspector:(PSPDFFreeTextAccessoryView *)arg1;
- (void)clearButtonPressedOnFreeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1;
- (void)doneButtonPressedOnFreeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1;
@end

