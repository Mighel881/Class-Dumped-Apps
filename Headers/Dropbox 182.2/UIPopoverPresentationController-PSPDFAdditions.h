//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverPresentationController.h>

@class UIBarButtonItem, UIPopoverBackgroundView;

@interface UIPopoverPresentationController (PSPDFAdditions)
+ (void)load;
@property(readonly, nonatomic) UIPopoverBackgroundView *pspdf_backgroundView;
@property(readonly, nonatomic) struct CGRect pspdf_frameForButtonItem;
- (void)pspdf_updateBarButtonView;
@property(retain, nonatomic) UIBarButtonItem *pspdf_barButtonItem;
@end
