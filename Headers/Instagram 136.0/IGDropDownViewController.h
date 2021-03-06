//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGDropDownContainerViewDelegate-Protocol.h>

@class IGChevronTitleButton, IGDropDownContainerView, NSArray, NSString, UIViewController;
@protocol IGDropDownViewControllerDelegate;

@interface IGDropDownViewController : IGViewController <IGDropDownContainerViewDelegate>
{
    IGDropDownContainerView *_containerView;
    IGChevronTitleButton *_dropDownTitle;
    NSArray *_viewControllers;
    _Bool _dropDownVisible;
    id <IGDropDownViewControllerDelegate> _delegate;
    unsigned long long _selectedIndex;
}

@property(nonatomic, getter=isDropDownVisible) _Bool dropDownVisible; // @synthesize dropDownVisible=_dropDownVisible;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <IGDropDownViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dropDownContainerViewDidTapOverlay:(id)arg1;
- (void)dropDownContainerView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)analyticsModule;
- (void)_onDropDownTapped;
@property(readonly, nonatomic) UIViewController *selectedViewController;
- (void)loadView;
- (id)initWithViewControllers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

