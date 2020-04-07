//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class AWELoginButton, NSMutableArray, UIStackView;
@protocol DYSSOLoginViewDelegate;

@interface DYSSOLoginView : UIScrollView
{
    UIStackView *_stackView;
    NSMutableArray *_platforms;
    NSMutableArray *_buttons;
    AWELoginButton *_moreButton;
    unsigned long long _showCount;
    double _buttonSize;
    double _buttonSpace;
}

@property(nonatomic) double buttonSpace; // @synthesize buttonSpace=_buttonSpace;
@property(nonatomic) double buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) unsigned long long showCount; // @synthesize showCount=_showCount;
@property(retain, nonatomic) AWELoginButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableArray *platforms; // @synthesize platforms=_platforms;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)appleButtonClicked;
- (void)SSOButtonClicked:(id)arg1;
- (void)showAllPlatforms;
- (void)moreAction:(id)arg1;
- (id)loginButtonWithPlatform:(id)arg1;
- (void)commonInit;
- (id)initWithPlatforms:(id)arg1 showCount:(unsigned long long)arg2 space:(double)arg3 width:(double)arg4;

// Remaining properties
@property(nonatomic) __weak id <DYSSOLoginViewDelegate> delegate; // @dynamic delegate;

@end
