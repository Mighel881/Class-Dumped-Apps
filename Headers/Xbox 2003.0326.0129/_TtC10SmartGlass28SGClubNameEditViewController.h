//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXModalViewController.h"

@class UILabel, UITextView, UIView, _TtC10SmartGlass16SGLocalizedLabel, _TtC10SmartGlass17SGLocalizedButton;

@interface _TtC10SmartGlass28SGClubNameEditViewController : XBXModalViewController
{
    // Error parsing type: , name: textView
    // Error parsing type: , name: textCountLabel
    // Error parsing type: , name: editView
    // Error parsing type: , name: actionButton
    // Error parsing type: , name: errorLabel
    // Error parsing type: , name: state
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)actionButtonClicked:(id)arg1;
- (void)onDismissViewTapped:(id)arg1;
- (void)onNavigatedFrom:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onNavigatedTo:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onInitialize;
@property(nonatomic) __weak _TtC10SmartGlass16SGLocalizedLabel *errorLabel; // @synthesize errorLabel;
@property(nonatomic) __weak _TtC10SmartGlass17SGLocalizedButton *actionButton; // @synthesize actionButton;
@property(nonatomic) __weak UIView *editView; // @synthesize editView;
@property(nonatomic) __weak UILabel *textCountLabel; // @synthesize textCountLabel;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView;

@end

