//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWESearchBar, UIButton;

@interface AWEFeedSearchMiddleNavView : UIView
{
    _Bool _cancelHiddenStatus;
    AWESearchBar *_searchBar;
    UIButton *_cancelButton;
}

@property(nonatomic) _Bool cancelHiddenStatus; // @synthesize cancelHiddenStatus=_cancelHiddenStatus;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)hideCancelButtonAnimation:(CDUnknownBlockType)arg1;
- (void)showCancelButtonAnimationAnimated:(_Bool)arg1;
- (void)cancelButtonShowImage;
- (void)cancelButtonShowText;
- (void)setupLayout;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
