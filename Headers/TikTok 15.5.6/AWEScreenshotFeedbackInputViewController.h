//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextField, UITextView;

@interface AWEScreenshotFeedbackInputViewController : UIViewController
{
    NSString *_imageURLString;
    CDUnknownBlockType _feedbackSuccessHandler;
    UITextView *_postContentTextView;
    UITextField *_postContactTextField;
}

@property(retain, nonatomic) UITextField *postContactTextField; // @synthesize postContactTextField=_postContactTextField;
@property(retain, nonatomic) UITextView *postContentTextView; // @synthesize postContentTextView=_postContentTextView;
@property(copy, nonatomic) CDUnknownBlockType feedbackSuccessHandler; // @synthesize feedbackSuccessHandler=_feedbackSuccessHandler;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
- (void).cxx_destruct;
- (void)uploadLog;
- (void)postFeedback:(id)arg1;
- (void)setupSubviews;
- (void)viewDidLoad;

@end
