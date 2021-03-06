//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGSearchBar, UIButton;

@interface IGSearchBarWithCancel : UIView
{
    _Bool _cancelButtonHidden;
    IGSearchBar *_searchBar;
    UIButton *_cancelButton;
}

@property(nonatomic) _Bool cancelButtonHidden; // @synthesize cancelButtonHidden=_cancelButtonHidden;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)setCancelButtonHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3 options:(unsigned long long)arg4;
- (void)setCancelButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)arg1;

@end

