//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ASTThemable-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol ASTHotwordTrainingHeaderViewDataSource;

@interface ASTHotwordTrainingHeaderView : UIView <ASTThemable>
{
    id <ASTHotwordTrainingHeaderViewDataSource> _dataSource;
    UIImageView *_logo;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)setUpSubviews;
- (void)applyTheme:(unsigned long long)arg1;
- (void)update;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

