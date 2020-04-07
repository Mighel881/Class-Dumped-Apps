//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFBarButtonItem.h>

@class PSPDFSelectableBarButtonItemView, UIView;
@protocol PSPDFSystemBar;

@interface PSPDFSelectableBarButtonItem : PSPDFBarButtonItem
{
    PSPDFSelectableBarButtonItemView *_customView;
}

- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)customViewPressed:(id)arg1;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) UIView<PSPDFSystemBar> *targetToolbar;

@end
