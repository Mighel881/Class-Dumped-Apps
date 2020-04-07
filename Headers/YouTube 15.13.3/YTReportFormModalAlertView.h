//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTAlertView.h>

#import <Module_Framework/YTLegalReportCheckboxViewDelegate-Protocol.h>
#import <Module_Framework/YTOptionsContentViewDelegate-Protocol.h>

@class NSString, QTMButton, UIView, YTLegalReportCheckboxView, YTOptionsContentView;
@protocol YTFormattedStringLabelDelegate;

@interface YTReportFormModalAlertView : YTAlertView <YTLegalReportCheckboxViewDelegate, YTOptionsContentViewDelegate>
{
    _Bool _alertViewHasRevealed;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    QTMButton *_submitButton;
    NSString *_submitButtonTitle;
    NSString *_nextButtonTitle;
    YTOptionsContentView *_optionsContentView;
    YTLegalReportCheckboxView *_legalReportCheckboxView;
    UIView *_topDivider;
    UIView *_bottomDivider;
}

+ (id)reportFormModalAlertViewWithRenderer:(id)arg1 colorStyle:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) UIView *bottomDivider; // @synthesize bottomDivider=_bottomDivider;
@property(retain, nonatomic) UIView *topDivider; // @synthesize topDivider=_topDivider;
@property(retain, nonatomic) YTLegalReportCheckboxView *legalReportCheckboxView; // @synthesize legalReportCheckboxView=_legalReportCheckboxView;
@property(retain, nonatomic) YTOptionsContentView *optionsContentView; // @synthesize optionsContentView=_optionsContentView;
@property(retain, nonatomic) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;
@property(retain, nonatomic) NSString *submitButtonTitle; // @synthesize submitButtonTitle=_submitButtonTitle;
@property(retain, nonatomic) QTMButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
- (void).cxx_destruct;
- (id)findCustomContentScrollView;
- (void)handleModifyReportFormCommand:(id)arg1;
- (void)optionsContentViewDidLayoutSubviews;
- (void)didChangeSelectedOptionSelectableItem:(id)arg1;
- (void)didTapLegalReportCheckboxView;
- (void)revealDialog;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
