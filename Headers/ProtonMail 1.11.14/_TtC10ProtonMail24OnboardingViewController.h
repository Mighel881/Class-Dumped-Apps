//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIPageControl, UIScrollView, UIView;

@interface _TtC10ProtonMail24OnboardingViewController : UIViewController
{
    // Error parsing type: , name: contentView
    // Error parsing type: , name: contentScrollView
    // Error parsing type: , name: pageControlView
    // Error parsing type: , name: learnmoreButton
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: pageWidth
    // Error parsing type: , name: onboardingList
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)closeAction:(id)arg1;
- (void)learnMoreAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak UIButton *learnmoreButton; // @synthesize learnmoreButton;
@property(nonatomic) __weak UIPageControl *pageControlView; // @synthesize pageControlView;
@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;

@end
