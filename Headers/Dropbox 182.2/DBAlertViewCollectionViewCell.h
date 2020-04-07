//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DBAlertAction, DBAlertButton, NSArray, UIView;

@interface DBAlertViewCollectionViewCell : UICollectionViewCell
{
    DBAlertButton *_button;
    UIView *_separatorView;
    NSArray *_trailingSeparatorConstraints;
    NSArray *_bottomSeparatorConstraints;
    DBAlertAction *_alertAction;
    long long _separatorPosition;
}

+ (id)identifier;
@property(nonatomic) long long separatorPosition; // @synthesize separatorPosition=_separatorPosition;
@property(retain, nonatomic) DBAlertAction *alertAction; // @synthesize alertAction=_alertAction;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)db_selectButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
