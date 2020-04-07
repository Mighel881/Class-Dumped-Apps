//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWERateAlertButton, AWERateSlider, NSString, UILabel, UIView;

@interface AWERateViewController : UIViewController
{
    CDUnknownBlockType _finishedDisplayViewController;
    NSString *_rateWindowTypeString;
    UIView *_backgroundView;
    UIView *_alertView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    AWERateSlider *_rateSlider;
    UIView *_seperatorHorizontalFirst;
    UIView *_seperatorHorizontalSecond;
    UIView *_seperatorVertical;
    AWERateAlertButton *_cancelButton;
    AWERateAlertButton *_submitButton;
}

@property(retain, nonatomic) AWERateAlertButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) AWERateAlertButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *seperatorVertical; // @synthesize seperatorVertical=_seperatorVertical;
@property(retain, nonatomic) UIView *seperatorHorizontalSecond; // @synthesize seperatorHorizontalSecond=_seperatorHorizontalSecond;
@property(retain, nonatomic) UIView *seperatorHorizontalFirst; // @synthesize seperatorHorizontalFirst=_seperatorHorizontalFirst;
@property(retain, nonatomic) AWERateSlider *rateSlider; // @synthesize rateSlider=_rateSlider;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *rateWindowTypeString; // @synthesize rateWindowTypeString=_rateWindowTypeString;
@property(copy, nonatomic) CDUnknownBlockType finishedDisplayViewController; // @synthesize finishedDisplayViewController=_finishedDisplayViewController;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1 hasReplied:(_Bool)arg2;
- (void)cancel;
- (void)submit;
- (void)rateChanged;
- (void)setupUI;
- (void)viewDidLoad;

@end
